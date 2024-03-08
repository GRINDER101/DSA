// Maximum Circular Subarray Sum in a given array.

// Maximum Circular Subarray Sum can be found by using the formulae given 
// below :- Max Subarray Sum = total sum of the array - sum of non-contributing elements
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int totalSum = 0;
    int currentSum = 0;
    int mx = -199999;
    for(int i=0; i<n; i++){
        totalSum+= arr[i];
        arr[i] = - arr[i];
        currentSum+= arr[i];
        if(currentSum < 0){
            currentSum = 0;
        }
        mx = max(mx, currentSum);
        
    }
    cout << "Maximum Circular Subarray Sum is " << totalSum + mx << endl;
    return 0;
}