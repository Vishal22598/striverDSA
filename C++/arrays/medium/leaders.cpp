#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> brute(int arr[], int n){
    vector<int> leaders;
    leaders.push_back(arr[n-1]);
    for(int i=n-2; i>=0; i--){
        bool isLeader = true;
        for(int j=i+1; j<n; j++){
            if(arr[i] < arr[j]){
                isLeader=false;
                break;
            }
        }
        if(isLeader)
            leaders.push_back(arr[i]);
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

vector<int> better(int arr[], int n){
    vector<int> leaders;
    int max=arr[n-1];
    leaders.push_back(max);
    for(int i=n-2; i>=0; i--){
        // max = arr[i] > max ? arr[i] : max;
        if(arr[i] > max){
            max = arr[i];
            leaders.push_back(arr[i]);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main(){
    int n = 6;
    // cin >> n;
    int arr[n] = {10, 22, 12, 3, 0, 6};
    // for(int i=0;i<n; i++){
    //     cin >> arr[i];
    // }

    vector<int> leaders = better(arr, n);
    for(int i: leaders)
        cout << i << ", ";
    return 0;
}