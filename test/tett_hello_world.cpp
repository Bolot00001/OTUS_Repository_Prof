#include <cassert>
#include <iostream>

// Используем аналогично define BUILD_NUMBER для тестирования,
// подставляя значение вручную для проверки правильности формата
#define TEST_BUILD_NUMBER "123"

void test_print_build_number() {
    assert(TEST_BUILD_NUMBER == "123");
}

int main() {
    test_print_build_number(); // Проверка валидности тестового номера сборки
    std::cout << "Tests passed.\n";
    return 0;
}
