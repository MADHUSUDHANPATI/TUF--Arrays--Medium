#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> Next_permutation(vector<int> & nums) {

    // We have direct STL library solution --> next_permutation(nums.begin(), nums.end());
    int n= nums.size();
    int index=-1;
    for( int i=n-2 ; i>=0;i--) {
        if(nums[i] < nums[i+1]) {
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(nums.begin(), nums.end());
        return nums;
    } 

    for( int i=n-1;i>index;i--) {
        if( nums[i] > nums[index]) {
            swap(nums[i], nums[index]);
            break;
        }
    }
    reverse(nums.begin()+index+1, nums.end());
    return nums;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);
    for( int i=0; i< n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = Next_permutation(nums);
    for(auto it : ans) {
        cout << it << " ";
    }

}