#include <iostream>
#include <vector>
#include <cassert>
#include "src/fibonacci.h"

// Функция для запуска тестов
void runTests() {
    // Тест для проверки пустого ввода
    {
        Fibonacci<int> f;
        try {
            f.getFirstN(0);
            assert(false); // Если не выбросилось исключение, тест не пройден
        } catch (const std::invalid_argument&) {
            std::cout << "HandlesZeroInput passed." << std::endl;
        } catch (...) {
            std::cerr << "HandlesZeroInput failed with unexpected error." << std::endl;
        }
    }

    // Тест для проверки одного элемента
    {
        Fibonacci<int> f;
        std::vector<int> result = f.getFirstN(1);
        assert(result.size() == 1);
        assert(result[0] == 0);
        std::cout << "HandlesSingleInput passed." << std::endl;
    }

    // Тест для проверки двух элементов
    {
        Fibonacci<int> f;
        std::vector<int> result = f.getFirstN(2);
        assert(result.size() == 2);
        assert(result[0] == 0);
        assert(result[1] == 1);
        std::cout << "HandlesTwoInputs passed." << std::endl;
    }

    // Тест для проверки первых нескольких чисел Фибоначчи
    {
        Fibonacci<int> f;
        std::vector<int> result = f.getFirstN(10);
        assert(result.size() == 10);
        assert(result[0] == 0);
        assert(result[1] == 1);
        assert(result[2] == 1);
        assert(result[3] == 2);
        assert(result[4] == 3);
        assert(result[5] == 5);
        assert(result[6] == 8);
        assert(result[7] == 13);
        assert(result[8] == 21);
        assert(result[9] == 34);
        std::cout << "FirstTenNumbers passed." << std::endl;
    }

    // Тест для проверки большого количества чисел
    {
        Fibonacci<long long> f;
        std::vector<long long> result = f.getFirstN(50);
        assert(result.size() == 50);
        assert(result[49] == 12586269025LL);
        std::cout << "LargeInput passed." << std::endl;
    }

    // Тест для проверки некорректного ввода
    {
        Fibonacci<int> f;
        try {
            f.getFirstN(-5);
            assert(false); // Если не выбросилось исключение, тест не пройден
        } catch (const std::invalid_argument&) {
            std::cout << "InvalidInput passed." << std::endl;
        } catch (...) {
            std::cerr << "InvalidInput failed with unexpected error." << std::endl;
        }
    }
}

int main() {
    runTests();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
