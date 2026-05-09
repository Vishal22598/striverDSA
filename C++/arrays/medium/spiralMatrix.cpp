#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<vector<int>> arr, int n, int m){
    cout << "n: " << n << ", m: " << m << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

vector<int> optimized(vector<vector<int>> &arr, int n){
   int left = 0, right = arr[0].size()-1;
   int top = 0, bottom = arr.size()-1;
   vector<int> ans;

   while(left <= right && top <= bottom){
//     //left -> right
        for(int i=left; i<=right; i++){
            ans.push_back(arr[top][i]);
        }
        top++;
    
    
//     //top -> bottom
        for(int i=top; i<=bottom; i++){
            ans.push_back(arr[i][right]);
        }
        right--;

        if(top <= bottom){
            //right -> left
            for(int i=right; i>=left; i--){
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if(left <= right){
            //bottom -> top
            for(int i=bottom; i>=top; i--){
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }
    return ans;
}
int main(){
    int n, m;
    cout << "start" << endl;
    // // vector<vector<int>> arr = {{1,1,1}, {1,0,1}, {1,1,1}};
    vector<vector<int>> arr = { { 1, 2, 3, 4 },{12,13,14,5},{11,16,15,6},{10,9,8,7} };
    //  vector<vector<int>> arr = { { 1}, {2}, {3}};
    m=arr.size();
    n=arr[0].size();
    print(arr, m, n);
    cout << endl;

    
    vector<int> ans = optimized(arr, n);
    for(int i:ans)
        cout << i << endl;
    return 0;
}