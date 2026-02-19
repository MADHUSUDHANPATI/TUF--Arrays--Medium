#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
void Rotate_Array_90_degree_optimal(vector<vector<int>> &nums) {

    // int m = nums.size();      // N =M here:
    int n = nums.size();

    for( int i=0;i< n-1; i++) {       // Or we can start i=0 i< n; j=0;j<n;;
        for( int j=i+1;j<n;j++) {

            swap(nums[i][j], nums[j][i]);
        }
    }

    for( int i=0;i<n; i++) {
        reverse(nums[i].begin(), nums[i].end());
    }


    for( int i=0;i<n; i++) {
        for( int j =0;j<n; j++) {
            cout << nums[i][j]<< " ";
        }
        cout << endl;
    }

}
int main() {
    
    int m,n;
    cin >>m >> n;

    vector<vector<int>> nums(m, vector<int>(n));

    for( int i=0;i<m; i++) {
        for( int j =0;j<n; j++) {
            cin >> nums[i][j];
        }
    }

    Rotate_Array_90_degree_optimal(nums);
}