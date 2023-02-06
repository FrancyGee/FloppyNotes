#include <iostream>


typedef struct treenode {
    int data;
    struct treenode *left;
    struct treenode *right;
} treenode;

treenode *createNode(int value);
void printTree(treenode *root, int level);
void printTree_rec(treenode *root, int level);


int main(int argc, char const *argv[])
{
    


    return 0;
}


treenode *createNode(int value) {
    treenode *newNode = new treenode;
    
    if(newNode != NULL) {
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
    }

    return newNode;
}


void printTabs(int tabs)
{
    for (int i = 0; i < tabs; i++) {
        std::cout << '\t';
    }
}


void printTree(treenode *root, int level) 
{
    printTree_rec(root, level);
}


void printTree_rec(treenode *root, int level) {
    
    if (root == NULL) {
        printTabs(level);
        std::cout << "---<empty>---\n";
        return;
    }

    printTabs(level);
    std::cout << root->data << '\n';
    
    std::cout << "left: \n";
    printTree(root->left, level+1);
    printTabs(level);

    std::cout << "right: \n";
    printTree(root->right, level+1);
    printTabs(level);
    
    std::cout << "end\n";
}