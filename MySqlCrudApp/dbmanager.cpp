#include "dbmanager.h"

DbManager::DbManager(const QString& path) {
    m_db=QSqlDatabase::addDatabase("QMYSQL");
    m_db.setHostName("localhost");
    m_db.setDatabaseName("empdata");
    m_db.setUserName("root");
    m_db.setPassword("Pwtech@999");


    if(!m_db.open()){
        qDebug()<<"Error:: datbase connection failed"<<m_db.lastError().text();
    }
    else{
        qDebug()<<"Connection . ok";
    }


    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXIST Employee("
               " id int PRIMARY KEY,"
               "name VARCHAR(200) NOT NULL,"
               "age INT,"
               "salary DOUBLE)");
}

bool DbManager::isopen() const
{
    return m_db.isOpen();
}

bool DbManager::addEmployee(const QString &name, int age, double salary)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Employee(name,age,salary) VALUES(:name, :age,:salary)");
    query.bindValue(":name",name);
    query.bindValue(":age",age);
    query.bindValue(":salary",salary);

    if(!query.exec()){
        qDebug()<<"Add Employee Error"<<query.lastError().text();
    }
}

