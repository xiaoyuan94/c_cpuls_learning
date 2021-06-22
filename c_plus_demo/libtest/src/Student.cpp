//
// Created by ubuntu on 2021/6/22.
//

#include "Student.h"

void Student::print()
{
    std::cout << "Foo FooEnvironment TearDown" << std::endl;
}

Student::Student()
{
    age = 0;
}

Student::Student(int a)
{
    age = a;
}
