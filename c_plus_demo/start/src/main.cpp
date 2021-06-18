#include <memory>
#include <iostream>
#include <regex_demo.h>

int main()
{
    std::cout << "main start " << std::endl;

    RegexDemo demo;
    demo.Test();

    std::cout << "main end" << std::endl;
//    system("read -p 'Press Enter to continue...' var");
    return 0;
}
