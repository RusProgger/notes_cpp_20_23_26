#include <format>
#include <iostream>
#include <string>

int main() {

    int age{};
    std::cout << std::format("Enter name: ");
    std::string name{};
    std::cin >> name;
    std::cout << std::format("Enter age: ");
    std::cin >> age;

    std::cout << std::format("Hello {}, you are {}, age.\n", name, age);
    return 0;
}