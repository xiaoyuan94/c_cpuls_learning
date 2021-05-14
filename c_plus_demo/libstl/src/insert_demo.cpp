//
// Created by ubuntu on 2021/4/16.
//

#include <iostream>
#include "../include/insert_demo.h"


void InsertDemo::InsertMap()
{
    MElement element;
    element.name = "element1";
    map_.insert(std::make_pair("key_element1", element));
}

void InsertDemo::ShowMap()
{
    std::map<std::string, MElement>::iterator it;
    for (it = map_.begin(); it != map_.end(); it++) {
        MElement element = std::move(it->second);
        std::cout << ("element name :" + element.name) << std::endl;
    }
}

MElement InsertDemo::FindKey()
{
    std::map<std::string, MElement>::iterator iter;
    iter = map_.find("key_element1");
    return iter->second;
}



