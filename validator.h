#ifndef VALIDATION_H
#define VALIDATION_H

#include <string>
#include <regex>


class Validation{
public:
    static bool isEmail(const std::string& str);
    static bool isString(const std::string& str);
};

#endif
