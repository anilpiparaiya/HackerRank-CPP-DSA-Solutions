
/* you only have to complete the function given below.  
Node is defined as  

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



    Node * insert(Node * root, int data) {
        
        if(root==NULL){
             Node* new_node = new Node(data);
            return new_node;
        }
        else if(data > root->data){
            root->right=insert(root->right,  data);    
        }
        else if(data < root->data){
            root->left =insert(root->left,  data);
           
        }
    return root;
    }

