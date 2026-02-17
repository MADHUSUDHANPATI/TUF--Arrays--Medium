#include<iostream>
#include<vector>
using namespace std;
int Maximum_Subarray_sum_optimal_Kadane_Algo(vector<int> & nums) {
    
    int n = nums.size();
    int sum=0;
    int maxi=INT_MIN;
    for( int i=0 ;i < n ;i++) {
        sum +=nums[i];
        maxi = max( maxi, sum);
        if(sum < 0) {
            sum=0;
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

    cout << Maximum_Subarray_sum_optimal_Kadane_Algo(nums);
}
