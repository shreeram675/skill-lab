
#include <stdio.h>

int top = -1;
typedef struct s{
 int data;
 struct s* link;
}stackelement;


stackelement* createStack(){
 stackelement* bot = (stackelement*) malloc(sizeof(stackelement));
 bot->link = NULL;
 return bot;
}
stackelement* head = NULL;
void push(stackelement* bot, int value){
    stackelement* temp = (stackelement*) malloc(sizeof(stackelement));
    temp->data = value;
    temp->link = head;
    head = temp;
    top++;
} 

int pop(stackelement* h){
    if(head == NULL ){
        printf("stack underflow error");
    }

      stackelement* temp = head;
      head = head->link;
      return temp->data;
}
int main(){
head = createStack();
return 0;
}
