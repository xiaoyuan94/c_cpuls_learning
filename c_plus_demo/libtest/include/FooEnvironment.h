//
// Created by ubuntu on 2021/6/22.
//

#ifndef DEMO01_FOOENVIRONMENT_H
#define DEMO01_FOOENVIRONMENT_H

#include <gtest/gtest.h>

class FooEnvironment : public testing::Environment {
public:
    virtual void SetUp();

    virtual void TearDown();
};

#endif //DEMO01_FOOENVIRONMENT_H
