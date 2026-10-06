// Tree traversal

#include<iostream>
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


//preorder

void preorder(Node* root){
    if(root == nullptr){
        return;
    }

    cout << root->data << " ";

    preorder(root->left);
    preorder(root->right);

}

//Inorder

void inorder(Node* root){
    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);

}

//Postorder
void postorder(Node* root){
    if(root == nullptr){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";

}

int main() {

    vector<int> arr = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = create_tree(arr);

    preorder(root);
    inorder(root);
    postorder(root);

    return 0;
}

