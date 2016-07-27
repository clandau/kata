/* tree traversal preorder, postorder and inorder
hackerrank challenges--functions only 
https://www.hackerrank.com/challenges/tree-preorder-traversal
https://www.hackerrank.com/challenges/tree-postorder-traversal
https://www.hackerrank.com/challenges/tree-inorder-traversal*/

struct node
{
    int data;
    node* left;
    node* right;
};

void preOrder(node *root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node *root) {
    if (root == nullptr) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void inOrder(node *root) {
    if (root == nullptr) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}