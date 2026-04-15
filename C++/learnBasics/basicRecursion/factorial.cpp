#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

class Solution{
    public:
   int factOfN(int n){
    if(n == 1)
        return 1;
    return n * factOfN(n-1);
   }


};
int main(){
    cout << "fact of n" << endl;
    int n = 0;
    cin >> n;

    Solution sol;
    int sum = sol.factOfN(n);
    cout << "factorial:  " << sum;
    return 0;
}