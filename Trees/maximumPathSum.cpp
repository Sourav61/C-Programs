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

int maxPathSumUtil(Node* root, int &ans){
    if(root == NULL)
        return 0;

    int left = maxPathSumUtil(root->left, ans);
    int right = maxPathSumUtil(root->right, ans);

    int nodemax = max(max(root->data, root->data + left + right),
                    max(root->data + left, root->data + right));

    ans = max(ans, nodemax);

    int singlePathSum = max(root->data, max(root->data + left, root->data + right));
    return singlePathSum;
}

int maxPathSum(Node* root){
    int ans = INT_MIN;
    maxPathSumUtil(root,ans);

    return ans;
}

int main(){

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    // root->left->right = new Node();

    // root->right->left = new Node();
    root->right->right = new Node(5);

    cout<<maxPathSum(root);

    return 0;
}