
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val){
        data= val;
        left = NULL;
        right = NULL;
    }
};

int main()
{
  struct Node* node = new Node(1);
  
  node->left = new Node(2);
  node->right = new Node(3);
  
  node->right->right = new Node(4);
  node->right->left = new Node(5);
  

    return 0;
}
