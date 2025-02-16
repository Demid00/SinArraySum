#define _USE_MATH_DEFINES
#include <iostream>
#include <memory>
#include <cmath>
#include <chrono>
#include <cmath>

#ifndef ARRAY_TYPE
#define ARRAY_TYPE float // По умолчанию float, но можно изменить на double при сборке
#endif

int main() {
    constexpr size_t N = 10'000'000; // 10^7 элементов
    auto data = std::make_unique<ARRAY_TYPE[]>(N);
    
    // Заполняем массив значениями синуса на одном периоде
    for (size_t i = 0; i < N; ++i) {
        data[i] = std::sin(2 * M_PI * i / N);
    }
    
    // Вычисляем сумму
    ARRAY_TYPE sum = 0;
    for (size_t i = 0; i < N; ++i) {
        sum += data[i];
    }
    
    // Выводим результат
    std::cout << "Sum: " << sum << " (using " << (sizeof(ARRAY_TYPE) == 4 ? "float" : "double") << ")\n";
    
    return 0;
}
