//
// Created by ubuntu on 2021/10/14.
//

#include <iostream>
#include <template_demo.h>
#include "demo.h"

void Demo::show()
{
    std::cout << " Demo show start " << std::endl;
    TemplateDemo<std::string, std::string> templateDemo("hello ", "world");
    templateDemo.show();
    std::cout << " Demo show end \n" << std::endl;
}
