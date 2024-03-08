// Sum of all subarrays and individual subarrays list

#include <iostream>
#include <cstdio>
#include <string>


using namespace std;

int main(){
    int currentSum=0;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                currentSum += arr[k];
                cout<<arr[k]<< " ";
            }
            cout << endl;
            cout << "Sum is " << currentSum << endl;
            currentSum =0;
        }
    }
}