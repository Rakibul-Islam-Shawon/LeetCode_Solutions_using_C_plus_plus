#include<iostream>
using namespace std;


class Solution {
public:

    int fib(int n){

        if(n<2){
        return n;
    }
    else{
        int f0 = 0;
        int f1 = 1;
        int f_next = 0;

        for(int i=1; i<n; i++){
            f_next = f0 + f1;
            f0 = f1;
            f1 = f_next;
        }
        return f_next;
    }
    }

};

int main(){
    Solution sol;

    cout << sol.fib(2)<<endl;

return 0;
}
