#include <iostream>
using namespace std;

/*
for (initialization; condition; increment)
{
    // الأوامر
}

1- initialization : تهيئة المتغير (تنفذ مرة واحدة).
2- condition      : شرط استمرار الحلقة.
3- increment      : زيادة أو نقصان المتغير بعد كل دورة.
*/

// مثال 1: طباعة الأرقام من 1 إلى 5
void example1()
{
    int z = 0;
    for (int i = 1; i <= 10; i--)
    {
        cout << "KDSFJKFD" << " ";
    }
    cout << endl;
}

void example2()
{
    cout << endl
         << endl;

    int arr[5];

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // طباعة العناصر
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    example1();
    example2();

    return 0;
}