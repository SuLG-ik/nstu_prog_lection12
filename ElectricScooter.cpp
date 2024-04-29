//
// Created by Володя on 29.04.2024.
//

#include "ElectricScooter.h"

ElectricScooter::ElectricScooter(const std::string &vendor, const std::string &color, int batteryCapacity,
                                 const Date &createdAt) : vendor(vendor), color(color),
                                                          batteryCapacity(batteryCapacity), createdAt(createdAt) {}

std::ostream &operator<<(std::ostream &os, const ElectricScooter &scooter) {
    os << "vendor: " << scooter.vendor << " color: " << scooter.color << " batteryCapacity: " << scooter.batteryCapacity
       << " createdAt: " << scooter.createdAt;
    return os;
}
