
/**
*So good 
**/

#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QTableView>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>


void configure(QWidget& window)
{
    QLabel* name = new QLabel(QApplication::translate("topplace", "Name : "));
    QLabel* value = new QLabel(QApplication::translate("topplace", "Value : "));
    QLineEdit* edit = new QLineEdit();
    QLineEdit* editvalue = new QLineEdit();
    QTableView* table = new QTableView();

    QHBoxLayout* editlayout = new QHBoxLayout();
    editlayout->addWidget(name);
    editlayout->addWidget(edit);
    editlayout->addWidget(value);
    editlayout->addWidget(editvalue);


    QVBoxLayout* tablelayut = new QVBoxLayout();
    tablelayut->addLayout(editlayout);
    tablelayut->addWidget(table);

    window.setLayout(tablelayut);
    window.setWindowTitle(QApplication::translate("nestedLayout", "Nested Layout"));
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget window;

    configure(window);

    window.show();

    return a.exec();
}