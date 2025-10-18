#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){  
   
    char W[100],R[10],T[100],I[25],O[100],E[12],L[50],K[12],J[8],H[100],F[10],D[100];
    char A[25],Z[100],X[12],C[8],V[100],B[50],N[12],M[50],G[12],Y[100],P[12];
    int U,Q,S,rl; 
    
    printf("\n\n\n\n\n\t\t\t\t---- WELLCOME TO PARLIAMENT ELECTION VOTING SYSTEM 2025 ----\n");
    printf("\t\t\t\t...............................................................\n\n");

    printf("\t\t\t\t||\t\t\t1.Registration\t\t\t     ||\n");
    printf("\t\t\t\t||\t\t\t2.Loging\t\t\t     ||\n\n");

    printf("\t\t\t\t...............................................................\n\n");

    printf("\t\t\t\tPLEASE ENTER YOUR CHOISE :");
    scanf("%d",&rl);

    
    FILE *candi1;
    FILE *candi2;
    FILE *vot1;
    FILE *vot2;
    FILE *party1;
    FILE *party2;

    candi1=fopen("C_Details.txt","a");
        if (candi1== NULL) {
            printf("Error opening file for writing!\n");
            return 1;
        }

    candi2=fopen("C_hide.txt","a");
        if (candi2== NULL) {
            printf("Error opening file for writing!\n");
            return 1;
        }

    vot1=fopen("V_Details.txt","a");
        if (vot1== NULL) {
            printf("Error opening file for writing!\n");
            return 1;
        }

    vot2=fopen("V_hide.txt","a");
        if (vot2== NULL) {
            printf("Error opening file for writing!\n");
            return 1;
        }
    party1=fopen("P_Details.txt","a");
        if (party1== NULL) {
            printf("Error opening file for writing!\n");
            return 1;
        }

    party2=fopen("P_hide.txt","a");
        if (party2== NULL) {
            printf("Error opening file for writing!\n");
            return 1;
        }      
    switch(rl){
        case 1: 
            system("cls");//close the up interface

            printf("\n\n\n\n\t\t\t\tWELLCOME TO REGISTRATION OF PARLIAMENT ELECTION VOTING SYSTEM");
            printf("\n\t\t\t\t...............................................................\n\n");

            printf("\n\t\t\t\t\t\t\t1.CANDIDATES\n");
            printf("\t\t\t\t\t\t\t2.VOTERS\n");
            printf("\t\t\t\t\t\t\t3.POLLITICAL PARTIES\n\n");

            printf("\t\t\t\t...............................................................\n\n");

            printf("\t\t\t\tENTER YOUR CHOISE :");
            scanf("%d",&Q);

        switch(Q){
        
            case 1:
                system("cls");

                printf("\t\t\t\t...............................................................\n\n");
                printf("\n\t\t\t\t\t#### ENTER YOUR CANDIDATES DATAILS HERE ####\n\n");
                printf("\t\t\t\t...............................................................\n\n");

                printf("\t\tENTER YOUR FULL NAME             :");
                scanf("%s",W);
                fprintf(candi1,"\n%s",W);

                printf("\n\t\tYOUR NATIONAL IDENTY CARD NUMBER :");
                scanf("%s",E);
                fprintf(candi1,"\t%s",E);
                fprintf(candi2,"\n%s",E);            
                
                if(strlen(E)!=12 ||strlen(E)!=9){
                    printf("\t\tIt is an invalid number. Please enter a 9/12 digit number.NOT need to enter 'x' or 'v'");
                        printf("\n\t\tENTER YOUR TRUE NATIONAL IDENTY CARD NUMBER :");
                        scanf(" %s",&E);
                    }
            
                printf("\n\t\tYOUR DATE OF BIRTH :");
                scanf("%s",R);
                fprintf(candi1,"\t%s",R);

                printf("\n\t\tYOUR G-mail        :");
                scanf("%s",T);
                fprintf(candi1,"\t%s",T);

                printf("\n\t\tYOUR PARTY NAME    :");
                scanf("%s",Y);
                fprintf(candi1,"\t%s",Y);

                printf("\n\t\tYOUR ZIP CODE      :");
                scanf("%d",&U);
                fprintf(candi1,"\t%d",U);

                printf("\n\t\tYOUR DISTRICT      :");
                scanf("%s",I);
                fprintf(candi1,"\t%s",I);

                printf("\n\t\tYOUR ADDRESS       :");
                scanf("%s",O);
                fprintf(candi1,"\t%s",O);
                
                printf("\n\t\tUSERNAME  :");
                scanf("%s",K);
                fprintf(candi2,"\t%s",K);

                printf("\n\t\t\t* include 6 Characters and Don't include a simbls.");
                printf("\n\t\tPASSWORD  :");
                scanf("%s",J);            
                fprintf(candi2,"\t%s",J);

                printf("\t\t\t\t...........................................................\n\n");

                printf("\t\t\t\t\t\tTHANK YOU FOR YOUR COOPARION !!!\n");

                printf("\t\t\t\t...........................................................\n\n");
            
                break;

            case 2:
                system("cls");

                printf("\n\t\t\t\t\t\t####ENTER YOUR DATAILS HERE ####\n\n");

                printf("\t\tENTER YOUR FULL NAME             :");
                scanf("%S",H);
                fprintf(vot1,"\n%s",H);

                printf("\n\t\tYOUR NATIONAL IDENTY CARD NUMBER :");
                scanf("%s",G);
                fprintf(vot1,"\t%s",G);
                fprintf(vot2,"\n%s",G);

                printf("\n\t\tYOUR DATE OF BIRTH :");
                scanf("%s",F);
                fprintf(vot1,"\t%s",F);

                printf("\n\t\tYOUR G-mail        :");
                scanf("%s",D);
                fprintf(vot1,"\t%s",D);

                printf("\n\t\tYOUR ZIP CODE      :");
                scanf("%d",&S);
                fprintf(vot1,"\t%d",S);

                printf("\n\t\tYOUR DISTRICT      :");
                scanf("%s",A);
                fprintf(vot1,"\t%s",A);

                printf("\n\t\tYOUR ADDRESS       :");
                scanf("%s",Z);
                fprintf(vot1,"\t%s",Z);
                
                printf("\n\t\tUSERNAME  :");
                scanf("%S",X);
                fprintf(vot2,"\t%s",X);

                printf("\n\t\tPASSWORD  :");
                scanf("%s",C);
                fprintf(vot2,"\t%s",C);

                printf("\t\t\t\t...........................................................\n\n");

                printf("\t\t\t\t\t\tTHANK YOU FOR YOUR COOPARION !!!\n");

                printf("\t\t\t\t...........................................................\n\n");

                break;

            case 3: 
                system("cls");
                
                printf("\n\t\t\t\t\t\t#### ENTER YOUR DATAILS HERE ####\n\n");

                printf("\t\tENTER YOUR POLITICAL PARTY NAME  :");
                scanf(" %S",&V);
                fprintf(party1,"\t%s",V);
                fprintf(party2,"\t%s",V);

                printf("\n\t\t\t\t  PLEASE ENTER THIS AREA TO YOUR PARTY CHIRMEN DETAILES");
                printf("\n\t\tNAME :");
                scanf("%s",&B);
                fprintf(party1,"\t%s",B);
                printf("\n\t\tIDENTITY CARD NUMBER :");
                scanf("%s",&N);
                fprintf(party1,"\t%s",N);

                printf("\n\t\t\t\t  PLEASE ENTER THIS AREA TO YOUR PARTY SECRATERY DETAILES");
                printf("\n\t\tNAME :");
                scanf("%s",M);
                fprintf(party2,"\t%s",M);
                printf("\n\t\tIDENTITY CARD NUMBER :");
                scanf("%s",P);
                fprintf(party2,"\t%s",P);

                printf("\t\t\t\t...........................................................\n\n");

                printf("\t\t\t\t\t\tTHANK YOU FOR YOUR COOPARION !!!\n");

                printf("\t\t\t\t...........................................................\n\n");
                

                break ;
            
            default: 
                break;

            fclose(candi1);
            fclose(candi2);
            fclose(vot1);
            fclose(vot2);
            fclose(party1);
            fclose(party2);

        }

    case 2:
        break;
               
    }

return 0;
}