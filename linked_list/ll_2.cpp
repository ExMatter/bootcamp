#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    Node *next; // store the address of another node
};

Node *head, *tail; // global var to store the address of first and last node in the linked list

Node *createNode(int value){
    // allocate memory with size of Node and cast it to Node*
    Node *newNode = (Node *)malloc(sizeof(Node));

    newNode -> value = value; // fill in the value with the given parameter
    newNode -> next = NULL; // at first, next node is set to NULL


    return newNode;
}

void readNode(Node *currentNode){
    printf("Value: %d\n", currentNode -> value);
    printf("Alamat node sekarang :%p\n", currentNode);
    printf("Alamat node setelahnya : %p\n", currentNode -> next);
}

void pushTail(int value){
    Node *temp = createNode(value); // create the new node
    if(!head){ // if there's no head a.k.a, we have an empty LL (head == NULL)
        head = tail = temp;
    }
    else{
        tail -> next = temp; // current tail will point to newly made node
        tail = temp; // the new node will be the last node in the linked list (new tail)
    }
}

void popTail(){
    if(!head){ // if there's no node in LL
        return; // do nothing
    }
    else if(head == tail){ // if there's only 1 node
        free(head);  // free allocated memory;
        head = tail = NULL; // set the address into NULL
    }
    else{ // if there's more than 1 node, we need a new tail candidate
        
    }
}
void pushHead(int value){
    Node *temp = createNode(value); // create the new node
    if(!tail){ // if there's no head a.k.a, we have an empty LL (head == NULL)
        head = tail = temp;
    }
    else{
        head -> next = temp; // current tail will point to newly made node
        head = temp; // the new node will be the last node in the linked list (new tail)
    }
}

void printLinkedList(){ // sama kayak loop biasa, ini formatnya
    for(Node *temp = head; temp != NULL; temp = temp -> next){
        readNode(temp);
        puts("");
    }
}

int main(){
    pushTail(10);
    printLinkedList();
    pushTail(15);
    printLinkedList();
    pushTail(30);
    printLinkedList();
    pushHead(11);
    printLinkedList();



    return 0;
}