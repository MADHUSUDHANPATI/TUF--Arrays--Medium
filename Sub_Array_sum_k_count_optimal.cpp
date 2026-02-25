#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int Sub_Array_sum_k_count_optimal(vector<int> nums, int k ) {

    int preSum =0;
    int count=0;
    int n = nums.size();
    unordered_map<int, int> mpp;
    mpp[0]=1;

    for( int i=0;i<n; i++)  {

        preSum+=nums[i];
        int rem = preSum-k;
        
        if(mpp.find(rem) != mpp.end()) {
            count += mpp[rem];
        }
        mpp[preSum]+=1;
    }

    return count;
}
int main() {

    int n, k;
    cin >> n>>k;
    vector<int> nums(n);
    for( int i=0;i<n; i++) {
        cin >> nums[i];
    }

    cout << Sub_Array_sum_k_count_optimal(nums, k);

}