#ifndef MSQLCFG_H
#define MSQLCFG_H
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSettings>
#include <QSqlError>

class MsqlCfg
{
public:
    MsqlCfg(QString dbname,QString conn);
    ~MsqlCfg();
    QSqlDatabase db;
private:
    QSettings* settings;
    QString hostname,dbname,username,psw,conn;
    uint port;
};

#endif // MSQLCFG_H
