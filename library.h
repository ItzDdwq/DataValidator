#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

inline bool isValidEmail(const std::string& email) {
    if (email.empty()) return false;
    size_t atpos = email.find('@');
    if (atpos == std::string::npos || atpos == 0 || atpos == email.length() - 1) return false;
    size_t dotpos = email.find('.', atpos);
    if (dotpos == std::string::npos || dotpos == atpos + 1 || dotpos == email.length() - 1) return false;
    for (char c : email) if (isspace(c)) return false;
    return true;
}

inline bool isValidIP(const std::string& ip) {
    std::stringstream ss(ip);
    std::string segment;
    int count = 0;
    while (std::getline(ss, segment, '.')) {
        count++;
        if (count > 4 || segment.empty()) return false;
        for (char c : segment) if (!isdigit(c)) return false;
        if (segment.length() > 3) return false;
        int num = std::stoi(segment);
        if (num < 0 || num > 255) return false;
        if (segment.length() > 1 && segment[0] == '0') return false;
    }
    return count == 4;
}

inline bool isValidPhone(const std::string& phone) {
    std::string digits = "";
    for (char c : phone) if (isdigit(c)) digits += c;
    if (digits.length() != 11 && digits.length() != 10) return false;
    std::string core;
    if (digits.length() == 11) {
        if (digits[0] != '7' && digits[0] != '8') return false;
        core = digits.substr(1);
    } else core = digits;
    if (core[0] != '9') return false;
    return true;
}