//
// Created by ubuntu on 2021/6/22.
//

#include "TestMap.h"

void TestMap::SetUpTestCase()
{
    cout << "SetUpTestCase()" << endl;
    s = new Student(23);
}

void TestMap::TearDownTestCase()
{
    delete s;
    cout << "TearDownTestCase()" << endl;
}

void TestMap::SetUp()
{
    cout << "SetUp() is running" << endl;
}

void TestMap::TearDown()
{
    cout << "TearDown()" << endl;
}
