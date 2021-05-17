#include <memory>
#include <iostream>
#include <mysql_demo.h>

#include "insert_map.h"

int main()
{
    std::cout << "main start " << std::endl;

    MysqlDemo mysqlDemo;
    mysqlDemo.Insert();
    mysqlDemo.Query();
    std::cout << "main end" << std::endl;
//    system("read -p 'Press Enter to continue...' var");
    return 0;
}
