#include <QCoreApplication>
#include "dbmanager.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    DbManager db("EmployeeDatabase");

    if(db.isopen()){
        db.addEmployee("shruti",25,45000.0);
        db.addEmployee("prasad",21,2300.99);
    }


    return a.exec();
}
