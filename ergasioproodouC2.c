#include <stdio.h>

void main()
{
    int num1,num2;
    char spec;
    printf("Give the first number:");
    scanf("%d",&num1);
    while(getchar()!=10){}
    printf("Give the type of action:");
    scanf("%c",&spec);
    while(getchar()!=10){}
    printf("Give the second number:");
    scanf("%d",&num2);
    while(getchar()!=10){}
    if(spec=='+'){
        printf("%d+%d=%d\n",num1,num2,num1+num2);
    }
    else if(spec=='-'){
        printf("%d-%d=%d",num1,num2,num1-num2);
    }
    else if(spec=='/'){
        if(num2==0){
            printf("Division by 0 is not defined.\n");
        }
        else{
            printf("%d/%d=%.2f\n",num1,num2,num1*1.0/num2);
        }
    }
    else if(spec=='*'){
        printf("%d*%d=%d\n",num1,num2,num1*num2);
    }
    else{
        printf("Not a valid action\n");
    }
}
