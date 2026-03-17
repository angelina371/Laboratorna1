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

    cout << "Ââåä³òü ê³ëüê³ñòü åëåìåíò³â ìàñèâó: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

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
        cout << "Ñåðåäíº â³ä'ºìíèõ åëåìåíò³â = " << sum / k << endl;
    else
        cout << "Â³ä'ºìíèõ åëåìåíò³â íåìàº" << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (j % 2 == 0) 
            {
                if (a[j] > a[j + 1])
                {
                    double t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
            else 
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

    cout << "Ìàñèâ ï³ñëÿ ñîðòóâàííÿ:" << endl;

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;

    system("pause");
    return 0;
}
