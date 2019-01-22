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
    cout<< "czesc urojona: ";
    cout<<suma.imaginary<<endl;
    cout<< "dokonane zmiany"<<endl;
    cin>> proba.real;
    cin>> proba.imaginary;
    return 0;
}
