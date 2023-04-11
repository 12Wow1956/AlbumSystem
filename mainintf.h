#ifndef MAININTF_H
#define MAININTF_H

#include <QWidget>

namespace Ui {
class MainIntf;
}

class MainIntf : public QWidget
{
    Q_OBJECT

public:
    explicit MainIntf(QWidget *parent = 0);
    ~MainIntf();

private:
    Ui::MainIntf *ui;
};

#endif // MAININTF_H
