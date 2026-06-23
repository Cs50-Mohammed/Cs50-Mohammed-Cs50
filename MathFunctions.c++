#include <iostream>

// we need to include the Math library 
// نحتاج إلى تضمين مكتبة الرياضيات
#include <cmath>

using namespace std;

int main()
{
    //______________________________________________//
    //----------------Math functions----------------
    //______________________________________________//

    //----------------sqrt()----------------
    double Number =64;
    cout << sqrt(Number) << endl; // => 8
    cout << sqrt(50) << endl; // => 7.07107;

    //----------------round()----------------

    cout << round(2.4) << endl; //=> 2
    cout << round(2.7) << endl; //=> 3
    cout << round(2.5) << endl; //=> 3

    //----------------sqrt()+round()----------------

    cout <<round(sqrt(50)) << endl; // => ???
    cout << round(3.5)+round(2.1) << endl;  // => ???
S
    //----------------pow()----------------
    int x =3, y=4;
    cout << pow(x,y) << endl;  // => 3^4 => 81

    cout << pow(6,2) << endl;  // => 6^2 => 36

    //----------------ceil() and floor()----------------

    cout << ceil(2.3) << endl; // => 3
    cout << ceil(2.9) << endl; // => 3

    cout << floor(2.3) << endl; // => 2
    cout << floor(2.9) << endl; // => 2

    //----------------abs()----------------
    cout << abs(10) << endl;  // => 10
    cout << abs(-10) << endl;  // => 10


    return 0;
}



