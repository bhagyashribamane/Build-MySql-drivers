#ifndef DBMANAGER_H
#define DBMANAGER_H
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlError>
#include<QDebug>
class DbManager
{
public:
       explicit DbManager(const QString& path);


    bool isopen() const;

    bool addEmployee(const QString& name ,int age , double salary);
    bool listEmployee();
    bool updateEmployee(int id , QString& name, int age , double salary);
    bool deleteEmployee(int id);
    DbManager();

private:
    QSqlDatabase m_db;
};

#endif // DBMANAGER_H
