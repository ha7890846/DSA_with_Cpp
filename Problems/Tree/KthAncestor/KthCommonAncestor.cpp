#include<iostream>
#include<vector>
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

// Helper function to find the path from root to a given node
bool findPath(Node* root, int target, vector<Node*>& path) {
    if (root == NULL) return false;

    path.push_back(root); // Add current node to the path

    // If the target node is found
    if (root->data == target) return true;

    // Recursively search in left and right subtrees
    if ((root->left && findPath(root->left, target, path)) ||
        (root->right && findPath(root->right, target, path))) {
        return true;
    }

    path.pop_back(); // Remove the node if target not found in this path
    return false;
}

// Main function to find all common ancestors of nodes p and q
Node* findCommonAncestors(Node* root, vector<Node*>& arr, int p, int q) {
    // Paths from root to p and root to q
    vector<Node*> pathP, pathQ;

    // Find paths to p and q
    bool foundP = findPath(root, p, pathP);
    bool foundQ = findPath(root, q, pathQ);

    // If either p or q is not found in the tree, no common ancestors exist
    if (!foundP || !foundQ) return NULL;

    // Compare the paths and add common nodes to arr
    int i = 0;
    while (i < pathP.size() && i < pathQ.size() && pathP[i] == pathQ[i]) {
        arr.push_back(pathP[i]); // Store each common ancestor
        i++;
    }

    // Return the last common ancestor (LCA)
    return (i > 0) ? arr.back() : NULL;
}


int main(){
    int p,q;
    vector<Node*>arr;
    Node* root = buildTree();
    cout<<"Enter the value of p and q: ";
    cin>>p>>q;
    findCommonAncestors(root,arr,p,q);
    for(auto v:arr){
        cout<<v->data<<", ";
    }
    return 0;
}