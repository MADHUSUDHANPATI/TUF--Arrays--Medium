#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
int Longest_consecutive_sequence_optimal(vector<int> & nums) {
    
    int n = nums.size();
    int longest=0;
    int count =0;
    unordered_set<int>mpp;
    for( int i=0; i< n; i++) {
        mpp.insert(nums[i]);
    }

    for( auto it : mpp) {

        if(mpp.find(it-1) ==mpp.end()) {

            count=1;
            int x =it;
            while(mpp.find(x+1)!=mpp.end()) {
                count+=1;
                x=x+1;
            }

            longest= max(count, longest);

        }
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

    cout << Longest_consecutive_sequence_optimal(nums);
    

}