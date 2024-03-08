#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // #empty array
    int a[5] = {};
    // here the memory locations are empty out put of every index will be 0. //memory location of a index in array is Base + (i*size_of_type)
    cout << a[1] << endl; // output 0
    cout << a;            // memory location of array

    // #array initialization
    int b[5] = {1, 3, 4, 5, 6};

    // #array  traversing
    cout << b[2] << endl; // output 4

    return 0;
}
