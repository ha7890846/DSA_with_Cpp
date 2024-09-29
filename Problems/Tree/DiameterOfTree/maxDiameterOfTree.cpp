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
int maxDepth(Node* partRoot){
    if(partRoot == NULL){
        return 0;
    }
    int leftDepth = maxDepth(partRoot->left);
    int rightDepth = maxDepth(partRoot->right);
    int total = max(leftDepth,rightDepth) + 1;
    return total;
}
int maxDiameter(Node* root){
    if(root == NULL){
        return 0;
    }
    int opt1 = maxDiameter(root->left);
    int opt2 = maxDiameter(root->right);
    int opt3 = maxDepth(root->left) + 1 + maxDepth(root->right);
    int ans = max(opt3,max(opt1,opt2));
    return ans;
}
int main(){
    Node* root = NULL;
    root = buildTree();
    
    return 0;
}