// Check Palindrome in a Character Array.

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int main(){
    int n;
    cin >> n;

    char arr[n+1];
    cin >> arr;

    for(int i=0; i<n/2; i++){
        if(arr[i] != arr[n-1-i]){
            cout << "Not a Palindrome" << endl;
            return 0;
        }
    }
    cout << "It's a Palindrome" << endl;
    return 0;
}