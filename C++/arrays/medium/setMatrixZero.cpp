#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
void print(vector<vector<int>> arr, int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void markRow(vector<vector<int>> &arr, int i, int m){
    for(int j=0; j<m; j++){
        if(arr[i][j] != 0)
            arr[i][j] = -1;
    }
}

void markColumn(vector<vector<int>> &arr, int j, int n){
    for(int i=0; i<n; i++){
        if(arr[i][j] != 0)
            arr[i][j] = -1;
    }
}
void brute(vector<vector<int>> &arr, int n, int m){
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 0){
                markRow(arr, i, m);
                markColumn(arr, j, n);
            }
        }
    }
    cout << endl << "in brute(): " << endl;
    // print(arr, n, m);
    // cout << endl;
   
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == -1){
                arr[i][j] = 0;
            }
        }
    }
    
}

void better(vector<vector<int>> &arr, int n, int m){
    int row[n]={0}, col[m] = {0};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i] == 1 || col[j] == 1)
                arr[i][j] = 0;
        }
    }
}

void optimized(vector<vector<int>> &arr, int n, int m){
    //int col[m] = matrix[0][...]
    //int row[n] = matrix[...][0]
    int col0 = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 0){
                arr[i][0] = 0;
                
                if(j!=0)
                    arr[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(arr[i][j] != 0){
                if(arr[i][0] == 0 || arr[0][j] == 0)
                    arr[i][j] = 0;
            }
        }
    }

    if(arr[0][0] == 0){
        for(int j=0; j<m; j++)
            arr[0][j] = 0;
    }
    if(col0 == 0)
        for(int i=0; i<n; i++)
            arr[i][0] = 0;
}

int main(){
    int n, m;
    
    // vector<vector<int>> arr = {{1,1,1}, {1,0,1}, {1,1,1}};
    vector<vector<int>> arr = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    n=arr.size();
    m=arr[0].size();
    print(arr, n, m);
    // brute(arr,n,m);
    // print(arr, n, m);

    // cout << endl;
    // better(arr, n, m);
    // print(arr, n, m);

    cout << endl;
    optimized(arr, n, m);
    print(arr, n, m);
    return 0;
}