#include <iostream>
#include <stdexcept>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int *deleteFromArray(int arr[], int size, int pos)
{
    if (pos < 1 || pos > size)
    {
        throw out_of_range("Invalid position! Position must be between 1 and " + to_string(size) + ".");
    }

    for (int i = pos - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return arr;
}

int main(int argc, char const *argv[])
{
    try
    {
        int size;
        cout << "Enter the size of array: ";
        cin >> size;

        if (size <= 0)
        {
            throw invalid_argument("Invalid size! Size must be a positive integer.");
        }

        int a[size];

        cout << "Enter integer numbers to insert in array: ";
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }

        printArray(a, size);

        int pos;
        cout << "Enter position to delete: ";
        cin >> pos;

        deleteFromArray(a, size, pos);
        size--;

        printArray(a, size);
    }
    catch (const exception &ex)
    {
        cerr << "Exception: " << ex.what() << endl;
        return 1;
    }

    return 0;
}