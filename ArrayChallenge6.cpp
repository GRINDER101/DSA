// Task is to find a continuous subarray which sum is given 
// number X. 

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
    
    int total =0;
    for(int i=0; i<n; i++){
        total+= arr[i];
        for(int j=i+1; j<n; j++){
            total+= arr[j];
            if(total > sum){
                total=0;
                break;
            }else if(total == sum){
                cout << i+1 << " "<< j+1 << endl;
                return 0;
            }
        }
        total =0;
    }
}