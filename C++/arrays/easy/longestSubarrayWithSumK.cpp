#include<iostream>
using namespace std;

int longestSubarrayWithSumK(int arr[], int n, int k){
    int maxLength=0;
    for(int i=0; i<n; i++){
        int sum=0, cnt=0, j=i;
        while(j<n && sum!=k){
            sum+=arr[j];
            j++;
            cnt++;
        }
        if(sum == k){
            maxLength = cnt>maxLength ? cnt : maxLength;
        }
    }
    return maxLength;
}
int brute(int arr[], int n, int k){
    int maxLen=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum+=arr[k];
            }
            if(sum==k){
                int curLen = j-i+1;
                maxLen = curLen > maxLen ? curLen : maxLen;
            }
        }
    }
    return maxLen;
}
int better(int arr[], int n, int k){
    int maxlen = 0, start, end;
    for(start=0; start<n; start++){
        int sum=0;
        for(end=start; end<n; end++){
            sum+= arr[end];
            if(sum==k){
            int curLen = end-start + 1;
            maxlen = curLen > maxlen ? curLen : maxlen;
            break;
        }
        }
        
    }
    return maxlen;
}

int optimized(int arr[], int n, int k){
    int l,r,sum,maxLen;
    l=r=sum=maxLen=0;
    while(r<n){
        sum+=arr[r];
        if(sum==k){
            int curLen = r-l+1;
            maxLen = curLen > maxLen ? curLen : maxLen;
        }
        while(sum>k){
            sum-=arr[l];
            l++;
        }
        r++;
    }
    return maxLen;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    int k=15;
    // cout << "max subarray length: " << longestSubarrayWithSumK(arr, n, k);
    // cout << "max subarray length: " << brute(arr, n, k);
    // cout << "max subarray length: " << better(arr, n, k);
    cout << "max subarray length: " << optimized(arr, n, k);
    
    return 0;
}