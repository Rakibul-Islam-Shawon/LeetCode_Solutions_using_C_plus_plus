
#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long int copyNum = x;
    long int reverseNum = 0;

    while(copyNum > 0){
        int remainder = copyNum % 10;
        reverseNum = reverseNum * 10 + remainder;
        copyNum = copyNum / 10;
    }

    return (x == reverseNum);
    }
};

/*bool isPalindrome(int x){

    int copyNum = x;
    int reverseNum = 0;

    while(copyNum > 0){
        int remainder = copyNum % 10;
        reverseNum = reverseNum * 10 + remainder;
        copyNum = copyNum / 10;
    }

    return (x == reverseNum);
}
*/

int main(){

    Solution sol;
    bool result = sol.isPalindrome(-10);
    cout<<result<<endl;

    return 0;
}
