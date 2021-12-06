/********************************************************************************
** Form generated from reading UI file 'terminal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMINAL_H
#define UI_TERMINAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_terminal
{
public:
    QWidget *centralWidget;
    QLabel *label;

    void setupUi(QMainWindow *terminal)
    {
        if (terminal->objectName().isEmpty())
            terminal->setObjectName(QStringLiteral("terminal"));
        terminal->resize(480, 272);
        centralWidget = new QWidget(terminal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 0, 480, 272));
        terminal->setCentralWidget(centralWidget);

        retranslateUi(terminal);

        QMetaObject::connectSlotsByName(terminal);
    } // setupUi

    void retranslateUi(QMainWindow *terminal)
    {
        terminal->setWindowTitle(QApplication::translate("terminal", "terminal", Q_NULLPTR));
        label->setText(QApplication::translate("terminal", "Hello World!!!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class terminal: public Ui_terminal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMINAL_H
