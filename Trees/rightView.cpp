#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void rightView(Node* root){
    if(root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();

        for(int i=0;i<size;i++){
            Node* curr = q.front();
            q.pop();

            // ==========================        For Right View                  ====================

            if(i == size-1){
                cout<<curr->data<<" ";
            }

            // ==========================        For Left View                  ====================

            // if(i == 0)
            //     cout<<curr->data<<" ";

            if(curr->left)
                q.push(curr->left);
            
            if(curr->right)
                q.push(curr->right);
        }
    }
}

int main(){

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    rightView(root);

    return 0;
}