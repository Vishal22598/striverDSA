#include<iostream>
#include<unordered_map>
using namespace std;

int brute(int arr[], int n){
    int result = -1;
    for(int i=0; i<n; i++){
        int cnt=0;
        for(int j=i; j<n; j++){
            if(arr[j] == arr[i])
                cnt++;
            if(cnt > n/2){
                result = arr[i];
                return result;
            }     
        }
    }
    return result;
}

int better(int arr[], int n){
    int result = -1;
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp.insert({arr[i], mpp[arr[i]]++});
    }
    for(auto it: mpp){
        if(it.second > n/2){
            result = it.first;
            return result;
        }
    }
    return result;
}

int optimized(int arr[], int n){
    int cnt=0, lastEle;
    for(int i=0; i<n; i++){
        if(cnt == 0){
            lastEle = arr[i];
        }
        if(arr[i] == lastEle)
            cnt++;
        else
            cnt--;
    }
    // cout << "lastEle: " << lastEle;
    cnt =0;
    for(int i=0; i<n; i++){
        if(arr[i] == lastEle){
            cnt++;
        }
        if(cnt > n/2)
            return arr[i];
    }
    return -1;
}

int main(){
    int n;
    cout << "enter a num: " ;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }

    // cout << "majority elem: " << brute(arr, n);
    // cout << "majority elem: " << better(arr, n);
    cout << "majority elem: " << optimized(arr, n);

    
    return 0;
}