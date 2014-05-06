#ifndef CACHE_H
#define CACHE_H
#include <QString>
#include <QStringList>

class Cache
{
private:
    QList<QString> readwrite;
    QList<QString> addresses;
    QList<int> int_addresses;
public:
    Cache();
    void Read(QString filename);
    void to_int();
    void DirectMap(int cachesize, int blocksize, int wt_enable);
};

#endif // CACHE_H
