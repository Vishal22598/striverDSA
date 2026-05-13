#include<iostream>
#include<vector>
using namespace std;

int findTotalOccurence(vector<int> arr, int target){
    int l=0, r=arr.size()-1, ans=-1;
    int firstOccurence = r;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(arr[mid]>=target){
            firstOccurence = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    // cout << "first occurence : " << firstOccurence << endl;

    //last occurence
    l=0, r=arr.size()-1, ans=-1;
    int lastOccurence = r;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(arr[mid]<=target){
            lastOccurence = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    // cout << "last occurence : " << lastOccurence << endl;

    
    return lastOccurence-firstOccurence+1;
}

int main(){
    vector<int> arr = {3, 4, 13, 13, 13, 20, 40};
    int target = 13;
    cout << "total occurence of " << target << " is: " << findTotalOccurence(arr,target);
    return 0;
}