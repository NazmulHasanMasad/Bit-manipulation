#include <iostream>

using namespace std;

bool powerof2(int n)
{
    return (n && !(n & n - 1));
}

int main()
{
    int n;
    cin >> n;
    cout << powerof2(n);
    return 0;
}