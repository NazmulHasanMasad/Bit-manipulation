#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string addBinary(string a, string b)
{
    string ans;
    int carry = 0;

    int i = a.length() - 1;
    int j = a.length() - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        if (i >= 0)
            carry += a[i] - '0';

        if (j >= 0)
            carry += b[i] - '0';

        ans += carry % 2 + '0';
        carry /= 2;
        i--;
        j--;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
