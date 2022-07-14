#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node *left, *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* inorderSuc(Node* root){
    Node* curr = root;
    while(curr && curr->left){
        curr = curr->left;
    }

    return curr;
}

void inorderPrint(Node* root){
    if(root == NULL)
        return;

    inorderPrint(root->left);
    cout<<root->data<<"->";
    inorderPrint(root->right);
}

Node* deleteInBSt(Node* root, int key){
    
    if(key < root->data)
        root->left = deleteInBSt(root->left, key);
    else if(key > root->data)
        root->right = deleteInBSt(root->right, key);
    else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }
        Node* temp = inorderSuc(root->right);
        root->data = temp->data;    
        root->right = deleteInBSt(root->right, temp->data);
    }
    return root;
}

int main(){

    Node* root = new Node(4);

    root->left = new Node(2);
    root->right = new Node(5);

    root->left->left = new Node(1);
    root->left->right = new Node(3);

    // root->right->left = new Node();
    root->right->right = new Node(6);

    inorderPrint(root);
    cout<<endl;
    root = deleteInBSt(root, 2);
    inorderPrint(root);

    return 0;
}