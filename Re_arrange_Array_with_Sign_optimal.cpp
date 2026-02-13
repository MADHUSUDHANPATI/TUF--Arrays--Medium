// Here Number of postive's and negative's are equal.
#include<iostream>
#include<vector>
using namespace std;
void Re_arrange_Array_with_Sign_optimal(vector<int> & nums){

    int n = nums.size();
    int pos=0;
    int neg =1;
    vector<int> ans(n);
    for( int i =0 ; i< n; i++) {

        if(nums[i] > 0) {
            ans[pos]=nums[i];
            pos+=2;
        }
        else {
            ans[neg]= nums[i];
            neg+=2;
        }
    }

    for( auto it : ans) {
        cout << it << "";
    }
}
int main() {
    
    int n;
    cin >> n;
    vector<int>nums(n);
    for( int i=0;i< n; i++) {
        cin >> nums[i];
    }

    Re_arrange_Array_with_Sign_optimal(nums);

}