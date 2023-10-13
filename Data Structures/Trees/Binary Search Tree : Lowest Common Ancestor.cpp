
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  
    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        
        if(root == NULL || root->data == v1 || root->data == v2 ){
            return root;
        }
        
        Node *left = lca(root->left, v1, v2);
        Node *right = lca(root->right, v1, v2);
        
        if(left == NULL) return right;
        else if(right == NULL) return left;
        
        else return root;
    }

