//
// Created by Володя on 29.04.2024.
//

#include "Date.h"

Date::Date(int month, int year) : month(month), year(year) {}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

std::ostream &operator<<(std::ostream &os, const Date &date) {
    os << "month: " << date.month << " year: " << date.year;
    return os;
}
