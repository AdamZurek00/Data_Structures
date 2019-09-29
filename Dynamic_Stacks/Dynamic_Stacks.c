#include <stdio.h>
#include <stdlib.h>
#include "Dynamic_Stacks.h"


Stack_Int* Stack_Init(){
    Stack_Int* s = malloc(sizeof(Stack_Int));
}

int isEmpty(Stack_Int* s){
    if(s->head == NULL)
        return 1;
    else
        return 0;
}

int push(Stack_Int* s, int value){
    Node* newNode = malloc(sizeof(Node));
    if (newNode == NULL)
        return 1; //It failed
    newNode->val = value;
    newNode->next = s->head;
    s->head = newNode;
    return 0;   
}

int pop(Stack_Int* s, int* val){
    if(isEmpty(s))
        return 1;
    Node* toDelete = s->head;
    s->head = s->head->next;
    *val = toDelete->val;
    free(toDelete);
    return 0;
}

int main(){
    Stack_Int* s = Stack_Init();
    printf("%d\n", isEmpty(s));
    for(int i = 1; i <= 5; i++){
        push(s, i);
    }
    int temp;
    while(!isEmpty(s)){
        pop(s, &temp);
        printf("%d ", temp);
    }
    printf("\n");
}