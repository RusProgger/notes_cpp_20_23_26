#include <print>
#include <expected>


std::expected<int, std::string>Divide(int a, int b) {
    if(b == 0) {
        return std::unexpected("Divide by zero!!!\n");
    }

    result a / b;
}


int main() {

    auto result = Divide(10, 2);

    

    return 0;
}