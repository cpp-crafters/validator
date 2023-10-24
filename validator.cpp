//
// Created by dush on 10/24/2023.
//
#include "validator.h"

bool Validation::isEmail(const std::string &str) {
    std::regex emailRegex(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,4})");

    return std::regex_match(str, emailRegex);
}

bool Validation::isString(const std::string &str) {
    return !str.empty();
}

