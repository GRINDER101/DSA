// Task is to find the Factorial of number N.
// n! = n * n-1 * n-2 * ..... * 1
// in short, n! = n * (n-1)!

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }

    int previousfactorial = factorial(n-1);
    return n * previousfactorial;
}

int main(){
    int n;
    cin >> n;

    cout << factorial(n) << endl;
}