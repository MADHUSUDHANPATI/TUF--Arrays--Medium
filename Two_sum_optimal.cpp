#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Two_sum_optimal ( vector<int> & nums, int target) {


    sort(nums.begin(), nums.end());
    int n = nums.size();
    int i=0;
    int j = n-1;

    while( i < j) {

        int sum =  nums[i] + nums[j];

        if( sum== target) {
            return true;
            break;
        }
        else if ( sum > target) {
            j--;
        }
        else {
            i++;
        }
    }

    return false;
    
}
int main() {

    int n, target;
    cin >> n >> target;
    vector<int> nums(n);

    for( int i=0;i<n;i++) {

        cin >> nums[i];
    }

    cout<<  Two_sum_optimal ( nums, target);
}