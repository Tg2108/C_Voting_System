#include<stdio.h>
#include<math.h>
int main()
{  
    int Q; // Q is a type variable 

    printf("\n\n\n\n\n\t\t\t\t----WELLCOME TO PARLIYAMENT ELECTION VOTING SYSTEM 2025----\n");
    printf("\t\t\t\t...........................................................\n\n");
    printf("\t\t\t\t||\t\t\t1.CANDIDATES \t\t\t||\n");
    printf("\t\t\t\t||\t\t\t2.VOTERS     \t\t\t||\n");
    printf("\t\t\t\t||\t\t\t3.POLLITICAL PARTYS\t\t||\n");
    printf("\t\t\t\t||\t\t\t4.LOGIN      \t\t\t||\n\n");
    printf("\t\t\t\t...........................................................\n\n");
    printf("\t\t\t\tENTER YOUR CHOISE :");
    scanf("%d",&Q);

    switch(Q){
        case 1:
            char W,R,T,Y,I,O,P,L,E[12],K,J;
            int U;

            printf("\n\t\t\t\t\t\t####ENTER YOUR DATAILS HERE ####\n\n");

            printf("\t\tENTER YOUR FULL NAME             :");
            scanf(" %S",&W);

            printf("\n\t\tYOUR NATIONAL IDENTY CARD NUMBER :");
            scanf(" %d",&E);
            if(E<=12){
                printf("its valid id");
            }else{
        
                    printf("\t\tits invalid number");

                     printf("\n\t\tYOUR NATIONAL IDENTY CARD NUMBER :");
                     scanf(" %d",&E);
                }
            

            printf("\n\t\tYOUR DATE OF BIRTH :");
            scanf(" %s",&R);

            printf("\n\t\tYOUR G-mail        :");
            scanf(" %s",&T);

            printf("\n\t\tYOUR PARTY NAME    :");
            scanf(" %s",&Y);

            printf("\n\t\tYOUR ZIP CODE      :");
            scanf(" %d",&U);

            printf("\n\t\tYOUR DISTRICT      :");
            scanf(" %s",&P);

            printf("\n\t\tYOUR ADDRESS       :");
            scanf(" %s",&L);

            printf("\n\t\tUSERNAME  :");
            scanf(" %S",&K);

            printf("\n\t\tPASSWORD  :");
            scanf("%s",&J);
            
            printf("\t\t\t\t...........................................................\n\n");

            printf("\t\t\t\t\t\tTHANK YOU FOR YOUR COOPARION !!!\n");

            printf("\t\t\t\t...........................................................\n\n");

            break;

        case 2:
            char H,F,D,A,Z,X,C;
            int G,S;

            printf("\n\t\t\t\t\t\t####ENTER YOUR DATAILS HERE ####\n\n");

            printf("\t\tENTER YOUR FULL NAME             :");
            scanf(" %S",&H);

            printf("\n\t\tYOUR NATIONAL IDENTY CARD NUMBER :");
            scanf(" %d",&G);

            printf("\n\t\tYOUR DATE OF BIRTH :");
            scanf(" %s",&F);

            printf("\n\t\tYOUR G-mail        :");
            scanf(" %s",&D);

            printf("\n\t\tYOUR ZIP CODE      :");
            scanf(" %d",&S);

            printf("\n\t\tYOUR DISTRICT      :");
            scanf(" %s",&A);

            printf("\n\t\tYOUR ADDRESS       :");
            scanf(" %s",&Z);
            
            printf("\n\t\tUSERNAME  :");
            scanf(" %S",&X);

            printf("\n\t\tPASSWORD  :");
            scanf("%s",&C);

            printf("\t\t\t\t...........................................................\n\n");

            printf("\t\t\t\t\t\tTHANK YOU FOR YOUR COOPARION !!!\n");

            printf("\t\t\t\t...........................................................\n\n");

            break;

        case 3:
            char V,B,N,M,ID;
        
            printf("\n\t\t\t\t\t\t#### ENTER YOUR DATAILS HERE ####\n\n");

            printf("\t\tENTER YOUR POLITICAL PARTY NAME  :");
            scanf(" %S",&V);

            printf("\n\t\t\t\t  PLEASE ENTER THIS AREA TO YOUR PARTY CHIRMEN DETAILES");
            printf("\n\t\tNAME :");
            scanf("%s",&B);
            printf("\n\t\tIDENTITY CARD NUMBER :");
            scanf("%s",&N);

            printf("\n\t\t\t\t  PLEASE ENTER THIS AREA TO YOUR PARTY SECRATERY DETAILES");
            printf("\n\t\tNAME :");
            scanf("%s",&M);
            printf("\n\t\tIDENTITY CARD NUMBER :");
            scanf("%s",&ID);

            printf("\t\t\t\t...........................................................\n\n");

            printf("\t\t\t\t\t\tTHANK YOU FOR YOUR COOPARION !!!\n");

            printf("\t\t\t\t...........................................................\n\n");
            

            break ;

        case 4:
            char USER,PASS;
            printf("\n\t\t\t\t\t\t####ENTER YOUR DATAILS HERE ####\n\n");

            printf("\n\t\tUSERNAME  :");
            scanf(" %S",&USER);

            printf("\n\t\tPASSWORD  :");
            scanf("%s",&PASS);

            printf("\t\t\t\t...........................................................\n\n");

            printf("\t\t\t\t\t\tTHANK YOU FOR YOUR COOPARION !!!\n");

            printf("\t\t\t\t...........................................................\n\n");

            break;

    }




    return 0;
}
