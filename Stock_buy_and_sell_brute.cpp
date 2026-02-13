#include<iostream>
#include<vector>
using namespace std;
int Stock_buy_and_sell_brute(vector<int> & nums) {

    int n = nums.size();
    int maxi=0;
    for( int i =0 ;i< n; i++) {

        for( int j =i+1; j<n ; j++) {
            int profit = nums[j]-nums[i];
            maxi = max( maxi, profit);   
        }
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

    cout << Stock_buy_and_sell_brute(nums);
}