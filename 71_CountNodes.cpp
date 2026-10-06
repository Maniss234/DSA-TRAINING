//Count the nodes of a tree
#include<iostream>
#include<vector>
using namespace std;

class Node {
public:

int data;
Node* left;
Node* right;

    Node(int val){
        data = val;
        left = right = nullptr;
    }
 
};

static int idx = -1;
Node* create_tree(vector<int>& preorder){

    idx++;

    if(preorder[idx] == -1){
        return nullptr;
    }

    Node* root = new Node(preorder[idx]);
    root->left = create_tree(preorder);
    root->right = create_tree(preorder);

    return root;;

}


int count(Node* root){

    if(root == nullptr){
        return 0;
    }

    int leftCount = count(root->left); 
    int rightCount = count(root->right); 

    return (leftCount + rightCount) + 1;
}

int main() {

    vector<int> arr = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = create_tree(arr);

    cout<<"the no. of nodes in the tree arr are : "<<count(root)<<endl;

    return 0;
}