#include<iostream>
#include<vector>
using namespace std;
void Sort_colors_brute ( vector<int> &nums) {

    int n = nums.size();
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;

    for( int i=0;i<n ;i++) {
        if( nums[i] ==0) {
            v1.push_back(nums[i]);
        }
    }
    for( int i=0;i<n ;i++) {
        if( nums[i] ==1) {
            v2.push_back(nums[i]);
        }
    }
    for( int i=0;i<n ;i++) {
        if( nums[i] ==2) {
            v3.push_back(nums[i]);
        }
    }

    int index=0;
    for ( int i=0 ; i< v1.size() ; i++) {
        nums[index++] = v1[i];
    }

    for ( int i=0 ; i< v2.size() ; i++) {
        nums[index++] = v2[i];
    }

    for ( int i=0 ; i< v3.size() ; i++) {
        nums[index++] = v3[i];
    }

    

    for ( int i=0 ; i< n ;i ++) {
        cout << nums[i] << " ";
    }
}
int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for( int i=0 ; i< n ;i++) {
        cin >> nums[i];
    }

    Sort_colors_brute( nums);
}