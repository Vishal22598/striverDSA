#include<iostream>
#include<vector>
using namespace std;

void findFloorCeilOfSortedArray(vector<int> arr, int x){
    int low = 0, high = arr.size()-1, ans = high;

    //floor
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] <= x){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    cout << "floor: " << arr[ans] << endl;

    //ceil
    low = 0, high = arr.size()-1, ans = high;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    cout << "ceil: " << arr[ans] << endl;
}

int main(){
    vector<int> arr = {1,2,4,5,7};
    int key = 5;
    findFloorCeilOfSortedArray(arr, key);
    return 0;
}