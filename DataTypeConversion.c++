#include <iostream>
// we need to include the string header to use the string class
// نحتاج إلى تضمين  السلسلة لاستخدام فئة السلسلة
#include <string>

using namespace std;


int main()
{

    // Convert double to int
    int number1;
    double number2 = 18.99; 

     // implicit conversion
     // التحويل الضمني
    number1 = number2;

    // explicit conversion
    // تصريح التحويل
    number1 = (int)number2; 

    // Function style cast
    number1 = int(number2);

    // Convert string to int        
    // التحويل من سلسلة نصية إلى عدد صحيح
    string str = "123";  
    int number3 = stoi(str);
    

      // Convert string to float
    // التحويل من سلسلة نصية إلى عدد عشري
    string str2 = "3.14";  
    float number4 = stof(str2);        


      // Convert string to double
    // التحويل من سلسلة نصية إلى عدد عشري 
    string str3 = "3.14159";  
    double number5 = stod(str3);


    // Convert int to string
    // التحويل من عدد صحيح إلى سلسلة نصية
    int number6 = 456;
    string str4 = to_string(number6);
    
    // Convert float to string
    // التحويل من عدد عشري إلى سلسلة نصية
    float number7 = 3.14;
    string str5 = to_string(number7);




    return 0;
}



