#include <print>
#include <expected>
#include <string>


std::expected<int, std::string>Divide(int a, int b) {
    if(b == 0) {
        return std::unexpected("Divide by zero!!!\n");
    }

    return a / b;
}


int main() {

    auto result = Divide(10, 2);

    if(result) {
        std::println("Result: {}", *result);
    } else {
        std::println("Error: {}", result.error());
    }

    return 0;
}