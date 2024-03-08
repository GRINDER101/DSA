// Calculate n raised to power of p.

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int sum(int n, int p){

    if(p == 0){
        return 1;
    }

    int previousSum = sum(n, p-1);
    return n * previousSum;
}

int main(){
    int n, p;
    cin >> n >> p;

    // sum(n, p);

    cout << sum(n,p) << endl;
}