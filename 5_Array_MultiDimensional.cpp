#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
            if (j == 2)
            {
                cout << endl;
            }
        }
    }

    return 0;
}
