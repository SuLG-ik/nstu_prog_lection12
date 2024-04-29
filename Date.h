//
// Created by Володя on 29.04.2024.
//

#pragma once


#include <ostream>

class Date {
    int month, year;
public:
    friend std::ostream &operator<<(std::ostream &os, const Date &date);

public:
    Date(int month, int year);

    int getMonth() const;

    int getYear() const;

};
