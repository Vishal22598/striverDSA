#include<iostream>
#include<vector>
using namespace std;

int bs(vector<int> arr, int key){
    int l=0, r=arr.size()-1, ans = r+1;

    while(l<=r){
        int mid = l + (r-l)/2;
        if(arr[mid] >= key){
            ans = mid;
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,4,7};
    int key = 9;

    cout << "insert position for " << key << " in arr is : " << bs(arr, key);
    return 0;
}