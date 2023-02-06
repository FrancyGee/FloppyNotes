#include<iostream>


struct node {
    int elem;
    node* next; 
};
typedef struct node node_t;
typedef struct node* LinkedList;


void init_head(LinkedList& l, int value);
node_t *create_node(int value);
bool isEmpty(const LinkedList l);
void printList(const LinkedList l);



int main(int argc, char const *argv[])
{

    LinkedList l;
    init_head(l, 10);



    //printList(l);


    return 0;
}


void init_head(LinkedList& l, int value)
{
    if(isEmpty(l)) {
        l = create_node(value);
    }

    std::cout << "The list is already initialized\n";
}


node_t *create_node(int value) 
{
    node_t *new_node = new node;
    new_node->elem = value;
    new_node->next = NULL;

    return new_node;
}


bool isEmpty(const LinkedList l)
{
    return l == NULL;
}



void printList(const LinkedList l)
{
    node_t  *tmp = l;

    while(tmp != NULL) {
        std::cout << tmp->elem << " - ";
        tmp = tmp->next;
    }
    
    std::cout << '\n';
}

