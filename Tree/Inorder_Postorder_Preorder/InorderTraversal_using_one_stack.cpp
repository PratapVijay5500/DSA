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
    Node *curr = root;
    while(curr != NULL or !st.empty())
    {
      if(curr != NULL)
      {
        st.push(curr);
        curr = curr->left;
      }
      else
      {
        curr = st.top();
        st.pop();
        cout<<curr->data<<" ";
        curr = curr->right;
      }
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