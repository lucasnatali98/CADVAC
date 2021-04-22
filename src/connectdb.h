#ifndef CONNECTDB_H
#define CONNECTDB_H
#include <QtSql>
#include <QDebug>
#include <iostream>
using namespace std;

class ConnectDb{
public:
    QSqlDatabase dataBase;

    ConnectDb(){}

    bool openDb(){
        dataBase = QSqlDatabase::addDatabase("QSQLITE");
        QString local = qApp->applicationDirPath();
        QString db = local+"/cadvac_db/cadvac_db.db";
        dataBase.setDatabaseName(db);

        if(dataBase.open()){
            return true;
        } else {
            return false;
        }
    }

    void closeDb(){
        dataBase.close();
    }

};

#endif // CONNECTDB_H
