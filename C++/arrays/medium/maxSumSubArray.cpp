#include<iostream>
#include<unordered_map>
using namespace std;

int brute(int arr[], int n){
    int maxSum = arr[0];
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum += arr[k];
            }
            if(sum > maxSum)
                maxSum = sum;
        }
    }
    return maxSum;
}

int better(int arr[], int n){
    int maxSum = arr[0];
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum += arr[j];

            if(sum > maxSum)
                maxSum = sum;
        }
    }
    return maxSum;
}

int optimized(int arr[], int n){
    int r=0, maxSum=arr[0], sum=0, st=0,end=0;
    while(r<n){
        sum += arr[r];
        if(sum>maxSum){
            maxSum  = sum;
            end=r;
        }
            
        if(sum < 0){
            sum = 0;
            st=r;
        }
            
        r++;
    }
    cout << "subarray: " << endl;
    for(int i=st+1; i<=end; i++){
        cout << arr[i] << ", ";
    }
    return maxSum;
}

int main(){
    int n;
//     9
// -2 1 -3 4 -1 2 1 -5 4
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }

    // cout << "max sum of subarray: " << brute(arr, n);
    // cout << "max sum of subArray: " << better(arr, n);
    cout << endl << "Max sum of subarray: " << optimized(arr, n);

    
    return 0;
}