#include <iostream>

using namespace std;

void subsets(int array[3], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << array[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    subsets(array, 5);
    return 0;
}