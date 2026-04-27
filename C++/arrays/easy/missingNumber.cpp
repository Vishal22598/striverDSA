#include<iostream>
using namespace std;

int missingNumber(int arr[], int size){
    int maxNum=arr[0], currSum = arr[0];
    for(int i=1; i<size; i++){
        currSum += arr[i];
    }
    int n=size+1;
    int expectedSum = n * (n + 1)/2;
    int missingNum = expectedSum - currSum;
    return missingNum;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    cout << "missing number is : " << missingNumber(arr, n);

    return 0;
}