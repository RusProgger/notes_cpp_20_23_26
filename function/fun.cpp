#include <iostream>
#include <format>
#include <functional>


void result(const std::function<int(int)>& fun) {
    std::cout << "\n" << fun(100);
}

int add(int a) {
    return a;
}

void test_res() {
    result(add);
}

int main() {

    std::cout << std::format("Add: ") << add(15);


    // LAMBDA FUNCTION

    auto lambda = [](int a, int b) {
        return a * b;
    };

    int res =  {lambda(5, 4)};

    std::cout << std::format("\nLambda: ") << res;

    test_res();

    return 0;
}