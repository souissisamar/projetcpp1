#include "mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
cout<<"Gestion Vlients"<<endl;
QApplication a(argc, argv);
    MainWindow w;
    w.show();

 return a.exec();

}
