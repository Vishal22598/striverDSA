#include<iostream>
#include<vector>
using namespace std;

void brute(int arr[], int n){
    vector<int> pos, neg;
    for(int i=0; i<n; i++){
        if(arr[i] < 0)
            neg.push_back(arr[i]);
        else
            pos.push_back(arr[i]);
    }
    int pInd=0, nInd=0;
    for(int i=0; i<n; i++){
        if(i%2 == 0)
            arr[i] = pos[pInd++];
        else
            arr[i] = neg[nInd++];
    }
}


void optimized(int arr[], int n){
    int posInd = 0, negInd = 1;
    vector<int> result(n);
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            result[negInd] = arr[i];
            negInd+=2;
        }        
        else{
            result[posInd] = arr[i];
            posInd+=2;
        }
    }

    for(int i=0; i<n; i++){
        arr[i] = result[i];
    }
}

int main(){
//     4
// 1 2 -4 -5
    int n;
    cout << "enter a num: " ;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }

    // brute(arr, n);
    optimized(arr, n);
    for(int i: arr){
        cout << i << ", ";
    }
    
    return 0;
}