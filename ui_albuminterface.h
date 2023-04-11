/********************************************************************************
** Form generated from reading UI file 'albuminterface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMINTERFACE_H
#define UI_ALBUMINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlbumInterface
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QStackedWidget *stackedWidget;
    QWidget *page_myAlbum;
    QPushButton *pushButton_6;
    QWidget *page_newAlbum;
    QPushButton *pushButton_7;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_11;
    QWidget *page_uploadPhotos;
    QPushButton *pushButton_8;
    QWidget *page_deleteAlbums;
    QPushButton *pushButton_9;
    QWidget *page_exitLogin;
    QPushButton *pushButton_10;
    QWidget *page_2;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_6;
    QMenu *menu_7;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AlbumInterface)
    {
        if (AlbumInterface->objectName().isEmpty())
            AlbumInterface->setObjectName(QStringLiteral("AlbumInterface"));
        AlbumInterface->resize(834, 646);
        centralwidget = new QWidget(AlbumInterface);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 70, 131, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(160, 30, 521, 521));
        page_myAlbum = new QWidget();
        page_myAlbum->setObjectName(QStringLiteral("page_myAlbum"));
        pushButton_6 = new QPushButton(page_myAlbum);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(0, 330, 101, 21));
        stackedWidget->addWidget(page_myAlbum);
        page_newAlbum = new QWidget();
        page_newAlbum->setObjectName(QStringLiteral("page_newAlbum"));
        pushButton_7 = new QPushButton(page_newAlbum);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 480, 101, 31));
        widget_2 = new QWidget(page_newAlbum);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(120, 190, 291, 81));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        widget_3 = new QWidget(page_newAlbum);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(120, 130, 221, 61));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(widget_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        widget_4 = new QWidget(page_newAlbum);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(120, 260, 441, 81));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget_4);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);

        pushButton_11 = new QPushButton(widget_4);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        horizontalLayout_3->addWidget(pushButton_11);

        stackedWidget->addWidget(page_newAlbum);
        page_uploadPhotos = new QWidget();
        page_uploadPhotos->setObjectName(QStringLiteral("page_uploadPhotos"));
        pushButton_8 = new QPushButton(page_uploadPhotos);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, 326, 81, 20));
        stackedWidget->addWidget(page_uploadPhotos);
        page_deleteAlbums = new QWidget();
        page_deleteAlbums->setObjectName(QStringLiteral("page_deleteAlbums"));
        pushButton_9 = new QPushButton(page_deleteAlbums);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(0, 330, 81, 21));
        stackedWidget->addWidget(page_deleteAlbums);
        page_exitLogin = new QWidget();
        page_exitLogin->setObjectName(QStringLiteral("page_exitLogin"));
        pushButton_10 = new QPushButton(page_exitLogin);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(0, 330, 71, 21));
        stackedWidget->addWidget(page_exitLogin);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        AlbumInterface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AlbumInterface);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 834, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        menu_6 = new QMenu(menubar);
        menu_6->setObjectName(QStringLiteral("menu_6"));
        menu_7 = new QMenu(menubar);
        menu_7->setObjectName(QStringLiteral("menu_7"));
        AlbumInterface->setMenuBar(menubar);
        statusbar = new QStatusBar(AlbumInterface);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AlbumInterface->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menu_5->menuAction());
        menubar->addAction(menu_6->menuAction());
        menubar->addAction(menu_7->menuAction());

        retranslateUi(AlbumInterface);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AlbumInterface);
    } // setupUi

    void retranslateUi(QMainWindow *AlbumInterface)
    {
        AlbumInterface->setWindowTitle(QApplication::translate("AlbumInterface", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AlbumInterface", "\346\210\221\347\232\204\347\233\270\345\206\214", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AlbumInterface", "\346\226\260\345\273\272\347\233\270\345\206\214", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AlbumInterface", "\344\270\212\344\274\240\347\205\247\347\211\207", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("AlbumInterface", "\345\210\240\351\231\244\347\233\270\345\206\214", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("AlbumInterface", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("AlbumInterface", "\346\210\221\347\232\204\347\233\270\345\206\214", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("AlbumInterface", "\346\226\260\345\273\272\347\233\270\345\206\214", Q_NULLPTR));
        label->setText(QApplication::translate("AlbumInterface", "\347\205\247\347\211\207\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("AlbumInterface", "\351\200\211\346\213\251\347\233\270\345\206\214\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("AlbumInterface", "\350\267\257  \345\276\204\357\274\232", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("AlbumInterface", "\346\265\217\350\247\210...", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("AlbumInterface", "\344\270\212\344\274\240\347\205\247\347\211\207", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("AlbumInterface", "\345\210\240\351\231\244\347\233\270\345\206\214", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("AlbumInterface", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        menu->setTitle(QApplication::translate("AlbumInterface", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("AlbumInterface", "\347\274\226\350\276\221", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("AlbumInterface", "\346\237\245\347\234\213", Q_NULLPTR));
        menu_4->setTitle(QApplication::translate("AlbumInterface", "\345\216\206\345\217\262", Q_NULLPTR));
        menu_5->setTitle(QApplication::translate("AlbumInterface", "\344\271\246\347\255\276", Q_NULLPTR));
        menu_6->setTitle(QApplication::translate("AlbumInterface", "\345\267\245\345\205\267", Q_NULLPTR));
        menu_7->setTitle(QApplication::translate("AlbumInterface", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AlbumInterface: public Ui_AlbumInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMINTERFACE_H
