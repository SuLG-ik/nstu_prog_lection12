//
// Created by Володя on 29.04.2024.
//

#pragma once

#include <iostream>
#include "Date.h"


class ElectricScooter {
    std::string vendor, color;
    int batteryCapacity;
    Date createdAt;
public:
    friend std::ostream &operator<<(std::ostream &os, const ElectricScooter &scooter);

    ElectricScooter(const std::string &vendor, const std::string &color, int batteryCapacity, const Date &createdAt);
};

