#include<iostream>
using namespace std;
int brute(int arr[], int n, int kSum){
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum+=arr[k];
            }
            if(sum == kSum){
                cout << "i: " << i << ", j: " << j << endl;
                count++;
            }
                
        }
    }
    return count;
}

int better(int arr[], int n, int kSum){
    int count=0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum+=arr[j];    
            if(sum == kSum){
                cout << "i: " << i << ", j: " << j << endl;
                count++;
            }
        }
        
    }
    return count;
}

int optimized(int arr[], int n, int kSum){
    int count=0, l=0, sum=0;
    for(int r=0; r<n; r++){
        sum+=arr[r];
        
        while(sum > kSum){
            sum-=arr[l];
            l++;
        }

        if(sum == kSum)
            count++;
    }
    return count;
}

int main(){
    int n = 4;
    int arr[n] = {3, 1, 2, 4};
    int k=6;
    // cout << "count: " << brute(arr, n, k);
    // cout << "count: " << better(arr, n, k);
    cout << "count: " << optimized(arr, n, k);
    return 0;
}