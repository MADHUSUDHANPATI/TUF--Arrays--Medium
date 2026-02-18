#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> Leaders_brute(vector<int> & nums) {
    vector<int> ans;
    int n = nums.size();
    for( int i=0; i< n; i++) {
        int leader = true;
        for( int j =i+1; j< n; j++) {
            if( nums[j]> nums[i]) {
                leader=false;
                break;
            }
        }
        if( leader==true) {
            ans.push_back(nums[i]);
        }
    }
    return ans;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);
    for( int i=0; i< n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = Leaders_brute(nums);
    for(auto it : ans) {
        cout << it << " ";
    }

}