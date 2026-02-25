#include<iostream>
#include<vector>
using namespace std;
int Sub_Array_sum_k_count(vector<int> nums, int k ) {

    int count=0;
    int n = nums.size();
    for( int i=0;i<n; i++) {
        for(int j=i;j<n; j++) {

            int sum=0;
            for( int x=i ; x<=j;k++) {

                sum+=nums[x];
            }
            if(sum==k) {
                count++;
            }
        }
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

    cout << Sub_Array_sum_k_count(nums, k);

}