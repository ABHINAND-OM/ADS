#include<stdio.h>
int stack[100],s,x,top,i;
void pop();
void push();
void display();
void main()
{
    int choice;
    top=-1;
    printf("enter the size of the stack  :");
    scanf("%d",&s);
    printf("STACK OPERATIONS USING ARRAY");
    printf("\n\t 1.push\n\t 2.pop\n\t 3.display\n\t 4.exit\n");
    do{
        printf("\n enter the choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                {
                 push();
                 break;

                 }
            case 2 :{
                pop();
                break;
                }
            case 3:{
                display();
                break;
            }
            case 4:{
                printf("exit point");
                break;


        }
        default:{
                printf("enter a valid choice!!!");

    }

}
}
while(choice!=4);
    return 0;
}
void push()
{

    if(top>=s-1){
        printf("\n\t stack is overflow");

    }
    else{
        printf("enter the value to be pushed");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop()
{

    if(top<=-1){
            printf("stack is under flow");


    }
    else{
        printf("\n\t the popped element is %d",stack[top]);
        top--;
    }
}
void display()
     {

         if(top>=0){
            printf("the element in stack");
            for(i=top;i>=0;i--){
                printf("\n\t%d",stack[i]);
                printf("press next choice");

            }

         }
         else{
            printf("the stack is empty");
         }
     }

