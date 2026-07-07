#include <iostream>
using namespace std;

// الـ Function هي مجموعة من الأوامر التي تؤدي مهمة محددة
// تساعدك على:
// 1 تقسيم البرنامج إلى أجزاء صغيرة
// 2 إعادة استخدام الكود
// 3 تنظيم البرنامج وجعله أكثر وضوحاً

// (1) procedure
// نوع  من انواع الدوال  void
//  إرجاع للدالة (تعني أن الدالة لا ترجع قيمة)
void printMessage()
{
    cout << "Hello guys" << endl;
}

// هذه دوال ترجع قيمة معينة عند استدعائها. يمكن أن تكون هذه القيمة من أي نوع بيانات مثل
// int أو string أو char أو غيرها.

// نوع  من انواع الدوال  int
//  إرجاع للدالة (تعني أن الدالة ترجع قيمة)
// (2) function
int getNumber()
{
    return 42;
}
// نوع  من انواع الدوال  strings
//  إرجاع للدالة (تعني أن الدالة ترجع قيمة)
string getGreetingMessage()
{
    return "Hello, welcome to the program!";
}

// نوع  من انواع الدوال  char
//  إرجاع للدالة (تعني أن الدالة ترجع قيمة)
char getFirstCharacter()
{
    return 'H';
}

int main()
{
    // Call function
    // استدعاء الدالة
    printMessage();

    // Call function and store the returned value in a variable
    // استدعاء الدالة طباعة القيمة المرجعة
    cout << " Number: " << getNumber() << endl;

    return 0;
}
