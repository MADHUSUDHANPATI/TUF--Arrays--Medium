#include<iostream>
#include<vector>
using namespace std;
int Sub_Array_sum_k_count_better(vector<int> nums, int k ) {

    int count=0;
    int n = nums.size();
    for( int i=0;i<n; i++) {

        int sum=0;
        for(int j=i;j<n; j++) {
            
            sum+=nums[j];
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

    cout << Sub_Array_sum_k_count_better(nums, k);

}