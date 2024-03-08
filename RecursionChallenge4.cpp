// Check if an array is sorted or not

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

bool IsSorted(int n, int arr[]){

    if(n == 1){
        return true;
    }

    bool value = IsSorted(n-1, arr+1);
    return (arr[0] < arr[1] && value);
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << IsSorted(n, arr) << endl;
}