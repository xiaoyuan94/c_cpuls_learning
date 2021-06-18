//
// Created by ubuntu on 2021/6/18.
//

#include <regex>
#include "regex_demo.h"

void RegexDemo::Test() {

    std::regex reg("^[0-9]*$");
    if (std::regex_match("123123123123", reg)) {
        printf("true\n");
    } else{
        printf("false\n");
    }
}
