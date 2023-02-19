/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *links;
    QLabel *label_2;
    QLineEdit *dostups;
    QLabel *label_3;
    QLineEdit *dates;
    QHBoxLayout *horizontalLayout;
    QLabel *message;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *Delete;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(659, 367);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(1200, 1000));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMaximumSize(QSize(1200, 1400));
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        centralwidget->setFont(font);
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(300, 200));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nunito Black"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setContextMenuPolicy(Qt::DefaultContextMenu);

        verticalLayout_2->addWidget(label);

        links = new QLineEdit(centralwidget);
        links->setObjectName(QString::fromUtf8("links"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Nunito"));
        font2.setPointSize(11);
        links->setFont(font2);

        verticalLayout_2->addWidget(links);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        dostups = new QLineEdit(centralwidget);
        dostups->setObjectName(QString::fromUtf8("dostups"));
        dostups->setFont(font2);

        verticalLayout_2->addWidget(dostups);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);

        dates = new QLineEdit(centralwidget);
        dates->setObjectName(QString::fromUtf8("dates"));
        dates->setFont(font2);

        verticalLayout_2->addWidget(dates);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        message = new QLabel(centralwidget);
        message->setObjectName(QString::fromUtf8("message"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Nunito"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setWeight(50);
        message->setFont(font3);
        message->setCursor(QCursor(Qt::BlankCursor));

        horizontalLayout->addWidget(message);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 42));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Nokia Sans S60"));
        font4.setPointSize(11);
        font4.setBold(false);
        font4.setWeight(50);
        pushButton->setFont(font4);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(152, 251, 152);"));

        horizontalLayout->addWidget(pushButton);

        Delete = new QPushButton(centralwidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setMinimumSize(QSize(0, 42));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Nokia Sans S60"));
        font5.setPointSize(11);
        Delete->setFont(font5);
        Delete->setCursor(QCursor(Qt::PointingHandCursor));
        Delete->setStyleSheet(QString::fromUtf8("background-color: rgba(202, 58, 48, 100);"));

        horizontalLayout->addWidget(Delete);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 659, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\201\321\213\320\273\320\272\321\203:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \320\264\320\276\321\201\321\202\321\203\320\277\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\264\320\260\321\202\321\203 \320\277\320\276\321\201\320\265\321\211\320\265\320\275\320\270\321\217:", nullptr));
        message->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        Delete->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
