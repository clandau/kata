/* multiple functions for tree operations
hackerrank challenges--functions only 
https://www.hackerrank.com/challenges/tree-preorder-traversal
https://www.hackerrank.com/challenges/tree-postorder-traversal
https://www.hackerrank.com/challenges/tree-inorder-traversal
https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree*/

struct node
{
    int data;
    node* left;
    node* right;
};

//traverse tree and print in preorder
void preOrder(node *root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

//traverse tree and print in postorder
void postOrder(node *root) {
    if (root == nullptr) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

//traverse tree and print inorder
void inOrder(node *root) {
    if (root == nullptr) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

//find max height of tree branches
int height(node * root)
{
    if (root==nullptr) return -1;
    else {
        int lHeight = height(root->left);
        int rHeight = height(root->right);
        if (lHeight > rHeight) return (lHeight+1);
        else return (rHeight+1);
    }
}