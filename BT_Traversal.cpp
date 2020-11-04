
#include <iostream>

using namespace std;

//struct Node consists of dsts,pointer to left and right child.
struct Node{
  int data;
  struct Node *left, *right;
  
  Node(int val){
      data = val;
      left = right= NULL;
  }
};

//given a binary tree, print it in inorder.
void inorder(struct Node* root){
    if(root == NULL)
       return;
       
    cout<< root->data;
    inorder(root->left);
    inorder(root->right);
}

//given a binary tree, print it in preorder. 
void preorder(struct Node* root){
    if(root == NULL)
       return;
       
    preorder(root->left);
    cout<<root->data;
    preorder(root->right);
}


/* Given a binary tree, print its nodes according to the 
"bottom-up" postorder traversal. */
void postorder(struct Node* root){
    if(root == NULL)
       return;
       
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

//main function to test above functions.
int main()
{
    
    struct Node* node = new Node(1);
    node->left =  new Node(2);
    node->right = new Node(3);
    node->left->right= new Node(5);
    node->left->left= new Node(4);
    node->right->right = new Node(6);
    node->right->left = new Node(7);
    
    cout<<"InOrder Traversal";
    inorder(node);
    
    cout<<endl<<"PreOrder Traversal";
    preorder(node);
    
    cout<<endl<<"PostOrder Traversal";
    postorder(node);
    return 0;
}
