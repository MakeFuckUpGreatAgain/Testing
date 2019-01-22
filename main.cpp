#include <iostream>
#include "bedzie_testowako.h"
#include "Complex.h"
//#include "Complex.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Complex proba(4,6), proba2(3.5,5.5),suma;
    suma=proba+proba2;
    cout<< "czesc modul: ";
    cout<<suma.module()<<endl;
    cout<< "czesc rzeczywista   "<<suma.real<<endl;
    cout<< "dokonane zmiany"<<endl;
    cin>> proba.real;
    return 0;
}
