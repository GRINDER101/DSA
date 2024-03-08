// Print number till n in decreasing order.
// Print number till n in increasing order

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

// void decreasingOrder(int n){
//     if(n == 0){
//         return;
//     }
//     cout << n << endl;
//     decreasingOrder(n-1);
// }

void increasingOrder(int n){
    if(n == -1){
        return;
    }
    increasingOrder(n-1);
    cout << n << endl;
}

int main(){
    int n;
    cin >> n;

    // decreasingOrder(n);
    increasingOrder(n);
}