#include "ComplexNumber.hpp"

int main()
{
    ComplexNumber c1(1,2);
    ComplexNumber c2(1,-2);
    ComplexNumber c3(-3,2);
    ComplexNumber c4(-1,-5);
    ComplexNumber c5(1.3,-2.5);
    ComplexNumber c11(1,2);
    cout << c1 << endl;
    cout << c2 << endl;
    //cout << c3 << endl;
    //cout << c4 << endl;
    cout << c5 << endl;
    //cout << c1+c2 << endl;
    //cout << c1-c3 << endl;
    cout << c3 + c4 << endl;
    cout << c3-c4 << endl;

    ComplexNumber c6 = coniugate(c4);
    cout << c6 << endl;

    ComplexNumber c7 = coniugate(c5);
    cout << c7 << endl;

    if(c1==c11)
    {
        cout<<"sono uguali"<<endl;
    }






    return 0;
}


