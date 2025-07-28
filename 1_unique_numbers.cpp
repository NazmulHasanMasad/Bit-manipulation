#include <iostream>

using namespace std;

int uniqueNumbers(int array[], int n)
{
    int xorsum = 0;

    for (int i = 0; i < n; i++)
    {

        xorsum = xorsum ^ array[i];
    }

    return xorsum;
}

int main()
{

    int array[] = {1, 2, 3, 4, 1, 2, 3};

    cout << uniqueNumbers(array, 7);

    return 0;
}