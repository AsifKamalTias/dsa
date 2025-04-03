#include <iostream>
using namespace std;
int main(int argc, const char **argv)
{
    cout << "Hello world" << endl;

    //Pointer
    int x = 10;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    int *p = &x;
    cout << "Value of p: " << p << endl;
    cout << "Value of *p: " << *p << endl;
    cout << "Address of p: " << &p << endl;

    return 0;
}