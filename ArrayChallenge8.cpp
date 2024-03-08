// Task is to find the subarray in an array which sum is maximum.

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

    int sum = 0;
    int mx = 0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                sum+= arr[k];
            }
            mx = max(mx, sum);
            sum = 0;
        }
    }
    cout << "the maximum sum of a subarray in an array is " << mx << endl;
}