# Sin Array Sum

## Описание
Программа заполняет массив размером $10^7$ элементов значениями функции $\sin(x)$ на одном периоде. После заполнения массива вычисляется сумма всех его элементов, и результат выводится в терминал. Реализована поддержка выбора типа массива (`float` или `double`) во время сборки.

## Компиляция и запуск

### Использование CMake

1. Создайте папку для сборки и перейдите в неё:
    ```sh
    mkdir build && cd build
    ```
2. Запустите CMake с выбором типа массива:
    - Для `float`:
      ```sh
      cmake .. -DUSE_DOUBLE=OFF
      ```
    - Для `double`:
      ```sh
      cmake .. -DUSE_DOUBLE=ON
      ```
3. Соберите проект:
    ```sh
    cmake --build .
    ```
4. Запустите исполняемый файл:
    ```sh
    ./sin_array_sum
    ```

### Использование Makefile

1. Сборка с `float`:
    ```sh
    make float
    ```
2. Сборка с `double`:
    ```sh
    make double
    ```
3. Запуск:
    ```sh
    ./sin_array_sum
    ```

## Результаты

После выполнения программы в терминале отображается сумма элементов массива. Примерный результат для различных типов:

| Тип массива | Сумма |
|------------|----------------|
| `float`    | `-2.23517e-07` |
| `double`   | `-1.77636e-15` |

Разница обусловлена точностью представления чисел с плавающей запятой.

## Ветки репозитория

Для удобства каждая версия сборки находится в отдельной ветке:
- `cmake_build` — версия с CMake
- `makefile_build` — версия с Makefile
