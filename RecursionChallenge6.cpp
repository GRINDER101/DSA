// Find the first and last occurence of a number
// in an array.

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

// bool flag = true;

// int FirstOccurence(int n, int arr[], int theNumber){
//     if(n == 0){
//         return 0;
//     }

//     FirstOccurence(n-1, arr, theNumber);
//     if(flag && theNumber == arr[n]){
//         cout << "FirstOccurence happend at index " << n << endl;
//         flag = false;
//         return 0;
//     }
//     return 0;
// }

int LastOccurence(int n, int arr[], int theNumber){
    if(n == -1){
        return 0;
    }else if(arr[n] == theNumber){
        cout << "LastOccurence happend at index " << n << endl;
        return 0;
    }

    LastOccurence(n-1, arr, theNumber);
    return 0;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int theNumber;
    cin >> theNumber;

    // FirstOccurence(n, arr, theNumber);
    LastOccurence(n, arr, theNumber);
}