#include<iostream>
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
Node* sumTree(Node* root){
    if(root == NULL){
        return NULL;
    }
    Node* leftAns = sumTree(root->left);
    Node* rightAns = sumTree(root->right);
    int ans = leftAns->data + rightAns->data + root->data;
    root->data = ans;
    return root;
}

int main(){
    Node* root = buildTree();
    cout<<"Sum of all nodes in the tree is: "<<root->data<<endl;
    

    return 0;
}