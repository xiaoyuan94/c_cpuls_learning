#include <memory>
#include <iostream>
#include <mysql_demo.h>
#include <json_demo.h>

#include "insert_map.h"

int main()
{
    std::cout << "main start " << std::endl;

    JsonDemo jsonDemo;
    jsonDemo.Show();
    jsonDemo.FileShow();

    std::cout << "main end" << std::endl;
//    system("read -p 'Press Enter to continue...' var");
    return 0;
}
