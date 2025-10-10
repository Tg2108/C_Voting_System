#include<stdio.h>
int main()
{  
    int Q; //CHOISE YOUR TYPE

    printf("\n\n\t\t\t\t####WELLCOME TO PARLIMENT ELECTION SYSTREM 2025####\n\n");
    printf("\t\t1.CANDIDATES\n");
    printf("\t\t2.VOTERS\n");
    printf("\t\t3.POLLITICAL PARTYS\n");
    printf("\t\t4.LOGIN\n\n");
    printf("\tENTER YOUR CHOISE :");
    scanf("%d",&Q);

    switch(Q){
        case 1:
            char E,R,T,Y,I,O,P,L,K,J;
            int W,U;
            printf("\n\nENTER YOUR DATAILS HERE #######\n\n");
            printf("\tYOUR NAME :");
            scanf(" %d",&W);
            printf("\n\tYOUR NATIONAL IDENTY CARD NUMBER :");
            scanf(" %s",&E);
            printf("\n\tYOUR DATE OF BIRTH :");
            scanf(" %s",&R);
            printf("\n\tYOUR G-mail :");
            scanf(" %s",&T);
            printf("\n\tYOUR PARTY NAME :");
            scanf(" %s",&Y);
            printf("\n\tYOUR ZIP CODE :");
            scanf(" %d",&U);
            printf("\n\tYOUR DISTRICT :");
            scanf(" %s",&P);
            printf("\n\tYOUR ADDRESS :");
            scanf(" %s",&L);
            printf("\n\tENTER YOUR USERNAME :");
            scanf(" %s",&K);
            printf("ENTER YOUR PASSWORD :");
            scanf(" %s",&J);
            break;


    }

    return 0;
}