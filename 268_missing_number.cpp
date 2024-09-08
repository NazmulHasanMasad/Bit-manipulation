#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();

    int sum = (n * (n + 1)) / 2;

    for (int i = 0; i < n; i++)
    {
        sum = sum - nums[i];
    }
    return sum;
}

int missingNumberxor(vector<int> &nums)
{

    int result = 0;

    for (int i = 0; i <= nums.size(); i++)
    {
        result = result^ i;
    }

    for (int nums : nums)
    {
        result = result ^ nums;
    }
    return result;
}

int main()
{
    vector<int> nums;
    for (int i = 0; i < 3; i++)
    {
        cin >> i;
        nums.push_back(i);
    }
    cout << missingNumber(nums);

    return 0;
}