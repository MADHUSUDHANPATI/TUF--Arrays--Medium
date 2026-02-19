#include<iostream>
#include<vector>
using namespace std; 
void Rotate_Array_90_degree_brute(vector<vector<int>> &nums) {

    // int m = nums.size();      // N =M here:
    int n = nums[0].size();
    vector<vector<int>> ans(n, vector<int>(n));
    for( int i=0;i<n ; i++) {
        for( int j=0; j< n ; j++) {

            ans[j][n-i-1]= nums[i][j];
        }
    }

    for( int i=0;i<n; i++) {
        for( int j =0;j<n; j++) {
            cout << ans[i][j]<< " ";
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

    Rotate_Array_90_degree_brute(nums);
}