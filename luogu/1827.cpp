#include<iostream>
#include<cstring>
using namespace std;

struct node
{
    char data;
    node *left,*right;
};

node *tree;

void build(node *t,string preOrderStr,string inOrderStr){
    // cout<<"build inOrder:"<<inOrderStr <<" pre:" << preOrderStr<<endl;
    if(preOrderStr.empty() || inOrderStr.empty())return;
    char root = preOrderStr[0];
    t = new node;
    t->data = root;
    t->left = t->right = NULL;

    int i = inOrderStr.find(root);
    string leftPreOrder = preOrderStr.substr(1,i);
    string leftInOrder = inOrderStr.substr(0,i);
    build(t->left,leftPreOrder,leftInOrder);

    string rightPreOrder = preOrderStr.substr(i+1);
    string rightInOrder = inOrderStr.substr(i+1);
    build(t->right,rightPreOrder,rightInOrder);

    cout<<root;
}

// void postOrder(node *t){
//     cout<<"postOrder:" <<endl;
//     if(t == NULL){
//         return;
//     }
//     postOrder(t->left);
//     postOrder(t->right);
//     cout<< t->data;
// }

char inOrder[32],preOrder[32];
int main(){
    scanf("%s%s",inOrder,preOrder);

    build(tree, preOrder,inOrder);
    // postOrder(tree);
    cout<<endl;

    return 0;
}