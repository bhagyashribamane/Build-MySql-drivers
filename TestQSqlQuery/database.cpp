#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
db.setHostName("localhost");
db.setDatabaseName("employee_db");
db.setUserName("root");
db.setPassword("12345");

if (!db.open()) {
    qDebug() << "Database connection failed!";
    return;
}
