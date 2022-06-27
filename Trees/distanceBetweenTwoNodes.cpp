#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* LCA(node* root, int n1,int n2){
    if(root == NULL || root->data == n1 || root->data == n2){
        return root;
    }

    node* left = LCA(root->left,n1,n2);
    node* right = LCA(root->right,n1,n2);

    if(left == NULL)
        return right;
    else if(right == NULL)
        return left;
    else
        return root;
}

int findDist(node *root,int k, int dist){
    if(root == NULL){
        return -1;
    }

    if(root->data == k)
        return dist;

    int left = findDist(root->left,k,dist+1);
    if(left != -1)
        return left;
    
    return findDist(root->right,k,dist+1);
}

int distBtwNodes(node* root,int n1, int n2){
    node* lca = LCA(root,n1,n2);

    int d1 = findDist(lca,n1,0);
    int d2 = findDist(lca,n2,0);

    return d1+d2;
}

int main(){
    node* root = new node(1);

    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4); 

     root->right->right = new node(5);

    cout<<distBtwNodes(root, 4,5);

    return 0;
}