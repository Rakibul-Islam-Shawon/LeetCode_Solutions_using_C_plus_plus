
#include<iostream>
#include<vector>
using namespace std;


class Solution {

public:
    int missingNumber(vector<int> nums){

        int length = nums.size();
        int sumOfValues = (length * (length+1))/2;

        int total = 0;
        for (int i =0; i<length; i++){
            total += nums[i];
        }

        return abs(sumOfValues - total);
    }
};
int main(){

    Solution sol;
    vector <int> arr = {1,0,3};
    int result  = sol.missingNumber(arr);

    cout << result<<endl;

    return 0;

}
