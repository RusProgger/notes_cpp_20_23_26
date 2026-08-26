#include <format>
#include <iostream>

int main() {

    int numb{};
    std::cout << std::format("Input number: ");
    std::cin >> numb; 


    std::cout << std::format("Dec: {:d}\n", numb);
    std::cout << std::format("Hex: {:x}\n", numb);
    std::cout << std::format("HexUpper: {:X}\n", numb);
    std::cout << std::format("Bin: {:b}\n", numb);

    // time 

    int hour{};
    int min{};

    std::cin >> hour;
    std::cin >> min;
    std::cout << std::format("Time: {:02}:{:02}\n", hour, min);
}