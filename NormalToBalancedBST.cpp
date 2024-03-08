#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <map>
#include "header.h"
// #include <bits/stdc++.h>
#include <algorithm>
#include <list>
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

// Here we will convert a normal BST into a Balanced BST by arranging
// in such a way where the tree's height wiil be minimum and will also
// follow the BST rule (which is left subtrees value will always be 
// lesser than right subtrees value). 

//                1
//              /   \
//             2     3
//            / \  
//           9   6 
//          /
//        10
//       /
//      17

void ConvertToBalancedTree(Node* root1, vector< int > &stored_values){
    if(!root1){
        return;
    }
    
    ConvertToBalancedTree(root1->left, stored_values);
    stored_values.push_back(root1->val);
    ConvertToBalancedTree(root1->right, stored_values);
}

Node* InOrderPresentation(const vector < int > stored_values, int start, int end){
    if(start > end){
        return nullptr;
    }
    int mid = (start + end)/2;
    Node* root = new Node(stored_values[mid]);
    root->left = InOrderPresentation(stored_values, start, mid-1);
    root->right = InOrderPresentation(stored_values, mid+1, end);

    return root;
}

void preOrderTraversal(Node* root){

    if(!root){
        return;
    }
    
    preOrderTraversal(root->left);
    cout << root->val << " ";
    preOrderTraversal(root->right);
}

int main(){
    
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->left->left = new Node(9);
    root1->left->left->left = new Node(10);
    root1->left->left->left->left = new Node(17);
    root1->left->right = new Node(6);
    root1->right = new Node(3);
    
    vector< int > stored_values;
    ConvertToBalancedTree(root1, stored_values);
    Node* root = InOrderPresentation(stored_values, 0, stored_values.size()-1);
    preOrderTraversal(root);



    return 0;
}
