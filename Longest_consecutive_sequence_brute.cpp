#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool linear_search(vector<int> &nums, int x) {

    int n = nums.size();
    for( int i=0;i<n;i++) {
        if( nums[i]==x) {
            return true;
        }
    }
    return false;
}
int Longest_consecutive_sequence_brute(vector<int> & nums) {

    int n = nums.size();
    int longest =1;
    for( int i=0;i<n;i++) {
        int x = nums[i];
        int count =1;
        while(linear_search(nums, x+1)==true) {

            x= x+1;
            count+=1;
        }
        longest = max(longest, count);
    }
    return longest;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);
    for( int i=0; i< n; i++) {
        cin >> nums[i];
    }

    cout << Longest_consecutive_sequence_brute(nums);
    

}