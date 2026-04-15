#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

class Solution{
    public:

    vector<int> reverseArray(vector<int> &arr){
        int n = arr.size();
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            ans[i] = arr[n-1-i];
        }
        return ans;
    }

    void revArr(int arr[], int index, int i){
        if(index < i)
            return;
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;

        revArr(arr, index-1, i+1);
   };

   void revArr1(int arr[], int index, int rev[], int i){
        if(index < 0)
            return;
        rev[i] = arr[index];
        revArr1(arr, index-1, rev, i+1);
   }

};
int main(){
    cout << "Reverse of an array" << endl;
    int n = 0;
    cin >> n;

    int arr[] = {5,4,3,2,1};
    n = 5;

    Solution sol;
    sol.revArr(arr, n-1, 0);

    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }

    int rev[5];
    sol.revArr1(arr, n-1, rev, 0);

    cout  << endl << "new array to store reverse arr: " << endl;
    for(int i=0; i<n; i++)
        cout << rev[i] << endl;

    vector<int> vecArr = {9,8,7,6,5};
    vecArr = sol.reverseArray(vecArr);
    for(int i : vecArr){
        cout << i << ", ";
    }
    return 0;
}