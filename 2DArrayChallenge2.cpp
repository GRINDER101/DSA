// Given a Square matrix, task is to find the transpose of it.

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    int n, m;
    cin >> n;

    m = n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int row_start = 0, row_end = m-1, column_start = 0, column_end = n-1;

    while(row_start <= row_end && column_start <= column_end){
        for(int row=0; row <= row_end; row++){
            if(row == 0 && column_start == 0){
                cout << arr[row][column_start] << " ";
            }else{
                cout << arr[row][column_start] << " ";
            }
        }
        column_start++;
        cout << endl;
    } 
}