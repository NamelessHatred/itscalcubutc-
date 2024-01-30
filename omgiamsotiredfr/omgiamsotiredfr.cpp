#include <Windows.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <conio.h>
using namespace std;
unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    int choice = 0;
    while (choice != 9)
    {
        std::cout << "\nВыберите действие:\n1. Сложение\n2. Вычитание\n3. Умножение\n4. Деленпие\n5. Возведение в степень\n6. Нахождение квадратного корня\n7. Нахождение 1 процента от числа\n8. Найти факториал числа\n9. Выйти из программы\n>>";
        cin >> choice;
        if (choice == 1)
        {
            int a;
            int b;
            std::cout << "Введите первое число: ";
            cin >> a;
            std::cout << "Введите второе число: ";
            cin >> b;
            std::cout << a + b;
        }
        if (choice == 2)
        {
            int a;
            int b;
            std::cout << "Введите первое число: ";
            cin >> a;
            std::cout << "Введите второе число: ";
            cin >> b;
            std::cout << a - b;
        }
        if (choice == 3)
        {
            int a;
            int b;
            std::cout << "Введите первое число: ";
            cin >> a;
            std::cout << "Введите второе число: ";
            cin >> b;
            std::cout << a * b;
        }
        if (choice == 4)
        {
            int a;
            int b;
            std::cout << "Введите первое число: ";
            cin >> a;
            std::cout << "Введите второе число: ";
            cin >> b;
            std::cout << a / b;
        }
        if (choice == 5)
        {
            int a;
            int b;
            std::cout << "Введите первое число: ";
            cin >> a;
            std::cout << "Введите второе число: ";
            cin >> b;
            double answer = pow(a, b);
            std::cout << answer;
        }
        if (choice == 6)
        {
            int b;
            std::cout << "Введите число из которого хотите найти квадратный корень: ";
            cin >> b;
            std::cout << sqrt(b);
        }
        if (choice == 7)
        {
            int a;
            std::cout << "Введите число для которого нужно найти 1 процент: ";
            cin >> a;
            int result = a * 0.1;
            std::cout << result;
        }
        if (choice == 8)
        {
            int a;
            std::cout << "Введите число для которого нужно найти факториал: ";
            cin >> a;
            cout << "Факториал числа " << a << " равен "
                << factorial(a) << endl;
        }
    }
}