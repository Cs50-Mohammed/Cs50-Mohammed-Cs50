/*
=========================================
C++ Lesson: Arrays
=========================================

ما هو الـ Array؟

المصفوفة (Array) هي مجموعة من العناصر لها نفس نوع البيانات،
ويتم تخزينها في أماكن متجاورة في الذاكرة.

لماذا نستخدم Array؟
1- لتخزين عدة قيم من نفس النوع.
2- لتجنب إنشاء متغيرات كثيرة.
3- لتسهيل الوصول إلى البيانات باستخدام الفهرس (Index).

Example 1: Create an Array
*/
#include <iostream>
using namespace std;

int main()
{
    // Create an array of 5 integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Value assignment
    // numbers[2]= 23;

    // Print the first element
    cout << "First element: " << numbers[0] << endl;

    // Print the third element
    cout << "Third element: " << numbers[2] << endl;

    return 0;
}

/*
Summary

Array:
- يخزن عدة قيم من نفس النوع.
- يبدأ الفهرس من 0.
- يمكن قراءة أو تعديل أي عنصر باستخدام Index.
*/
