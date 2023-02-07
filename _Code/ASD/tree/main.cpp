#include <iostream>


typedef struct treenode {
    int data;
    struct treenode *left;
    struct treenode *right;
} treenode;


treenode *createNode(int value);
bool insertNumber(treenode **rootptr, int value);
bool findNumber(treenode *root, int value);
void printTree(treenode *root, int level);
void printTree_rec(treenode *root, int level);


int main(int argc, char const *argv[])
{
    treenode *root = NULL;

    insertNumber(&root, 15);
    insertNumber(&root, 11);
    insertNumber(&root, 24);
    insertNumber(&root, 5);
    insertNumber(&root, 19);
    insertNumber(&root, 16);

    printTree(root, 0);


    bool found = findNumber(root, 16);
    if (found) {
        std::cout << "Found\n";
    } else {
        std::cout << "Not found\n";
    }


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


bool insertNumber(treenode **rootptr, int value) 
{
    treenode *root = *rootptr;

    if (root == NULL) {
        (*rootptr) = createNode(value);
        return true;
    }

    // Non posso inserire due elementi uguali nello stesso albero
    if (value == root->data) {
        return false;
    }

    if(value < root->data) {
        return insertNumber(&root->left, value);
    } else {
        return insertNumber(&root->right, value);
    }
}


bool findNumber(treenode *root, int value) 
{
    if (root == NULL) {
        return false;
    }

    if (value == root->data) {
        return true;
    }

    if (value < root->data) {
        return findNumber(root->left, value);
    } else {
        return findNumber(root->right, value);
    }
}


treenode *minValueNode(treenode *root)
{
    treenode *current = root;

    while (current->left != NULL) {
        current = current->left;
    }

    return current;
}


treenode *deleteNode(treenode *root, int value)
{
    if (root == NULL) {
        return NULL;
    }
    
    // Foglia
    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    
    } else {        
        
        // Solo un figlio
        if (root->left == NULL) {
            treenode *tmp = root->right;
            delete root;
            return tmp;
        
        // Due figli
        } else if (root->right == NULL) {
            treenode *tmp = root->left;
            delete root;
            return tmp;
        }

        treenode *tmp = minValueNode(root->right);
        root->data = tmp->data;
        root->right = deleteNode(root->right, tmp->data);
    }
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
        std::cout << "value: " << " ---<empty>---\n";
        return;
    }

    printTabs(level);
    std::cout << "value: " << root->data << '\n';
    
    std::cout << "left: \n";
    printTree(root->left, level+1);
    printTabs(level);

    std::cout << "right: \n";
    printTree(root->right, level+1);
    printTabs(level);
    
    std::cout << "end\n";
}