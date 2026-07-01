#include <iostream>

// we include the string
#include <string>

using namespace std;

int main()
{

    string MyString = "Mohammed";
    string x = "as";
    cout << "The Length of the string is: " << MyString.length() << endl; // => 8
    cout << MyString[2] << endl;                                          // => M
    cout << MyString[4] << endl;                                          // => m
    cout << MyString[7] << endl;                                          // => d
    cout << x[0] << endl;                                                 // => a

    string s1 = "10", s2 = "20";
    // concatenation
    string s3 = s1 + s2;
    cout << "The concatenated string is: " << s3 << endl; // => 1020

    // convert string to int and add them
    // تحويل النصوص الى ارقام صحيحة وثم نقوم بجمع
    int sum = stoi(s1) + stoi(s2);
    cout << "The sum is: " << sum << endl; // => 30

    // we can also read a full name with spaces using getline
    // يمكننا قراءة الاسم الكامل مع المسافات باستخدام getline
    string FullName;
    getline(cin, FullName);                           // => Mohammed Daood
    cout << "The Full Name is: " << FullName << endl; // => Mohammed

    // proplem with getline is that it will read the first line and ignore the rest of the lines
    // مشكلة getline هي أنه سيقرأ السطر الأول ويتجاهل بقية الأسطر

    int EmployeeId;
    cout << "Enter Employee Id: " << endl;
    cin >> EmployeeId;
    string FullName2;
    cout << "Enter your full name: " << endl;
    // ignore the first line
    // تجاهل السطر الأول
    cin.ignore(1, '\n');
    getline(cin, FullName2);
    cout << "---------------------------------------------------------" << endl;
    cout << "The Employee Id is: " << EmployeeId << endl;
    cout << "The Full Name is: " << FullName2 << endl;
    cout << "---------------------------------------------------------" << endl;

    return 0;
}
