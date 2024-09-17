// Lab 3.2.cpp
// Боднар Данило
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 2
#include <iostream>
#include <Windows.h> 

using namespace std;

int main()
{
    // Укрвїнська мова
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, c, x, F;

    // Введення значень з клавіатури
    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;
    cout << "Введіть c: ";
    cin >> c;
    cout << "Введіть x: ";
    cin >> x;

    //розгалуження в скороченій формі
    if (x + 5 < 0 && c == 0)
        F = 1 / (a * x) - b;
    else if (x + 5 > 0 && c != 0)
        F = (x - a) / x;
    else
        F = 10 * x / (c - 4);

    cout << endl;
    cout << "1) F = " << F << endl;

    // розгалуження в повній формі
    if (x + 5 < 0)
    {
        if (c == 0)
            F = 1 / (a * x) - b;
        else
            F = 10 * x / (c - 4);
    }
    else if (x + 5 > 0)
    {
        if (c != 0)
            F = (x - a) / x;
        else
            F = 10 * x / (c - 4);
    }
    else
    {
        F = 10 * x / (c - 4);
    }

    cout << "2) F = " << F << endl;

    return 0;
}
