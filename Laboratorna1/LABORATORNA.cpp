#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    double a[100];

    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    // введення масиву
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    // пошук середнього від'ємних
    double sum = 0;
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            sum = sum + a[i];
            k++;
        }
    }

    if (k > 0)
        cout << "Середнє від'ємних елементів = " << sum / k << endl;
    else
        cout << "Від'ємних елементів немає" << endl;

    // сортування методом бульбашки
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (j % 2 == 0) // парні індекси
            {
                if (a[j] > a[j + 1])
                {
                    double t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
            else // непарні індекси
            {
                if (a[j] < a[j + 1])
                {
                    double t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }
    }

    cout << "Масив після сортування:" << endl;

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;

    system("pause");
    return 0;
}