#include <iostream>

using namespace std;

// we create an enum to store the colors
// نقوم بإنشاء تعداد لتخزين الألوان
enum enWeeKDays
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{
    // we create a variable of type enWeeKDays
    // نقوم بإنشاء متغير من نوع تعداد أيام الأسبوع
    enWeeKDays day;
    day = enWeeKDays::Monday;
    // we print the value of the enum
    // نقوم بطباعة قيمة التعداد
    cout << day << endl;

    return 0;
}



