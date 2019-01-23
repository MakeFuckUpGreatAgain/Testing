
#include "Complex.h"
#include <iostream>
#include <string>
//#include "Unit_Test.h"

using namespace std;

int main()
{
    Complex proba(2,0), proba2(3.5,5.5),suma, CX0;
//<<<<<<< HEAD
    suma=proba/4.5;
//    Unit_Test a;
//=======
    suma=proba/proba2;
//>>>>>>> testing
    cout << "cos popisze"<< "  sredmio wychodzi"<<endl;
    //un_test();
    try
    {
        cout<< "faza "<< suma.phase()<<endl;
    }
    catch (char)
    {
        cout<< "nieoznaczona"<<endl;
    }


    return 0;
}
