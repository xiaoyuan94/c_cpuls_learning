#include <iostream>
#include <share_demo.h>
#include <unistd.h>
#include <insert_demo.h>

int main()
{
    InsertDemo demo;
    demo.InsertMap();
    sleep(1);
    demo.ShowMap();
    sleep(1);
    MElement element = demo.FindKey();
    std::cout << ("element name :" + element.name) << std::endl;
    return 0;
}
