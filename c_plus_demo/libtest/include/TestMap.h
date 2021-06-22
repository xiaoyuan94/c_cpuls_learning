//
// Created by ubuntu on 2021/6/22.
//

#ifndef DEMO01_TESTMAP_H
#define DEMO01_TESTMAP_H


#include <gtest/gtest.h>
#include "Student.h"

class TestMap : public testing::Test {
public:
    static Student *s;
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

TEST_F(TestMap, Test1)
{
    s->print();
}

#endif //DEMO01_TESTMAP_H
