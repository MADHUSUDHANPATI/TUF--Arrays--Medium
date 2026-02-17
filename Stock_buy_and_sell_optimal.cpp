#include<iostream>
#include<vector>
using namespace std;
int Stock_buy_and_sell_optimal(vector<int> & nums) {

    int n = nums.size();
    int mini=nums[0];
    int maxi=0;
    for( int i=1;i<n;i++) {
        int profit = nums[i]-mini;
        maxi = max(maxi, profit);
        mini = min(nums[i], mini);
    }

    return maxi;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);
    for( int i=0;i<n;i++) {
        cin >> nums[i];
    }

    cout << Stock_buy_and_sell_optimal(nums);
}