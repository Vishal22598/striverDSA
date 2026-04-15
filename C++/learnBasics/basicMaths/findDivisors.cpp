#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

class Solution{
    public:
    vector<int> getDivisors(int N){
        vector<int> res;

        for(int i=1; i*i < N; i++){
            if(N%i == 0){
                res.push_back(i);
                if(i!= N/i)
                    res.push_back(N/i);
            }
        }
        return res;
    }
};

int main(){
    int num;
    cin >> num;

    Solution sol;
    vector<int> res = sol.getDivisors(num);
    for(int val: res)
        cout << val << ", ";

    cout << endl;
    return 0;
}