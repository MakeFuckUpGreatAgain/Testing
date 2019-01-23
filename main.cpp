
#include "Complex.h"
#include <iostream>
#include <string>
//#include "Unit_Test.h"

using namespace std;

int main()
{
    Complex proba(2,0), proba2(3.5,5.5),suma, CX0;
    suma=proba/proba2;
    cout<< "czesc modul: ";
    cout<<suma.module()<<endl;
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
