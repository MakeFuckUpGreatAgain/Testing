#include <iostream>
#include "bedzie_testowako.h"
#include "Complex.h"
#include <string>
#include "Unit_Test.h"
//#include "Complex.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Complex proba(2,0), proba2(3.5,5.5),suma, CX0;
    suma=proba+proba2;
    Unit_Test a;
    cout<< "czesc modul: ";
    cout<<suma.module()<<endl;
    try
    {
        cout<< "faza "<< CX0.phase()<<endl;
    }
    catch (char)
    {
        cout<< "nieoznaczona"<<endl;
    }


    return 0;
}
