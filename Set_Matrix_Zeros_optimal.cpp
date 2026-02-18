#include<iostream>
#include<vector>
using namespace std;

void Set_Matrix_Zeros_better(vector<vector<int>>& nums) {

    int m = nums.size();                   // Row size
    int n = nums[0].size();                // Column size

    // vector<int> row(m, 0);       --> matrix[..][0] -> nums[..][0]     
    // vector<int> col(n, 0);       --> matrix[0][..] -> nums[0][..]

    int col0=1;
    for( int i=0;i<m ; i++) {
        for( int j=0;j<n;j++) {

            if(nums[i][j]==0) {

                // mark the i-th row
                nums[i][0]=0;

                // mark the j-th col
                if(j!=0) {
                    nums[0][j]=0;
                }
                else {
                    col0=0;
                }
            }
        }
    }

    for( int i=1;i<m ; i++) {
        for( int j =1;j<n;j++) {

            if(nums[0][j] ==0 || nums[i][0]==0) {
                nums[i][j]=0;
            }
        }
    }

    if(nums[0][0] ==0) {
        for(int j =0; j< n;j++) {
            nums[0][j]=0;
        }
    }
    if(col0 ==0) {
        for( int i=0;i<m ; i++) {
            nums[i][0]=0;
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
    
    Set_Matrix_Zeros_better(nums);
}