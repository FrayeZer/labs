
// ----------------------------------------------------------
// Код на 100% сгенерирован CHATGPT, мне в падлу такое писать
// ----------------------------------------------------------


#include <iostream>
using namespace std;

// Вариант 1: Один аргумент — шестизначное число
void happy(int number) {
    if (number < 100000 || number > 999999) {
        cout << "Неверное число. Оно должно быть шестизначным." << endl;
        return;
    }

    int firstHalf = number / 1000; // Первые три цифры
    int secondHalf = number % 1000; // Последние три цифры

    if ((firstHalf / 100 + (firstHalf / 10 % 10) + (firstHalf % 10)) == 
        (secondHalf / 100 + (secondHalf / 10 % 10) + (secondHalf % 10)))
        cout << "Happy" << endl;
    else
        cout << "Sad" << endl;
}

// Вариант 2: Шесть аргументов — каждая цифра номера
void happy(int d1, int d2, int d3, int d4, int d5, int d6) {
    if ((d1 + d2 + d3) == (d4 + d5 + d6))
        cout << "Happy" << endl;
    else
        cout << "Sad" << endl;
}

// Вариант 3: Два аргумента — две половины номера
void happy(int firstHalf, int secondHalf) {
    if ((firstHalf / 100 + (firstHalf / 10 % 10) + (firstHalf % 10)) == 
        (secondHalf / 100 + (secondHalf / 10 % 10) + (secondHalf % 10)))
        cout << "Happy" << endl;
    else
        cout << "Sad" << endl;
}

int main() {
    // Тестирование
    cout << "Тестирование первого варианта (одно число):" << endl;
    happy(123321); // Happy
    happy(123456); // Sad

    cout << "Тестирование второго варианта (шесть чисел):" << endl;
    happy(1, 2, 3, 3, 2, 1); // Happy
    happy(1, 2, 3, 4, 5, 6); // Sad

    cout << "Тестирование третьего варианта (два числа):" << endl;
    happy(123, 321); // Happy
    happy(123, 456); // Sad

    return 0;   
}
