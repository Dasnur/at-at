#include "task_type_alert_dialog.h"
#include <QApplication>
#include <cstdlib>

//void myfunc(QSqlQuery query){
//    query.prepare("select class from classes where id=3");
//    std :: cerr << query.next();
 //   std :: cerr << query.next();
//    std :: cerr << "vse";
   // if (query.exec()){
     //   while (query.next())
       //     std :: cerr << query.value(0).toString().toStdString();
        //}
//}

int main(int argc, char *argv[])
{

   QApplication a(argc, argv);
   task_type_alert_dialog w;
   w.show();

  //  QSqlQuery query;
  //  query.exec("select class from classes where id=3");
  //  string result;
  //  while (query.next())
   //   result = query.value(0).toString().toStdString();
 //   std :: cout << result;
   return a.exec();
}
