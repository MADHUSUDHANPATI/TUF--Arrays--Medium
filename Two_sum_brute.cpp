#include<iostream>
#include<vector>
using namespace std;
void Two_sum_brute ( vector<int> & nums, int target) {

    int n = nums.size();
    for( int i=0;i<n;i++) {

        for( int j=i+1;j<n;j++) {

            if(nums[i]+nums[j] == target) {
                cout << i  << "," << j;
                break;
                
            }
        }
    }
}
int main() {

    int n, target;
    cin >> n >> target;
    vector<int> nums(n);

    for( int i=0;i<n;i++) {

        cin >> nums[i];
    }

    Two_sum_brute( nums, target);
}