#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
      data = val;
      left = NULL;
      right = NULL;
    }
};
void postOrder(Node* root){
    stack<Node*>st1;
    stack<Node*>st2;
    Node *curr = NULL;

    st1.push(root);
    while(!st1.empty())
    {
      curr=st1.top();
      st1.pop();
      st2.push(curr);
      if(curr->left != NULL)
        st1.push(curr->left);
      if(curr->right!=NULL)
        st1.push(curr->right);
      
    }
    while(!st2.empty())
    {
      curr = st2.top();
      cout<<curr->data<<" ";
      st2.pop();
    }
}

int main()
{
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);

  postOrder(root);
 return 0;
}