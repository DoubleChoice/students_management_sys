#include "msqlcfg.h"

MsqlCfg::MsqlCfg(QString dbname,QString conn):dbname(dbname),conn(conn)
{
    settings = new QSettings("C:/Users/mpwor/Documents/stu_info_sys/database.ini",QSettings::IniFormat);
    hostname = settings->value("DATABASE/HOSTNAME","").toString();
    psw = settings->value("DATABASE/PASSWORD","").toString();
    username = settings->value("DATABASE/USERNAME","").toString();
    port = settings->value("DATABASE/PORT").toUInt();
    qDebug()<<QSqlDatabase::drivers();
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName(dbname);
    db.setHostName(hostname);
    db.setPassword(psw);
    db.setUserName(username);
    db.setPort(port);
    db.open();
    qDebug()<< db.lastError().text();
}

MsqlCfg::~MsqlCfg()
{
    delete settings;
    settings = nullptr;
}
