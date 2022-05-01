#include<iostream>
#include<string>
using namespace std;

struct node
{
    char data;
    node *left,*right;
    node(char d):data(d),left(NULL),right(NULL){}

    node* findNode(char d){
        if(d == data){
            return this;
        }

        node *t = NULL;
        if(left !=NULL){
            t = left->findNode(d);
            if(t != NULL)return t;
        } 

        if(right != NULL){
            t = right->findNode(d);
        }
        
        return t;
    }

    void preOrder(){
        cout<<data;
        if(left != NULL) left->preOrder();
        if(right != NULL)right->preOrder();
    }
};


int n;
node *tree;
char rootC,leftC,rightC;
int main(){
    cin >> n;
    for(int i =0;i<n ;i++){
        cin >> rootC >> leftC >> rightC;

        node *oldNode;
        if(tree ==NULL){
            tree = new node(rootC);
            oldNode = tree;
        }else {
            oldNode = tree->findNode(rootC);
        }


        if(leftC != '*'){
            oldNode->left = new node(leftC);
        }
        if(rightC != '*'){
            oldNode->right = new node(rightC);
        }
        
    }

    tree->preOrder();
    cout<<endl;
    return 0;
}