#include <memory>
#include <iostream>
#include <demo.h>

int main(int argc, char *argv[])
{
    std::cout << "main start " << std::endl;
    Demo demo;
    demo.show();
    std::cout << "main end " << std::endl;
    return 0;
}
