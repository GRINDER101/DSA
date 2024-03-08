#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <map>
#include "header.h"
// #include <bits/stdc++.h>
#include <algorithm>
using namespace std;
class Node{

    public:
    int val;
    Node* left;
    Node* right;

    Node(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

//            First Tree
//                1
//              /   \
//             2     3
//            / \   / \
//           9   6 6  10


void VerticalOrderTraversal(Node* root1, int coloumn, map<int, vector<int> > &mp){

    if(root1 == NULL){
        return;
    }
    mp[coloumn].push_back(root1->val);
    VerticalOrderTraversal(root1->left, coloumn-1, mp);
    VerticalOrderTraversal(root1->right, coloumn+1, mp);
}


int main(){
    
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->left->left = new Node(9);
    root1->left->right = new Node(6);
    root1->right = new Node(3);
    root1->right->left = new Node(6);
    root1->right->right = new Node(10);
    
    int coloumn = 0;
    map<int, vector<int> >mp;
    VerticalOrderTraversal(root1, coloumn, mp);

    map<int, vector<int> > :: iterator it;
    
    for(it=mp.begin(); it!=mp.end(); it++){
        for(int i=0; i< it->second.size(); i++){
            cout << (it->second)[i] << " ";
        }
        cout << endl;
    }
    cout << "\n";
    return 0;
}
