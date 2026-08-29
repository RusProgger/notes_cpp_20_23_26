#include <iostream>
#include <format>

int add(int a, int b) {
    return a + b;
}

int main() {

    std::cout << std::format("Add: ") << add(10, 15);


    // LAMBDA FUNCTION

    auto lambda = [](int a, int b) {
        return a * b;
    };

    int res =  {lambda(5, 4)};

    std::cout << std::format("\nLambda: ") << res;

    return 0;
}