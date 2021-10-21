//
// Created by ubuntu on 2021/10/14.
//

#include <iostream>
#include "demo.h"

extern "C" {
#include "c_use_cplus_demo.h"  // 由add.h和add.c组成
}

void Demo::show()
{
    std::cout << " Demo show start " << std::endl;
//    CplusUseCDemo demo;
//    demo.show();
    show1();

    std::cout << " Demo show end \n" << std::endl;
}
