// This solution is valid only arrays has 0's or 1's / only postive elements

#include<iostream>
#include<vector>
using namespace std;
void rowChange(vector<vector<int>>& nums, int i, int n) {

    for(int j=0; j< n;j++) {
        if(nums[i][j]!=0) {
            nums[i][j]=-1;
        }
    }
}
void columnChange(vector<vector<int>>& nums, int j, int m) {

    for(int i=0; i<m;i++) {
        if(nums[i][j]!=0) {
            nums[i][j]=-1;
        }
    }
}
void Set_Matrix_Zeros_brute(vector<vector<int>>& nums) {

    int m = nums.size();                   // Row size
    int n = nums[0].size();                // Column size
    for( int i=0;i<m ; i++) {

        for( int j=0;j<n;j++) {
            if(nums[i][j]==0) {
                rowChange(nums, i, n);
                columnChange(nums, j, m);
            }
        }
    }

    
    for( int i=0;i<m; i++) {
        for( int j =0;j<n;j++) {
            if(nums[i][j]==-1) {
                nums[i][j]=0;
            }
        }
    }
    
    for( int i=0;i<m; i++) {
        for( int j =0;j<n;j++) {
            cout << nums[i][j]<< " ";
        }
        cout << endl;
    }

}
int main() {

    int m,n;
    cin >> m>>n;
    // int nums[m][n];
    vector<vector<int>> nums(m, vector<int>(n));

    for( int i=0;i<m; i++) {
        for( int j =0;j<n;j++) {
            cin >> nums[i][j];
        }
    }
    
    Set_Matrix_Zeros_brute(nums);
}