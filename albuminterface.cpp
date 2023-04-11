#include "albuminterface.h"
#include "ui_albuminterface.h"
#include <QFile>
#include <QFileDialog>

AlbumInterface::AlbumInterface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AlbumInterface)
{
    ui->setupUi(this);
    this->resize(800, 600);
}

AlbumInterface::~AlbumInterface()
{
    delete ui;
}

// 上传照片
void AlbumInterface::on_pushButton_3_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(2);
    QString strFile = QFileDialog::getOpenFileName(this, "打开图像","",
                                                       "PNG (*.png);; JPG (*.jpg);; GIF (*.gif);; BPM (*.bpm);; ALL (*.*)");
    if (strFile.isEmpty()) {
        return;
    }

}

// 我的相册
void AlbumInterface::on_pushButton_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}

// 新建相册
void AlbumInterface::on_pushButton_2_clicked()
{

    this->ui->stackedWidget->setCurrentIndex(1);
}

// 新建相册 浏览...
void AlbumInterface::on_pushButton_11_clicked()
{
    QString strFile = QFileDialog::getOpenFileName(this, "选择路径");
    if (strFile.isEmpty()) {
        return;
    }
    this->ui->lineEdit_2->setText(strFile);
}

// 删除相册
void AlbumInterface::on_pushButton_4_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(3);
}

// 退出登录
void AlbumInterface::on_pushButton_5_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(4);
}


