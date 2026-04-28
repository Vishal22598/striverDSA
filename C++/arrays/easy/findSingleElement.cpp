#include<iostream>
#include<unordered_map>
using namespace std;
int optimized(int arr[], int n){
    int result=0;
    for(int i=0; i<n; i++){
        result = result ^ arr[i];
    }
    return result;
}
int findSingleElement(int arr[], int n){
    unordered_map<int, int> mpp;
    for(int i=0;i<n; i++){
        mpp[arr[i]] = mpp[arr[i]]+1;
    }
    for(auto it: mpp){
        if(it.second == 1){
            return it.first;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    // cout << "single appearance ele is : " << findSingleElement(arr, n);
    cout << "single appearance ele is : " << optimized(arr, n);

    return 0;
}