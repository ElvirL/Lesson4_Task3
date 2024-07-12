/*
Задание 3. Проверка на чётное число
Что нужно сделать:
Напишите программу, которая проверяет, чётное ли число ввел пользователь.
Пример: int remainder = x % 2 (вычисляет остаток от деления x на 2).
Пример

Введите число: 28
-----Проверяем-----
Число 28 — чётное

Советы и рекомендации:
• Для проверки чётности используйте оператор %. Он вычисляет остаток от деления двух чисел.
• Не забудьте про отрицательные числа.
*/

#include <iostream>

using namespace std;

int main(){
    int x;
    cout << "Введите число: ";
    cin >> x;
    cout << "-----Проверяем-----" << endl;
    if (x % 2 ==0){
        cout << "Число " << x << " — чётное" << endl;
    }
    else {
        cout << "Число " << x << " — нечётное" << endl;
    }
}