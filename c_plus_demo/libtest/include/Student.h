//
// Created by ubuntu on 2021/6/22.
//

#ifndef DEMO01_STUDENT_H
#define DEMO01_STUDENT_H

#include<gtest/gtest.h>
#include<map>
#include<iostream>

using namespace std;

class Student {
public:
    Student();
    Student(int a);
    void print();

private:
    int age;
};


#endif //DEMO01_STUDENT_H
