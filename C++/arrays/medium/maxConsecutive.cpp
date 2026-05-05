#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int brute(vector<int> arr){
    sort(arr.begin(), arr.end());
    for(int i: arr)
        cout << i << ", ";
    int maxLen = 1;
    for(int i=0; i<arr.size(); i++){
        int len = 1; 
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j]-arr[j-1] == 1)
                len++;
        }
        maxLen = len > maxLen ? len : maxLen;
    }
    return maxLen;
}

int better(vector<int> arr){
    sort(arr.begin(), arr.end());
    int maxLen = 1, len = 1; 
    for(int i=1; i<arr.size(); i++){
        if(arr[i]-arr[i-1] == 1)
            len++;
        else
            len = 1;
        maxLen = len>maxLen ? len : maxLen;
    }
    return maxLen;
}

int main(){
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    // for(int i=0;i<n; i++){
    //     cin >> arr[i];
    // }

    // cout << endl << "max: " << brute(arr) ;
    cout << "max: " << better(arr) ;

    return 0;
}