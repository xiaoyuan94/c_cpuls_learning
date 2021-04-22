//
// Created by ubuntu on 2021/4/22.
//

#ifndef DEMO01_MYSQL_DEMO_H
#define DEMO01_MYSQL_DEMO_H

#include <iostream>
#include <mysql/mysql.h>
#include <string>

class MysqlDemo {
public:
    MysqlDemo();
    ~MysqlDemo();
    void Init();
    void Insert();
    void Close();
    void Query();
    void Delete();
    void QueryTables();
private:
    MYSQL mysql_;
};


#endif //DEMO01_MYSQL_DEMO_H
