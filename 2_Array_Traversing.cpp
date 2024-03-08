#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // #array input, output & traversing through loop
    int c[10];

    int cLength = sizeof(c) / sizeof(c[0]); // length of array
 
    cout << "Enter 10 integer numbers: ";
    for (int i = 0; i < cLength; i++)
    {
        cin >> c[i];
    }

    cout << "You have entered: ";
    for (int i = 0; i < cLength; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}
