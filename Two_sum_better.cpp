#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void Two_sum_better ( vector<int> & nums, int target) {

    int n = nums.size();
    unordered_map<int, int> mpp;

    for( int i=0;i<n;i++) {

        int a = nums[i];

        int rem = target - a;

        if( mpp.find(rem) != mpp.end()) {

            cout << mpp[rem] << "," << i;
            break;
        }

        mpp[a] = i;
    }
    
}
int main() {

    int n, target;
    cin >> n >> target;
    vector<int> nums(n);

    for( int i=0;i<n;i++) {

        cin >> nums[i];
    }

    Two_sum_better( nums, target);
}