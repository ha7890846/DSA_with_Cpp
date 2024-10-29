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
int sumOfTree(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftAns = sumOfTree(root->left);
    int rightAns = sumOfTree(root->right);
    int total = leftAns + rightAns + root->data;
    return total;
}
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
int main(){
    Node* root = NULL;
    root = buildTree();
    cout<<"The Answer is: "<<sumOfTree(root);
    return 0;
}