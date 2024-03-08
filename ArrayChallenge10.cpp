// Task is to find the two elements in an array such 
// that their sum equals to the given sum.

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

    int sum;
    cin >> sum;

    // first we need to sort the given array

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    // here we start finding the two elements

    int i = 0;
    int j = n-1;

    while(i<=j){
        if((arr[i] + arr[j]) == sum){
            cout << i << " " << j << endl;
            return 0;
        }else if ((arr[i] + arr[j]) > sum){
            j--;
        }else if((arr[i] + arr[j]) < sum){
            i++;
        }
    }
    return 0;

}