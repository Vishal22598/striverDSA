#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<vector<int>> arr, int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void brute(vector<vector<int>> &arr,int n){
    int copy[n][n];
    for(int i=0; i<n; i++){
        int k = n-1;
        for(int j=0; j<n; j++){
            copy[i][j] = arr[k--][i];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j] = copy[i][j];
        }
    }
}

void optimized(vector<vector<int>> &arr, int n){
    //transpose
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    cout << endl << "Transpose Matrix" << endl;
    print(arr, n,n);

    //reverse
    for(int i=0; i<n; i++){
        reverse(arr[i].begin(), arr[i].end());
    }
    //Reverse
    cout << endl << "Reverse" << endl;
    print(arr, n,n);
}
int main(){
    int n, m;
    
    // vector<vector<int>> arr = {{1,1,1}, {1,0,1}, {1,1,1}};
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    m=arr.size();
    n=arr[0].size();
    print(arr, n, m);
    // brute(arr,n);
    // print(arr, n, m);

    // cout << endl;
    // better(arr, n, m);
    // print(arr, n, m);

    cout << endl;
    optimized(arr, n);
    print(arr, n, m);
    return 0;
}