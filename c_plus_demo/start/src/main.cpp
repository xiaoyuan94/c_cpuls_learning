#include <memory>
#include <iostream>
#include <json_demo.h>

int main()
{
    std::cout << "main start " << std::endl;

    JsonDemo jsonDemo;
    jsonDemo.Show();
    jsonDemo.FileShow();
    jsonDemo.WriteSimple();

    std::cout << "main end" << std::endl;
//    system("read -p 'Press Enter to continue...' var");
    return 0;
}
