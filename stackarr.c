#include<stdio.h>
#define MAX 10

typedef struct stack{
   int data[MAX];
   int top;
}stack;

stack* stackcreate(){
    stack *stack = calloc(1, sizeof(stack));
    stack->top = -1;
    return stack;
}

int push(stack* s,int d){
    if(s->top = MAX -1){
        printf("Stack Overflow\n");
        return -1;
    }
    else{
        s->top++;
        s->data[s->top]= d;
    }
}
int pop(stack* s){
    if(s->top = -1){
        printf("Stack Underflow\n");
        return -1;
    }
    else{
        s->top--;
    }
    return s->data[s->top+1];
}
