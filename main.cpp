#include "stdafx.h"
#include "TrustyBank.h"
#include <QtWidgets/QApplication>
#include <QDebug>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    qDebug() << "Application starting...";
    TrustyBank w;
    w.show();
    return a.exec();
}