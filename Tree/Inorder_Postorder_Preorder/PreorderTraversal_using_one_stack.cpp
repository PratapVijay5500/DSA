#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
struct Node {
    char data;
    struct Node* left;
    struct Node* right;

    Node(char val){
      data = val;
      left = NULL;
      right = NULL;
    }
};
void postOrder(Node* root){
    stack<Node*>st;
    st.push(root);
    Node *curr = root;
    while(!st.empty())
    {
     curr = st.top();
     cout<<curr->data<<" ";
     st.pop();
     if(curr->right != NULL)
      st.push(curr->right);
    if(curr->left != NULL);
      st.push(curr->left);
    }
}

int main()
{
  Node* root = new Node('A');
  root->left = new Node('D');
  root->left->left = new Node('H');
  root->left->right = new Node('L');
  root->left->right->left = new Node('P');
  root->right = new Node('Z');
  root->right->right = new Node('C');
  root->right->right->right = new Node('E');

  postOrder(root);
 return 0;
}