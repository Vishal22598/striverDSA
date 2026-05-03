#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;
string brute(int arr[], int n, int target){
    string result = "No";
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                result = "Yes";
                return result;
            }
        }
    }
    return result;
}

string better(int arr[], int n, int target){
    unordered_map<int , int> mpp;
    string result = "No";
    for(int i=0; i<n; i++){
        int fir = arr[i], sec = target-fir;
        if(mpp.find(sec) == mpp.end()){
            mpp.insert({fir,i});
        }
        else{
            result = "yes";
            return result;
        }
    }
    return result;
}

string optimized(int arr[], int n, int target){
    sort(arr, arr+n-1);
    int l=0,r=n-1;
    string result = "No";
    while(l<r){
        int sum = arr[l]+arr[r];
        if(sum == target){
            result = "Yes";
            return result;
        }
        else if(sum < target)
            l++;
        else
            r--;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    
    int target = 12;
    // cout << "target available: " << brute(arr, n, target);
    // cout << "target available: " << better(arr, n, target);
    cout << "target available: " << optimized(arr, n, target);


    return 0;
}