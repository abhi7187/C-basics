#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int size;
    int top;
    int *S;
};
void create(struct Stack *st){
    printf("Enter the size of the Stack\n");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int *)malloc(st->size*sizeof(int));
}
void display(struct Stack st){
    for(int i=st.top;i>=0;i--)
    printf("%d ",st.S[i]);
    printf("\n");
}
void push(struct Stack *st,int x){
    if(st->top==st->size-1)
    printf("Overflow\n");
    else{st->top++;
        st->S[st->top]=x;
    }
}
int pop(struct Stack *st){
    int x=-1;
    if(st->top==-1)
    printf("Stack Underflow\n");
    else{
        x=st->S[st->top--];
       // free(x);
    } return x;
}
int peek(struct Stack st,int index){
int x=-1;
if(st.top-index+1<0)
printf("Invlaid index\n");
x=st.S[st.top-index+1];
return x;
}
void isFull(struct Stack st){
if(st.top==st.size-1)
printf("full\n");
}
void isEmpty(struct Stack st){
    if(!st.top==-1)
    printf("\nStack is not empty\n");
    printf("\nEmpty\n");
}
void stackTop(struct Stack st){
    if(st.top==-1)
    printf("Stack is empty\n");
    else{
        printf("%d",st.S[st.top]);
    }
}
int main(){
    struct Stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    display(st);
    printf("\n");
    // pop(&st);
    // display(st);
    // printf("%d",peek(st,3));
    // pop(&st);
    // pop(&st);
    // pop(&st);
    // display(st);
    // isEmpty(st);
push(&st,100);
isFull(st);
stackTop(st);
    return 0;
}