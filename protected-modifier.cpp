#include <iostream>
using namespace std;

class Base
{
    // PROTECTED >>>>>>>>>> Yeh aik aisa variable hai joky a(private member) hai usko bhi inherited kar sakta ha
    // lekin a ki security bi rahy gi or inherited b ho jye ga
    //  hmari derived class ma.

    int a;
    // private
    int b;
};
class derived : protected Base
{
};

int main()
{

    Base b;
    derived d;
    cout << d.a; // Wil not work since 'A' is protected in both  base as well as derived class
    return 0;
}