// Here Number of postive's and negative's are not equal.
#include<iostream>
#include<vector>
using namespace std;
void Re_arrange_Array_with_different_length_Sign(vector<int> & nums){

    int n = nums.size();
    vector<int> pos, neg;
    for( int i=0; i< n ; i++) {
        if(nums[i] > 0) {
            pos.push_back(nums[i]);
        }
        else {
            neg.push_back(nums[i]);
        }
    }
    if(pos.size() > neg.size()) {
        for( int i=0 ; i< neg.size(); i++) {
            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];
        }
        int index = neg.size()*2;
        for( int i=neg.size(); i< pos.size(); i++) {
            nums[index] = pos[i];
            index++;
        }
    }
    else {
        for( int i=0 ; i< pos.size(); i++) {
            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];
        }
        int index = pos.size()*2;
        for( int i=pos.size(); i< neg.size(); i++) {
            nums[index] = neg[i];
            index++;
        }
    }

    for( auto it : nums) {
        cout << it << " ";
    }
}
int main() {
    
    int n;
    cin >> n;
    vector<int>nums(n);
    for( int i=0;i< n; i++) {
        cin >> nums[i];
    }

    Re_arrange_Array_with_different_length_Sign(nums);

}