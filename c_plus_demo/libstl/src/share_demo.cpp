//
// Created by ubuntu on 2021/4/15.
//

#include <memory>
#include <iostream>
#include "share_demo.h"

void ShareDemo::InsertMap()
{
    std::unique_ptr<MElement> element = std::make_unique<MElement>();
    element->name = "element1";
    map_.insert(std::make_pair("key_element1", std::move(element)));
}

void ShareDemo::ShowMap()
{
    std::map<std::string, std::unique_ptr<MElement>>::iterator it;
    for (it = map_.begin(); it != map_.end(); it++) {
        std::unique_ptr<MElement> element = std::move(it->second);
        std::cout << ("element name :" + element->name) << std::endl;
    }
}

std::unique_ptr<MElement> ShareDemo::FindElement()
{
    std::map<std::string, std::unique_ptr<MElement>>::iterator iter;
    iter = map_.find("key_element1");
    if (iter != map_.end()) {
        return std::move(iter->second);
    } else {
        return nullptr;
    }
}




