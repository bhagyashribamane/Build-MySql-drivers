#include <QApplication>
#include <QtSql>
#include <QDebug>
#include<QTableView>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("testdb");
    db.setUserName("root");
    db.setPassword("Pwtech@999");
    db.setPort(3306);


    db.setConnectOptions("MYSQL_OPT_SSL_MODE=DISABLED");

    if (!db.open()) {
        qDebug() << "Connection failed:" << db.lastError().text();
        return -1;
    }

    qDebug() << "Connected successfully!";

    // QSqlQuery query("SELECT id, name , email  FROM STUDENT");

    // while(query.next()){
    //     int id=query.value(0).toInt();
    //     QString name=query.value(1).toString();
    //     QString email=query.value(2).toString();
    //     qDebug()<<id<<name<<email;
    // }


    QSqlTableModel  model(nullptr , db);
    model.setTable("STUDENT");
    model.select();

    QTableView view;
    view.setModel(&model);
    view.resize(600,500);
    view.show();




    return app.exec();
}
