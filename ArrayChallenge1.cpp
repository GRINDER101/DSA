// max till ith position

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include "header.h"
#include <algorithm>

using namespace std;


int main(){
    int mx = -1999999;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            mx = max(mx, arr[j]);
        }
        arr[i] = mx;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}