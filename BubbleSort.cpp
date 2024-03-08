#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include "header.h"
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int counter = 0;

    while(counter < n){
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<i+2; j++){
                if(arr[i] > arr[j]){
                    int temp= arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        counter++;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}