#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

// ==============================          Approach-1(TC: O(N*N)) Brute Force       =================================

// int height(Node* root){

//     if(root == NULL){
//         return 0;
//     }

//     int lh = height(root->left);
//     int rh = height(root->right);

//     return max(lh, rh) + 1;
// }

// bool isBalanced(Node* root){
    
//     if(root == NULL){
//         return true;
//     }

//     if(isBalanced(root->left) == false){
//         return false;
//     }

//     if(isBalanced(root->right) == false){
//         return false;
//     }

//     int lh = height(root->left);
//     int rh = height(root->right);

//     if(abs(lh - rh) <= 1){
//         return true;
//     }else{
//         return false;
//     }
// }

// ==============================          Approach-2(TC: O(N) Optimized Approach       =================================

bool isBalanced(Node* root,int *height){

    if(root == NULL){
        return true;
    }

    int lh=0, rh=0;

    if(isBalanced(root->left, &lh) == false){
        return false;
    }

    if(isBalanced(root->right, &rh) == false){
        return false;
    }

    *height = max(lh, rh) + 1;

    if(abs(lh-rh) <= 1){
        return true;
    }else{
        return false;
    }
}

int main(){

    int height = 0;

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    if(isBalanced(root, &height)){
        cout<<"Balanced Tree"<<endl;
    }else{
        cout<<"Unbalanced Tree"<<endl;
    }

    return 0;
}