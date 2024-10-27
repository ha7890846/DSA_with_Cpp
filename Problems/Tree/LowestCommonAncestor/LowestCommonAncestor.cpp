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
Node* lowestCommonAncestor(Node* root,int p,int q){
    if(root == NULL){
        return NULL;
    }
    if(root->data == p || root->data == q){
        return root;
    }
    Node* leftAns = lowestCommonAncestor(root->left,p,q);
    Node* rightAns = lowestCommonAncestor(root->right,p,q);
    if(leftAns == NULL && rightAns == NULL){
        return NULL;
    }
    else if(leftAns == NULL && rightAns != NULL){
            return rightAns;
    }
    else if(leftAns != NULL && rightAns == NULL){
            return leftAns;
    }
    return root;
}
int main(){
    Node* root = NULL;
    root = buildTree();
    int p = 25;
    int q = 35;
    Node* ans = lowestCommonAncestor(root,p,q);
    cout<<"The Answer is :"<<ans->data; 
    return 0;
}