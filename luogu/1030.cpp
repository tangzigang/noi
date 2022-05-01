//     start    at 21.11
//finish coding at 21.27  use 16min 
//debug finis   at 21.51  use 24min  total:40min
//TODO score:80 Memory Limit Exceeded
#include<iostream>
using namespace std;
char inOrderStr[8],postOrderStr[8] = {0};
struct node
{
    char data;
    node *left,*right;
    node(char d):data(d),left(NULL),right(NULL){}
};

node *tree;
void build(node *t,string inStr,string postStr){
    if(inStr.empty() || postStr.empty())return;
    char root = postStr[postStr.size()-1];
    cout<<root;
    t = new node(root);

    int i = inStr.find(root);
    string leftInStr = inStr.substr(0,i);
    string leftPostStr = postStr.substr(0,leftInStr.size());
    build(t->left,leftInStr,leftPostStr);

    string rightInStr = inStr.substr(i+1);
    string rightPostStr = postStr.substr(leftPostStr.size(),rightInStr.size());
    build(t->right,rightInStr,rightPostStr);
}


int main(){
    scanf("%s%s",inOrderStr,postOrderStr);
    build(tree,inOrderStr,postOrderStr);
    cout<<endl;
    return 0;
}