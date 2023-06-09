#include "signup.h"
#include "ui_signup.h"
#include "mainwindow.h"
#include <QMessageBox>

Signup::Signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
}

Signup::~Signup()
{
    delete ui;
}

// 返回登录按钮
void Signup::on_pushButton_2_clicked()
{
    MainWindow *qm = new MainWindow;
    qm->show();
    this->close();
}

void Signup::on_pushButton_clicked()
{
    sqlite_Init();
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_passwd->text();
    QString surepass = ui->lineEdit_surepasswd->text();
    //判断密码是否一致
    if(password == surepass)
    {
        QString sql=QString("insert into user(username,password) values('%1','%2');")
                .arg(username).arg(password);
        //创建执行语句对象
        QSqlQuery query;
        //判断执行结果
        if(!query.exec(sql))
        {
            qDebug()<<"insert into error";
            QMessageBox::information(this,"注册认证","插入失败！");
        }
        else
        {
            qDebug()<<"insert into success";
            QMessageBox::information(this,"注册认证","插入成功！");
            MainWindow *w = new MainWindow;
            w->show();
            this->close();
        }

    }else{
        QMessageBox::information(this,"注册认证","两次密码输入不一致");
    }

}
