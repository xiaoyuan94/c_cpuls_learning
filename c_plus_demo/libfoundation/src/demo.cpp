//
// Created by ubuntu on 2021/10/14.
//

#include <iostream>
#include "demo.h"

extern "C" {
//#include "c_use_cplus_demo.h"  // 由add.h和add.c组成
#include "function_pointer.h"
}

void Demo::show()
{
    std::cout << " Demo show start " << std::endl;
    FuncShow();
    std::cout << " Demo show end \n" << std::endl;
}
