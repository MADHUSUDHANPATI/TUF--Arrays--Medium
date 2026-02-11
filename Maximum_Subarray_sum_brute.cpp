#include<iostream>
#include<vector>
using namespace std;
int Maximum_Subarray_sum_brute(vector<int> & nums) {

    int n= nums.size();
    int maxi=INT_MIN;
    for( int i=0;i<n;i++) {
        int sum =0;
        for( int j=i;j<n;j++) {
            sum+=nums[j];
            maxi = max(sum, maxi);
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

    cout << Maximum_Subarray_sum_brute(nums);
}
