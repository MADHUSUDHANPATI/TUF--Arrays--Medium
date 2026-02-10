#include<iostream>
#include<vector>
using namespace std;
void Sort_colors_optimal_Dutch_National_Algo ( vector<int> &nums) {

    int n= nums.size();
    int low=0;
    int mid=0;
    int high =n-1;

    while(mid <= high) {

        if( nums[mid]==0) {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if ( nums[mid]==1) {
            mid++;
        }
        else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }

    for( int i=0;i<n;i++) {
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

    Sort_colors_optimal_Dutch_National_Algo( nums);
}