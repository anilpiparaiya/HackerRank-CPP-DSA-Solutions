#include <bits/stdc++.h>

using namespace std;
	
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
         if (root == NULL) return;
  
    
    
    queue<Node *> q;
    Node *curr;

    q.push(root);
    q.push(NULL);
  
    while (q.size() > 1)
    {
        curr = q.front();
        q.pop();
          
        if (curr == NULL)
        {
           q.push(NULL);
           cout << "";
        }
          
        else {
            
            if(curr->left)
            q.push(curr->left);
              
        
            // current node.
            if(curr->right)
            q.push(curr->right);
              
            cout << curr->data<<" ";
        }
    }
        
        


    }

};
