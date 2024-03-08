// The task is to find the smallest positive missing number from
// the array.

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    int j;
    for(int i=1; i<n; i++){
        for(j=i; j<n; j++){
            if(i == arr[j]){
                break;
            }
        }
        if(i != arr[j]){
            cout << "the missing smallest integer is " << i << endl;
            return 0;
        }
    }
}