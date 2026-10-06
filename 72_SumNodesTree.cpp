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


//Sum of nodes
int sumNode(Node* root){

    if(root == nullptr){
        return 0;
    }

    int leftSum = sumNode(root->left); 
    int rightSum = sumNode(root->right);
    
    return leftSum + rightSum + root->data;
}


int main() {

    vector<int> arr = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = create_tree(arr);

    cout<<"the sum of nodes in the tree arr are : "<<sumNode(root)<<endl;

    return 0;
}