#ifndef ALBUMINTERFACE_H
#define ALBUMINTERFACE_H

#include <QMainWindow>

namespace Ui {
class AlbumInterface;
}

class AlbumInterface : public QMainWindow
{
    Q_OBJECT

public:
    explicit AlbumInterface(QWidget *parent = 0);
    ~AlbumInterface();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::AlbumInterface *ui;
};

#endif // ALBUMINTERFACE_H
