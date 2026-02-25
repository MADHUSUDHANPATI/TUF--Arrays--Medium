#include<iostream>
#include<vector>
using namespace std;

void Spiral_Matrix(vector<vector<int>> nums) {

    vector<int> ans;

    int m = nums.size();
    int n = nums[0].size();

    int top =0;
    int bottom = m-1;
    int left=0;
    int right=n-1;

    while(left<=right && top <=bottom) {

        for( int i=left ; i<=right;i++) {
            
            ans.push_back(nums[top][i]);
        }
        top++;

        for( int i=top ; i<=bottom;i++) {
            ans.push_back(nums[i][right]);

        }
        right--;

        //Bottom row
        if(top<=bottom) {                             // Checking if only 1 row presents
            for( int i=right ; i>=left; i-- ) {
                ans.push_back(nums[bottom][i]);
            }
            bottom--;
        }

        //Left column
        if(left<=right) {                                // Checking if only 1 col presents
            for(int i=bottom;i>=top;i--) {
                ans.push_back(nums[i][left]);

            }
            left++;
        }
    }

    for(auto it : ans) {
        cout << it << " ";
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

    Spiral_Matrix(nums);
}