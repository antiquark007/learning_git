#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the  first number: ");
    scanf("%d",&a);
    printf("Enter the  second number: ");
    scanf("%d",&b);
    printf("Enter operator  (+,-,*,/): ");
    char op;
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
        printf("%d+%d=%d",a,b,a+b);
        break;
    case '-':
        printf("%d-%d=%d",a,b,a-b);
        break;
    case '*':
        printf("%d+%d=%d",a,b,a*b);
        break;
    
    default:
        break;
    }
}
