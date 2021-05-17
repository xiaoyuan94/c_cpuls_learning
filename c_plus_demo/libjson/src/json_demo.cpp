//
// Created by ubuntu on 2021/5/17.
//
#include <iostream>
#include <jsoncpp/json/json.h>
#include <json_demo.h>
#include <fstream>
#include <cassert>

void JsonDemo::Show()
{
    std::string test = "{\"id\":1,\"name\":\"kurama\"}";
    Json::Reader reader;
    Json::Value value;
    if (reader.parse(test, value)) {
        if (!value["id"].isNull()) {
            std::cout << value["id"].asInt() << std::endl;
            std::cout << value["name"].asString() << std::endl;
        }
    }
}

void JsonDemo::FileShow()
{
    std::ifstream ifs;
    ifs.open("/home/ubuntu/project/c_cpuls_learning/c_plus_demo/libjson/file/test.json");
    assert(ifs.is_open());

    Json::Reader reader;
    Json::Value root;
    if (!reader.parse(ifs, root, false)) {
        return;
    }

    std::string name;
    int age;
    int size = root.size();
    std::cout << "test read json ==============\n";
    for (int i = 0; i < size; ++i) {
        name = root[i]["name"].asString();
        age = root[i]["age"].asInt();
        std::cout << name << " " << age << std::endl;
    }
}

void JsonDemo::WriteSimple()
{
    Json::Value root;
    Json::FastWriter writer;
    Json::Value person;

    person["name"] = "tocy";
    person["age"] = 1000;
    root.append(person);

    std::string json_file = writer.write(root);

    std::cout << "demo write json ==============\n";
    std::cout << json_file << std::endl;
}




