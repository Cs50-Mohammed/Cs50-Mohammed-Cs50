#include <iostream>
using namespace std;

// الفكرة الأساسية
// (Loop) تُستخدم عندما تعرف مسبقًا عدد مرات تكرار العملية
// بدلًا من كتابة نفس الكود عدة مرات، نكتب الكود مرة واحدة داخل الحلقة، وهي تقوم بتكراره تلقائيًا
//

// متى نستخدم For Loop
//  (نعرف عدد مرات التكرار) نريد العد من رقم إلى رقم ) او)

// كيف تعمل؟
/*
for (initialization; condition; increment)
{
    // الأوامر
}

1- initialization : تهيئة المتغير (تنفذ مرة واحدة).
2- condition      : شرط استمرار الحلقة.
3- increment      : زيادة أو نقصان المتغير بعد كل دورة.
*/

// طباعه الارقام من 1 الي 5
void example1()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

//
void example2()
{
    int arr[5];
    // Read a numbers
    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // print a numbers
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
