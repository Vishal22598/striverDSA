#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

class Solution{
    public:
   int sumOfN(int n){
    if(n == 1)
        return 1;
    return n + sumOfN(n-1);
   }


};
int main(){
    cout << "sum of n" << endl;
    int n = 0;
    cin >> n;

    Solution sol;
    int sum = sol.sumOfN(n);
    cout << "sum:  " << sum;
    return 0;
}