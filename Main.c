
#include "Salai_DataStructures_Library.h"




int main() {
    //****** Testing linklist from Salai_DataStructure library ******
    printf("Testing the Linklist Data\n");
    Salai_insertAtEnd(1);
    Salai_insertAtEnd(2);
    Salai_insertAtEnd(3);
    Salai_insertAtEnd(4);
    Salai_insertAtEnd(5);
    Salai_insertAtEnd(6);

    printf("Show the Doubly Linked List in forward: ");
    Salai_traverseForward();
    printf("\n");

    printf("Show the Doubly Linked List in reverse: ");
    Salai_traverseBackward();
    printf("\n");

    Salai_deleteNode(3);

    printf("Show the Doubly Linked List after deleting node with key 3: : ");
    Salai_traverseForward();
    printf("\n");


    //testing stack data from Salai_DataStructure_Library
    printf("Testing the Stack data \n");
    struct Stack stack;
    initialize(&stack);
    Salai_push(&stack,10);
    Salai_push(&stack,20);
    Salai_push(&stack,30);
    Salai_push(&stack,40);
    Salai_push(&stack,50);
    printf("Peek the  data : %d\n",Salai_peek(&stack));

    printf("\n Data : %d\n", Salai_pop(&stack));


    Salai_push(&stack,60);
    Salai_push(&stack,70);
    Salai_push(&stack,80);
    Salai_push(&stack,90);
    Salai_push(&stack,100);
    Salai_push(&stack,110);

    return 0;
}