#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* buildTree(){
    int data;
    cout<<"Enter the Node value: ";
    cin>>data;
    if(data == -1){
        return NULL; 
    }
    // Create node for the data.
    Node* root = new Node(data);
    cout<<"Enter left child of "<<data<<"(-1 if no child): "<<endl;
    root->left = buildTree();
    cout<<"Enter right child of "<<data<<"(-1 if no child): "<<endl;
    root->right = buildTree();
    return root;
}
void inOrderTraversal(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return;
    }
    inOrderTraversal(temp->left);
    cout<<temp->data<<", ";
    inOrderTraversal(temp->right);
}
void preOrderTraversal(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return;
    }
    cout<<temp->data<<", ";
    preOrderTraversal(temp->left);
    preOrderTraversal(temp->right);
}
void postOrderTraversal(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return;
    }
    postOrderTraversal(temp->left);
    postOrderTraversal(temp->right);
    cout<<temp->data<<", ";
}
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    // Traverse the tree level by level.
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
    }
}
int main(){
    Node* root = NULL;
    root = buildTree();
    cout<<"\nInorder Traversal: ";
    inOrderTraversal(root);
    cout<<"\nPreOrder Traversal: ";
    preOrderTraversal(root);
    cout<<"\nPostOrderTraversal: ";
    postOrderTraversal(root);
    cout<<"\nOrder Level traversal :";
    levelOrderTraversal(root);
    return 0;
}