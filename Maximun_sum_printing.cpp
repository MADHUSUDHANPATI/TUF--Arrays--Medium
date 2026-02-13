#include<iostream>
#include<vector>
using namespace std;
void Maximum_Subarray_sum_printing_Array_optimal_Kadane_Algo(vector<int> & nums) {
    
    int n = nums.size();
    int sum=0;
    int maxi=INT_MIN;
    int ansStart=-1;
    int ansEnd=-1;
    int start;
    for( int i=0 ;i < n ;i++) {

        if(sum ==0){
            start=i;
        }

        sum +=nums[i];
        if( sum > maxi) {
            maxi =sum;
            ansStart=start;
            ansEnd = i;
        }
        if(sum < 0) {
            sum=0;
        }
        
    }  

    for( int i=ansStart ; i<=ansEnd; i++) {
        cout << nums[i] << " ";
    }

}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);
    for( int i=0;i<n;i++) {
        cin >> nums[i];
    }

    Maximum_Subarray_sum_printing_Array_optimal_Kadane_Algo(nums);
}
