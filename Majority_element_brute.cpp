#include <iostream>
#include <vector>
using namespace std;
int Majority_element_brute(vector<int> &nums)
{

    int n = nums.size();
    int need = n / 2;
    int ans;
    for (int i = 0; i < n; i++)
    {
        int c = 0;

        for (int j = 0; j < n; j++)
        {
            if (nums[j] == nums[i])
            {
                c++;
            }
        }

        if (c > need)
        {
            ans = nums[i];
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

    Majority_element_brute(nums);
}