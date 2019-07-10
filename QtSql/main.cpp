#include <QtCore/QCoreApplication>
#include<QtSql>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
/*
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName(":memory:");
    if(!db.open())
        return false;
    QSqlQuery query(db);
    query.exec("create table student(id int primary key ,name varchar(10)) ");
    query.exec("insert into student values(1,'pan')");
    query.exec("insert into student values(2,'shi')");
    query.exec("insert into student values(3,'li')");
    query.exec("select id,name from student where id<=2");

    while(query.next())
    {
        int ele0=query.value(0).toInt();
        QString ele1=query.value(1).toString();
        qDebug()<<ele0<<ele1;
    }
    */

    return a.exec();
}
