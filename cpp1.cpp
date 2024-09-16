#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Задание 1: Арифметические операторы
    int d = 3, r = 6;
    int g;
    g = d + r;
    cout << "d=3 r=6\n";
    cout << "g = d + r  =  " << g << endl;

    g = d - r;
    cout << "g = d - r  =  " << g << endl;

    g = d * r;
    cout << "g = d * r  =  " << g << endl;

    g = r / d;
    cout << "g = r / d  =  " << g << endl;

    g = d % r;
    cout << "g = d % r  =  " << g << endl;

    r = ++r;
    cout << "++r = " << r << "\n";
    d = --d;
    cout << "--d = " << d << endl;

    // Задание 2: Операторы сравнения
    cout << boolalpha;

    int nine = 9;
    int othernine = 9;
    int one = 1;
    cout << endl;

    cout << "nine = 9, othernine = 9, one = 1\n";

    cout << "True:\n";
    cout << "nine == othernine -> " << (nine == othernine) << endl;
    cout << "nine != one -> " << (nine != one) << endl;
    cout << "nine > one -> " << (nine > one) << endl;
    cout << "one < nine -> " << (one < nine) << endl;
    cout << "nine >= othernine -> " << (nine >= othernine) << endl;
    cout << endl;

    cout << "False:\n";
    cout << "nine == one -> " << (nine == one) << "/n";
    cout << "nine != othernine -> " << (nine != othernine) << endl;
    cout << "nine < one -> " << (nine < one) << endl;
    cout << "one > nine -> " << (one > nine) << endl;
    cout << "one >= othernine -> " << (one >= othernine) << endl;
    cout << endl;

    // Задание 3: Логические операторы
    cout << "True:\n"
         << "(nine == othernine) && (nine != one) -> " << ((nine == othernine) && (nine != one)) << endl
         << "(nine == othernine) || (nine == one) -> " << ((nine == othernine) || (nine == one)) << endl
         << " ! (nine == one) -> " << !(nine == one) << endl;
    // Сделал на энтузиазме вариант с False
    cout << "False:\n"
         << "(nine != othernine) && (nine != one) -> " << ((nine != othernine) && (nine != one)) << endl
         << "(nine != othernine) || (nine == one) -> " << ((nine != othernine) || (nine == one)) << endl
         << " ! (nine != one) -> " << !(nine != one) << endl;
}
