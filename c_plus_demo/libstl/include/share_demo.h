//
// Created by ubuntu on 2021/4/15.
//

#ifndef DEMO01_SHARE_DEMO_H
#define DEMO01_SHARE_DEMO_H


#include <string>
#include <map>
#include <list>
#include <memory>
#include "m_element.h"

class ShareDemo {
public:
    void InsertMap();

    void ShowMap();

    std::unique_ptr<MElement> FindElement();

public:
    std::map<std::string,std::unique_ptr<MElement>> map_;
};
#include "m_element.h"


#endif //DEMO01_SHARE_DEMO_H
