#include <stdio.h>
void main()
{
    int eispl;
    float cash;
    float change=0.0;
    int tickets;
    int am;
    float price=1.20;
    int i;
    printf("Insert ticket amount:");
    scanf("%d",&eispl);
    while(getchar()!='\n'){}
    while(eispl!=0){
        printf("Insert ticket amount to be purchased:");
        scanf("%d",&tickets);
        while(getchar()!='\n'){}
        if(eispl-tickets>=0){
            price=tickets*price;
            printf("%d tickets cost %.2f\n",tickets,price);
            while(1){
                printf("Remaining amount is %.2f\n",price);
                for(i=0;i<4;i++){
                    if(i==0){
                        printf("How many 20 cents did you give:");
                        scanf("%d",&am);
                        while(getchar()!='\n'){}
                        change+=am*0.2;
                    }
                    else if(i==1){
                        printf("How many 50 cents did you give:");
                        scanf("%d",&am);
                        while(getchar()!='\n'){}
                        change+=am*0.5;
                    }
                    else if(i==2){
                        printf("How many 1 euros did you give:");
                        scanf("%d",&am);
                        while(getchar()!='\n'){}
                        change+=am*1.0;
                    }
                    else{
                        printf("How many 2 euros did you give:");
                        scanf("%d",&am);
                        while(getchar()!='\n'){}
                        change+=am*2.0;
                    }
                }
                price-=change;
                if (price<0.01){
                    if(price<-0.01){
                    change=price*-1;
                    }
                    break;
                }
                else{
                    printf("Not enough cash inserted. %.2f left.",price);
                }
            }
            printf("Purchase for %d tickets complete. Your change is %.2f\n",tickets,change);
            eispl-=tickets;
        }
        else{
            printf("Not enough tickets available for purchase.\nPurchasable tickets are %d\n",eispl);
        }
        price=1.20;
    }
    printf("Out of tickets.");
}