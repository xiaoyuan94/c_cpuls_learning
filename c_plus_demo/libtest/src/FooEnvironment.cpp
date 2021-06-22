//
// Created by ubuntu on 2021/6/22.
//

#include <iostream>
#include "FooEnvironment.h"

void FooEnvironment::SetUp()
{
    std::cout << "Foo FooEnvironment SetUP" << std::endl;
}

void FooEnvironment::TearDown()
{
    std::cout << "Foo FooEnvironment TearDown" << std::endl;
}
