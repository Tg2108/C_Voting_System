#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){  
   

    char W[100],R[50],T[50],Y[50],I[50],O[50],P[50],E[50],L[50],K[50],J[50],H[50],F[50],D[50],A[50],Z[50],X[50],C[50],V[50],B[50],N[50],M[50],ID[50],USER[50],PASS[50];
    int U,Q,G,S,rl; 
    
    printf("\n\n\n\n\n\t\t\t\t---- WELLCOME TO PARLIYAMENT ELECTION VOTING SYSTEM 2025 ----\n");
    printf("\t\t\t\t...............................................................\n\n");

    printf("\t\t\t\t\t1.Registertion\n");
    printf("\t\t\t\t\t2.Loging\n\n\n");

    printf("\t\t\t\tENTER YOUR CHOISE :");
    scanf("%d",&rl);

    FILE *candi1;
    FILE *candi2;
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
            
    switch(rl){
        case 1: 

            printf("\n\t\t\t\t\t1.CANDIDATES\n");
            printf("\t\t\t\t\t2.VOTERS\n");
            printf("\t\t\t\t\t3.POLLITICAL PARTYS\n\n");
            printf("\t\t\t\tENTER YOUR CHOISE :");
            scanf("%d",&Q);

    switch(Q){
       
        
        case 1:
            
            printf("\n\t\t\t\t\t\t####ENTER YOUR DATAILS HERE ####\n\n");
        
            printf("\t\tENTER YOUR FULL NAME             :");
            scanf("%s",W);
            fprintf(candi1,"%s",W);

            printf("\n\t\tYOUR NATIONAL IDENTY CARD NUMBER :");
            scanf("%s",E);
            fprintf(candi1,"\t%s",E);            
            
            if(strlen(E)==12 ||strlen(E)==10){
                //fprintf(fp1, "NIC: %s\n", E);

            }else{
        
                    printf("\t\tits invalid number");

                     printf("\n\t\tYOUR NATIONAL IDENTY CARD NUMBER :");
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
          
            printf("\n\t\tIDENTITY CARD NUMBER :");


            printf("\t\t\t\t...........................................................\n\n");

            printf("\t\t\t\t\t\tTHANK YOU FOR YOUR COOPARION !!!\n");

            printf("\t\t\t\t...........................................................\n\n");
            

            break ;
        
        default: 
                break; 
            fclose(candi1);
            fclose(candi2);



    }

    case 2:
               // ex1();
    }

    return 0;
}