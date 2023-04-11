#include "mainwindow.h"
#include <QApplication>
#include "albuminterface.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   MainWindow w;
   w.show();

//     AlbumInterface ai;
//     ai.show();

    return a.exec();
}
