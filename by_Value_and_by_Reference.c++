/*
=========================================
Pass by Value vs Pass by Reference
=========================================

هناك طريقتان لتمرير البيانات إلى الدوال:

1) Pass by Value (التمرير بالقيمة)
- يتم إرسال نسخة من المتغير.
- أي تعديل داخل الدالة لا يؤثر على المتغير الأصلي.

2) Pass by Reference (التمرير بالمرجع)
- يتم إرسال المتغير الأصلي باستخدام (&).
- أي تعديل داخل الدالة يؤثر على المتغير الأصلي.
*/

#include <iostream>
using namespace std;

// Pass by Value
void increaseValue(int number)
{
    number = number + 10;

    cout << "Inside function (Value): "
         << number << endl;
}

// Pass by Reference
void increaseReference(int &number)
{
    number = number + 10;

    cout << "Inside function (Reference): "
         << number << endl;
}

int main()
{
    int x = 20;

    cout << "Before Pass by Value: " << x << endl;
    increaseValue(x);
    cout << "After Pass by Value: " << x << endl;

    cout << endl;

    cout << "Before Pass by Reference: " << x << endl;
    increaseReference(x);
    cout << "After Pass by Reference: " << x << endl;

    return 0;
}