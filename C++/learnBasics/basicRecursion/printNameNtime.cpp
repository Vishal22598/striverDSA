#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

class Solution{
    public:
    void printName(int n){
        if(n <= 0)
            return;
        else{
            cout << "Vishal ";
            printName(n-1);
        }
        
        
    }
    void printName(int n, string name, int count){
        if(n == count)
            return;
        cout << name << " " ;
        printName(n, name, count+1);
    }
};

int main(){
    int n = 0;
    cin >> n;

    string name;
    cin >> name;

    Solution sol;
    // sol.printName(n);
    sol.printName(n, name, 0);
    return 0;
}