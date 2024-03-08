// Find the length of the longest contiguous Arithmtic SubArray 
// that means array needs to contain atleast two integers
// and the difference between consecutive integers need to be equal.

// Let's take a test case of a simple Array = [10, 7, 4, 6, 8, 10, 11]

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int length =2;
    int previousDifference = arr[0] - arr[0+1];
    int j= 2;

    while(j<n){
        if(previousDifference == arr[j-1]- arr[j]){
            length++;
        }
        else{
            previousDifference = arr[j-1] - arr[j];
            length =2;
        }
        j++;
    }

    cout << "length of the longest contiguous Arithmtic SubArray is " << length << endl;

}