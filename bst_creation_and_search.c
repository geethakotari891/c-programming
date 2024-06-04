//binary search tree creation, search

#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};
typedef struct node treeNode;
void inorder(treeNode* root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
treeNode* construct(treeNode* root , int val){
    treeNode* newnode = (treeNode *)malloc(sizeof(treeNode));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    if(root == NULL){
        return newnode;
    }
    treeNode* curr = root, *parent = NULL;
    while(curr != NULL){
        parent = curr;
        if(val < curr->data){
            curr = curr->left;
        }
        else {
            curr = curr->right;
        }
        if(val < parent->data){
            parent->left = newnode;
        }
        else {
            parent->right = newnode;
        }
    }
    return root;
}
int search(treeNode* root , int key){
    treeNode* curr = root;
    while(curr != NULL){
        if(key == curr->data){
            return 1;
        }
        if(key < curr->data){
            curr = curr->left;
        }
        else {
            curr = curr->right;
        }
    }
    return 0;
}
int main (){
    int n;
    scanf("%d ",&n);
    treeNode* root = NULL;
    for(int i=0; i<n; i++){
        int val;
        scanf("%d",&val);
        root = construct(root, val);
    }
    inorder(root);
    printf("\n");
    int key;
    scanf("%d",&key);
    if(search(root, key)){
        printf("found");
    }
    else {
        printf("not found");
    }
}



