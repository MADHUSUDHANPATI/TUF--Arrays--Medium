#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Longest_consecutive_sequence_better(vector<int> & nums) {

    sort(nums.begin(), nums.end());
    int n = nums.size();
    int longest=0;
    int count =0;
    int lastSmaller =INT_MIN;

    for( int i=0; i< n; i++) {

        if( nums[i]-1 ==lastSmaller) {

            count++;
            lastSmaller = nums[i];
        }
        else if( nums[i] !=lastSmaller) {
            count=1;
            lastSmaller = nums[i];
        }
        longest = max(count, longest);
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

    cout << Longest_consecutive_sequence_better(nums);
    

}