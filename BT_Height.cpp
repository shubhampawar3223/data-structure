#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data= val;
        left = NULL;
        right = NULL;
    }
};

int maxHeight(Node* root){
    if(root == NULL){
        return 0;
    }
    else{
        int lheight = maxHeight(root->left);
        int rheight = maxHeight(root->right);
        
        if(rheight > lheight){
            return (rheight +1 );
        }
        else{
            return (lheight +1 );
        }
    }
}

int main(){
    Node* node = new Node(1);
    node->left = new Node(2);
    node->right = new Node(3);
    node->left->left = new Node(4);
    node->left->right = new Node(5);
    
    cout<<"Height of the Tree is:"<<maxHeight(node);
    return(0);
}   