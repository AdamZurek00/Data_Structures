#include <stdio.h>
#include <stdlib.h>

/*
This is a library containing the declaration of a stack using dynamic memory and primitives associated with stacks
This implementation uses integers as the data stored
*/

typedef struct Node{
    struct Node* next;
    int val;
} Node;

typedef struct Stack_Int{
    Node* head;
} Stack_Int;



Stack_Int* Stack_Init(); //Creates a stack and returns pointer to head of stack
int isEmpty(Stack_Int* s); //Checks if stack is empty. 0 is false and 1 is true
int push(Stack_Int* s, int value); //Pushes to stack. 0 successful 1 if failed
int pop(Stack_Int* s, int* val); //Pops an item from the stack and return 0 if success and 1 if fail