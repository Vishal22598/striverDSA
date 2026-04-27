#include<iostream>
using namespace std;

int maxConsecutiveOne1(int arr[], int n){
    int i=0, max=0;
    while(i<n){
        int cur = 0;
        while(i<n && arr[i] == 1){
            cur++;
            i++;
        }
        if(cur>max){
            max = cur;
        }
        i++;
    }
    return max;
}
int maxConsecutiveOne(int arr[], int n){
    int cnt=0, max=0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1)
            cnt++;
        if(arr[i] == 0){
            cnt = 0;
        }
        max = cnt>max ? cnt:max;
    }
    return max;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    cout << "max Consecutive One is : " << maxConsecutiveOne(arr, n);

    return 0;
}