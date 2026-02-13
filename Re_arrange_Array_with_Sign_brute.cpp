// Here Number of postive's and negative's are equal.
#include<iostream>
#include<vector>
using namespace std;
void Re_arrange_Array_with_Sign_brute(vector<int> & nums){

    int n = nums.size();
    vector<int> pos, neg;
    for( int i =0 ;i< n ; i++) {
        if( nums[i] >0) {
            pos.push_back(nums[i]);
        }
        else {
            neg.push_back(nums[i]);
        }
    }

    for( int i=0; i< n/2 ; i++) {
        nums[2*i] = pos[i];
        nums[(2*i)+1] = neg[i];
    }

    for( int i=0 ; i< n ; i++) {
        cout << nums[i] << " ";
    }
}
int main() {
    
    int n;
    cin >> n;
    vector<int>nums(n);
    for( int i=0;i< n; i++) {
        cin >> nums[i];
    }

    Re_arrange_Array_with_Sign_brute(nums);

}