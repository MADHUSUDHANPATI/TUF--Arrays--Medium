#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
int Majority_element_optimal_Moore_Voting_Algo(vector<int> &nums) // Element always guranteed.
{

    int element;
    int count=0;
    int n = nums.size();
    for( int i=0 ; i< n ; i++) {

        if(count ==0) {
            element= nums[i];
            count=1;
        }
        else if ( nums[i]==element) {
            count++;
        }
        else count--;
    }
    return element;

    // If majority is not gurantied in the array: we need to take the element to do this :
    // int c=0;
    // for( int i=0;i<n;i++) {
    //     if( nums[i]==element) c++;
    // }

    // if(c > (n/2)) return element;
    // else return -1;

}
int main()
{

    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Majority_element_optimal_Moore_Voting_Algo(nums);
}