#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signup.h"
#include <QMessageBox>
#include "albuminterface.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void sqlite_Init()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("user.db");
    if(!db.open())
    {
        qDebug()<<"open error";
    }
    //create excle
    QString createsql=QString("create table if not exists user(id integer primary key autoincrement,"
                        "username ntext unique not NULL,"
                        "password ntext not NULL)");
    QSqlQuery query;
    if(!query.exec(createsql)){
        qDebug()<<"table create error";
    }
    else{
        qDebug()<<"table create success";
    }
}

// 登录
void MainWindow::on_pushButton_clicked()
{
    sqlite_Init();
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString sql=QString("select * from user where username='%1' and password='%2'")
            .arg(username).arg(password);
    //创建执行语句对象
    QSqlQuery query(sql);
    //判断执行结果
    if(!query.next())
    {
        qDebug()<<"Login error";
        QMessageBox::information(this,"登录认证","登录失败,账户或者密码错误");
    }
    else
    {
        qDebug()<<"Login success";
        QMessageBox::information(this,"登录认证","登录成功");
        //登录成功后可以跳转到其他页面
        AlbumInterface *ai = new AlbumInterface;
        ai->show();
        this->close();
    }

}

// 注册
void MainWindow::on_pushButton_2_clicked()
{
    this->close();
    Signup *s = new Signup;
    s->show();
}
