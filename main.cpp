#include <iostream>
#include "ElectricScooter.h"

int main() {
    ElectricScooter scooter1("Whoosh", "Yellow1", 100000, Date(10, 2023)),
            scooter2("YandexGo", "Yellow2", 100000, Date(10, 2024)),
            scooter3("Urent", "pink", 1000, Date(5, 2020));
    std::cout << scooter1 << std::endl;
    std::cout << scooter2 << std::endl;
    std::cout << scooter3 << std::endl;
    return 0;
}
