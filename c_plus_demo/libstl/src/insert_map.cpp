//
// Created by ubuntu on 2021/5/14.
//

#include <map>
#include <iostream>
#include <test_c.h>
#include "insert_map.h"

void InsertMap::Show()
{
    std::map<std::string, TestC> connectionMap;
    TestC TestCa(1);
    TestC TestCb(2);
    TestC TestCc(3);
    TestC TestCd(4);
    TestC TestCe(5);

    connectionMap.insert(std::make_pair("TestCa", TestCa));
    connectionMap.insert(std::make_pair("TestCb", TestCb));
    connectionMap.insert(std::make_pair("TestCc", TestCc));
    connectionMap.insert(std::make_pair("TestCd", TestCd));
    connectionMap.insert(std::make_pair("TestCe", TestCe));

    auto it = connectionMap.begin();
    while (it != connectionMap.end()) {
        TestC *pTest = &it->second;
        if (pTest->aa_ == 3 || pTest->aa_ == 4) {
            connectionMap.erase(it++);
        } else {
            ++it;
        }
    }

    TestC *pTest = nullptr;
    std::map<std::string, TestC>::iterator iter;
    for (iter = connectionMap.begin(); iter != connectionMap.end(); ++iter) {
        pTest = &iter->second;
        std::cout << pTest->aa_ << std::endl;
    }


}

