#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct stack {
    int data[MAX];
    int top;
} stack;

// Function to create a stack
stack* stackcreate() {
    stack *s = (stack*)calloc(1, sizeof(stack));
    s->top = -1;  // Stack is initially empty
    return s;
}

// Function to push an element onto the stack
int push(stack* s, int d) {
    if (s->top >= MAX - 1) {  // Check for stack overflow
        printf("Stack Overflow\n");
        return -1;
    } else {
        s->top++;
        s->data[s->top] = d;  // Store the value in the next position
        return 0;
    }
}

// Function to pop an element from the stack
int pop(stack* s) {
    if (s->top == -1) {  // Check for stack underflow
        printf("Stack Underflow\n");
        return -1;
    } else {
        int poppedValue = s->data[s->top];  // Get the top element
        s->top--;  // Decrease the stack pointer
        return poppedValue;
    }
}

// Function to display the stack elements
void display(stack* s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= s->top; i++) {
            printf("%d ", s->data[i]);
        }
        printf("\n");
    }
}

// Main function to test the stack operations
int main() {
    stack *s = stackcreate();  // Create a stack

    // Push elements onto the stack
    push(s, 10);
    push(s, 20);
    push(s, 30);
    
    // Display stack elements
    display(s);

    // Pop elements from the stack
    printf("Popped: %d\n", pop(s));
    printf("Popped: %d\n", pop(s));
    
    // Display stack elements after popping
    display(s);

    return 0;
}
