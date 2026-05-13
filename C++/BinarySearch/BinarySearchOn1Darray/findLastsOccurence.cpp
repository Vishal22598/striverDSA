#include<iostream>
#include<vector>
using namespace std;

int findLastOccurence(vector<int> arr, int target){
    int l=0, r=arr.size()-1, ans=-1;
    while (l<=r)
    {
        int mid = l + (r-l)/2;
        if(arr[mid] <= target){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    
    return ans;
}

int main(){
    vector<int> arr = {3, 4, 13, 13, 13, 20, 40};
    int target = 40;
    cout << "last occurence of " << target << " is at index: " << findLastOccurence(arr,target);
    return 0;
}