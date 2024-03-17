
#ifndef ASIGGNMENT_10_SALAI_DATASTRUCTURES_LIBRARY_H
#define ASIGGNMENT_10_SALAI_DATASTRUCTURES_LIBRARY_H
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

// Function to insert a node at the end of the list
void Salai_insertAtEnd(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = head;
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// Function to traverse the list forward
void Salai_traverseForward() {
    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d )-( ", temp->data);
        temp = temp->next;
    }

}

// Function to traverse the list backward
void Salai_traverseBackward() {
    struct Node* temp = head;

    while(temp != NULL && temp->next != NULL){
        temp=temp->next;
    }

    while(temp!=NULL){
        printf("%d )-( ",temp->data);
        temp=temp->prev;
    }
}

// Function to delete a node from the list
void Salai_deleteNode(int key) {
    struct Node *temp=head,*prev=NULL;

    if(temp!=NULL && temp->data==key){
        head=temp->next;
        free(temp);
        return;
    }

    while(temp!=NULL && temp->data!=key){
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL){
        printf("Key not found\n");
        return;
    }

    prev->next=temp->next;

    if(temp->next!=NULL){
        temp->next->prev=prev;
    }

    free(temp);
}

//Stack DataStructure

struct Stack{
    int items[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack){
    stack->top = -1;
}

int isEmpty(struct Stack*stack){

    return (stack->top == -1);
}

int isFull(struct Stack*stack){

    return (stack->top == MAX_SIZE - 1);
}
void Salai_push(struct Stack*stack, int value){
    if(isFull(stack)){
        printf("Stack data is Full!!! \n");
    } else{
        stack->items[++stack->top] = value;
        printf("Value insert to place->%d: value = %d\n",stack->top,stack->items[stack->top]);
    }
}

int Salai_pop(struct Stack*stack){
    if(isEmpty(stack)){
        printf("Stackunderlow!\n");
    } else{
        return stack->items[stack->top--];
    }
}

int  Salai_peek(struct Stack*stack){
    if (isEmpty(stack)){
        printf("Stack have no data!\n");
        return -1;
    } else{

        return stack->items[stack->top];
    }
}
#endif //ASIGGNMENT_10_SALAI_DATASTRUCTURES_LIBRARY_H
