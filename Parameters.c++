/*
=========================================
Parameters and Arguments
=========================================

ما هي الـ Parameters؟
الـ  هو متغير يتم تعريفه داخل رأس الدالة (Parameter).
وظيفته استقبال البيانات التي يتم إرسالها عند استدعاء الدالة.

لماذا نستخدم Parameters؟
1- لجعل الدالة قابلة لإعادة الاستخدام.
2- لتجنب كتابة نفس الكود عدة مرات.
3- لتمرير قيم مختلفة إلى نفس الدالة.
*/

#include <iostream>
#include <string>
using namespace std;

// "name" is a PARAMETER
void greet(string name)
{
    cout << "Hello, " << name << endl;
}

// x and y are PARAMETERS.
int sum(int x, int y)
{
    return x + y;
}

int main()
{
    // "Ali" is an ARGUMENT.
    greet("Ali");

    // 10 and 20 are ARGUMENTS.
    cout << "Sum = " << sum(10, 20) << endl;
    return 0;
}
