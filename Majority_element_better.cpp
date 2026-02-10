#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
int Majority_element_optimal(vector<int> &nums)
{

    int n = nums.size();
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
    }

    int maxi = mpp[nums[0]];
    int ans = nums[0];
    for (auto it : mpp)
    {
        if (it.second > maxi)
        {
            maxi = it.second;
            ans = it.first;
        }
    }

    return ans;
}
int main()
{

    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Majority_element_optimal(nums);
}