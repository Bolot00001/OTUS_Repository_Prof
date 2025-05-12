#include <iostream>

#define BUILD_NUMBER std::string(getenv("BUILD_NUMBER"))

void print_build_number() {
    std::cout << "build " << BUILD_NUMBER << "\n";
}

int main() {
    print_build_number();
    std::cout << "Hello, World!\n";
    return 0;
}

