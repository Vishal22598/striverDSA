#include<iostream>
using namespace std;
void rotateLeftOrRightByK(int arr[], int size, int k, string direction){
    int temp[k];
    if(direction == "left"){
        for(int i=0; i<k; i++)
            temp[i] = arr[i];
        
        for(int i=k; i<size; i++){
            arr[i-k] = arr[i];
        }
        for(int i=size-k, j=0; i<size; i++)
            arr[i] = temp[j++];

    }
    else{
        for(int i=size-k, j=0; i<size; i++)
            temp[j++] = arr[i];
        
        for(int i=size-1-k; i>=0; i--){
            arr[i+k] = arr[i];
        }

        for(int i=0; i<k; i++)
            arr[i] = temp[i];
    }

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    int k = 2;
    string direction = "left";
    // string direction = "right";
    rotateLeftOrRightByK(arr, n, k, direction);
    for(int i: arr)
        cout << i << " ";

    return 0;
}