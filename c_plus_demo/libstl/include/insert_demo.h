//
// Created by ubuntu on 2021/4/16.
//

#ifndef DEMO01_INSERT_DEMO_H
#define DEMO01_INSERT_DEMO_H


#include <string>
#include <map>
#include "m_element.h"

class InsertDemo {
public:
    void InsertMap();

    void ShowMap();

    MElement FindKey();

public:
    std::map<std::string,MElement> map_;
};


#endif //DEMO01_INSERT_DEMO_H
