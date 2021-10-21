//
// Created by ubuntu on 2021/10/21.
//

#include <iostream>
#include "cplus_use_c_demo.h"

extern "C" {
#include "add.h"  // 由add.h和add.c组成
}

void CplusUseCDemo::show()
{
    addTwoNumber(10, 20);
}


void CUseCplus(int i)
{
    std::cout << "CplusUseCDemo cpp : CUseCplus " << std::endl;
}