#include <QDebug>
#include "cache.h"
#include <QFile>
#include <QString>
#include <QStringList>

//Global variables.
QList<QString> rw_instruction;//Read or write
QList<QString> address_instruction;//Addresses


int main(int argc, char *argv[])
{
    Cache c1;
    c1.Read(argv[1]);
    qDebug()<<"Hello world";
    return 0;
}