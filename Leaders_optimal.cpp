#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> Leaders_optimal(vector<int> & nums) {
    vector<int> ans;
    int n = nums.size();
    // int maxi=nums[n-1];  // with this we can reduce 1 loop
    // ans.push_back(maxi);
    int maxi =INT_MIN;

    for( int i=n-1;i>=0;i--) {
        if(nums[i] > maxi) {
            ans.push_back(nums[i]);
        }
        maxi= max(nums[i], maxi);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);
    for( int i=0; i< n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = Leaders_optimal(nums);
    for(auto it : ans) {
        cout << it << " ";
    }

}