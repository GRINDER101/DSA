#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include "header.h"
#include <algorithm>

using namespace std;
// if n =5
// * * * * *
// * * * *
// * * *
// * *
// *

// int main(){
//     int row, col, n;

//     cin >> n;

//     row = n;
//     col = n;

// for (int i=1; i <= row; i++){
//     for(int j =1; j <= col; j++){
//         printf("*");
//     }
//     col--;
//     cout << endl;
// }
// }

// if n =5
//         *
//       * *
//     * * *
//   * * * *
// * * * * *

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(j>n-i){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         cout << endl;
//     }
// }

// n= 5
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// int main (){
//     int n;
//     cin >> n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << i << " ";
//         }
//         cout<<endl;
//     }
// }


// Floyd's Triangle
// if n= 5
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// int main(){
//     int n;
//     cin >> n;
//     int l =0;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             l+=1;
//             cout << l << " "; 
//         }
//         cout << endl;
//     }
// }


// Butterfly Pattern 

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             printf("* ");
//         }
//         int space = (2*n - 2*i);
//         for(int j=i+1; j<=space+i; j++){
//             printf("  ");
//         }
//         for(int j=space+i+1; j<=n*2; j++){
//             printf("* ");
//         }
//         cout << endl; 
//     }
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             printf("* ");
//         }
//         int space = (2*n - 2*i);
//         for(int j=i+1; j<=space+i; j++){
//             printf("  ");
//         }
//         for(int j=space+i+1; j<=n*2; j++){
//             printf("* ");
//         }
//         cout << endl; 
//     }

// }


// Inverted Pattern

// int main(){
//     int n;
//     cin>>n;
//     for(int i=n; i<=n && i>0; i--){
//         int count =0;
//         for(int j=1; j<=i; j++){
//             count+=1;
//             cout<< count << " ";
//         }
//         cout<<endl;
//     }
// }

// 0-1 Pattern

// int main(){
//     int n;
//     cin>>n;
//     int count = 0;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             if(count == 0){
//                 cout << "1" << " ";
//                 count = 1;
//             }else{
//                 cout << "0" << " ";
//                 count = 0;
//             }
//         }
//         cout << endl;
//     }
// }


// Rhombus Pattern

// int main(){
//     int n;
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         int space = n - i;
//         for(int j =1; j<= space; j++){
//             cout << " " << " ";
//         }
//         for(int j=space+1; j<= space+1+n; j++){
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }


// Number Pattern

//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

// int main(){
//     int n;
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         int space = n - i;
//         int count =0;
//         for(int j=1; j<=space; j++){
//             cout << " ";
//         }
//         for(int j=space+1; j<=space+i; j++){
//             count+=1;
//             cout << count << " ";
//         }
//         cout << endl;
//     }
// }


// Palindromic Pattern

// int main(){
//     int n;
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         int count = i;
//         int space = n - i;
//         for(int j=1; j<=space; j++){
//             cout << " " << " ";
//         }
//         for(int j=space+1; j<=space+i; j++){
//             cout << count << " ";
//             count-=1;
//         }
//         if(count== 0 && i>1){
//             count+=2;
//             for(int j=space+i+1; j<=space+i+i-1; j++){
//                 cout << count << " ";
//                 count+=1;
//             }
//         }
//         cout << endl;
//     }
// }


// Star Pattern

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         int space = n - i;
//         for(int j=1; j<=space; j++){
//             cout << " " << " ";
//         }
//         for(int j=space+1; j<=space+i; j++){
//             cout << "*" << " ";
//         }
//         for(int j=space+i+1; j<=space+i+i-1; j++){
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     for(int i=n; i>0; i--){
//         int space = n - i;
//         for(int j=1; j<=space; j++){
//             cout << " " << " ";
//         }
//         for(int j=space+1; j<=space+i; j++){
//             cout << "*" << " ";
//         }
//         for(int j=space+i+1; j<=space+i+i-1; j++){
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }


// Zig Zag Pattern

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n/3; i++){
        for(int j=1; j<=n; j++){
            if((i+j)%4==0 || (i==2 && j%4==0)){
                cout << "*" << " ";
            }else{
                cout << " " << " ";
            }
        }
        cout << endl;
    }
}

