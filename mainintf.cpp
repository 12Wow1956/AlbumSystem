#include "mainintf.h"
#include "ui_mainintf.h"

MainIntf::MainIntf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainIntf)
{
    ui->setupUi(this);
}

MainIntf::~MainIntf()
{
    delete ui;
}
