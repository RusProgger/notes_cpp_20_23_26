#include <format>
#include <iostream>


int main() {
    int hour{};
    int minute{};

    std::cout << std::format("Enter hour: ");
    std::cin >> hour;

    std::cout << std::format("Enter minute: ");
    std::cin >> minute;

    if(hour > 24 || hour < 0 && minute > 59 || minute < 0) {
        std::cout << std::format("Error! Hours cannot be greater than 24 or less than 0.");
        exit(0);
    } else {
        std::cout << std::format("Time: {:02} : {:02}", hour, minute);
    }

    return 0;
}