// Lab 3.2.cpp
// ������ ������
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 2
#include <iostream>
#include <Windows.h> 

using namespace std;

int main()
{
    // ��������� ����
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, c, x, F;

    // �������� ������� � ���������
    cout << "������ a: ";
    cin >> a;
    cout << "������ b: ";
    cin >> b;
    cout << "������ c: ";
    cin >> c;
    cout << "������ x: ";
    cin >> x;

    //������������ � ��������� ����
    if (x + 5 < 0 && c == 0)
        F = 1 / (a * x) - b;
    else if (x + 5 > 0 && c != 0)
        F = (x - a) / x;
    else
        F = 10 * x / (c - 4);

    cout << endl;
    cout << "1) F = " << F << endl;

    // ������������ � ����� ����
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
