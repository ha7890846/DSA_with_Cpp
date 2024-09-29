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
int maxHeigth(Node* root){
    if(root == NULL){
        return 0;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    int count = 0;
    // Traverse the tree level by level.
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            count++;
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
    }
    return count;
}

int main(){
    Node* root = NULL;
    root = buildTree();
    int height = maxHeigth(root);
    cout<<"The Max length/Level of the tree is: "<<height<<endl;
    return 0;
}