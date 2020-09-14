#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

struct Node* createNode(int data){
    struct Node *node1 = (struct Node*)malloc(sizeof(struct Node*));
    node1 -> data = data;
    node1 -> left = NULL;
    node1 -> right = NULL;

    return node1;
}

void inorder(struct Node* root){
    if(root != NULL ){
        inorder(root -> left);
        cout<<root -> data<<" ";
        inorder(root -> right);
    }
}

void preorder(struct Node* root){
    if(root != NULL ){
        cout<<root -> data<<" ";
        preorder(root -> left);
        preorder(root -> right);
    }
}

void postorder(struct Node* root){
    if(root != NULL ){
        postorder(root -> left);
        postorder(root -> right);
        cout<<root -> data<<" ";
    }
}



int main(void){
    struct Node* root = createNode(1);
    root -> left = createNode(2);
    root -> right = createNode(3);
    root -> left -> left = createNode(4);
    root ->left->left->left = createNode(5);

    cout<<" preorder ";
    preorder(root);
    cout<<"\n inorder ";
    inorder(root);
    cout<<"\n postorder ";
    postorder(root);

    return 0;

}
