#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){  
    system("cls");
    char W[100],R[10],T[100],O[100],E[12],L[50],K[12],J[8],H[100],F[10],D[100];
    char A[25],Z[100],X[12],C[8],V[100],B[50],N[12],M[50],G[12],Y[100],P[12],PA[12];
    int U,Q,S,rl,I; 
    int confirm,back;//for confirmations and previous page.
    
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t---- WELLCOME TO PARLIAMENT ELECTION VOTING SYSTEM 2025 ----\n");
    printf("\t\t\t\t\t...............................................................\n\n");

    printf("\t\t\t\t\t||\t\t\t1.Registration\t\t\t     ||\n");
    printf("\t\t\t\t\t||\t\t\t2.Loging\t\t\t     ||\n\n");

    printf("\t\t\t\t\t...............................................................\n\n");

    printf("\t\t\t\t\tPLEASE ENTER YOUR CHOISE HERE:");
    scanf("%d",&rl);

    
    FILE *candi1;
    FILE *candi2;
    FILE *vot1;
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

            printf("\n\n\n\n\t\t\t\t\tWELLCOME TO REGISTRATION OF PARLIAMENT ELECTION VOTING SYSTEM");
            printf("\n\t\t\t\t\t...............................................................\n\n");

            printf("\n\t\t\t\t\t\t\t\t1.CANDIDATES\n");
            printf("\t\t\t\t\t\t\t\t2.VOTERS\n");
            printf("\t\t\t\t\t\t\t\t3.POLLITICAL PARTIES\n\n");

            printf("\t\t\t\t\t...............................................................\n\n");

            printf("\t\t\t\t\tENTER YOUR CHOISE HERE :");
            scanf("%d",&Q);

            fseek(candi1, 0, SEEK_END);
            long size = ftell(candi1);
            if (size == 0) {
                fprintf(candi1, "NAME,ID_NUM,DOB,G-mail,PARTY_NAME,ZIP_CODE,DISTRICT,ADDRESS9977\[poi/.\n");
            }

            fseek(candi2, 0, SEEK_END);
            long size1 = ftell(candi2);
            if (size1 == 0) {
                fprintf(candi2, "ID_NUM,USER_NAME,PASSWORD\n");
            }

            fseek(vot1, 0, SEEK_END);
            long size2 = ftell(vot1);
            if (size2 == 0) {
                fprintf(vot1, "NAME,ID_NUM,DOB,G-mail,PARTY_NAME,ZIP_CODE,DISTRICT,ADDRESS\n");
            }

            fseek(party1, 0, SEEK_END);
            long size4 = ftell(party1);
            if (size4 == 0) {
                fprintf(party1, "PARTY_NAME,Chirmen_NAME,Chirmen_ID,Secratery_NAME,Secratery_ID\n");
            }


        switch(Q){
                 
            case 1:
                do{
                    system("cls");
                    back=0;
                    confirm=0;

                printf("\t\t\t\t...............................................................\n\n");
                printf("\n\t\t\t\t||\t#### ENTER YOUR CANDIDATES DATAILS HERE ####         ||\n\n");
                printf("\t\t\t\t...............................................................\n\n");

                FILE *file;
                char line[100];
                char Word[100];
                int Number = 0;

                file = fopen("P_Details.txt", "r");
                if (file == NULL) {
                    printf("Error opening file!\n");
                    
                }

                while (fgets(line, sizeof(line), file) != NULL) {
                    Number++;
                    if (sscanf(line, "%99s", Word) == 1) {
                        printf("%d.%s\n",Number,Word);
                    } else {
                        printf("Line %d is empty or has no word.\n", Number);
                    }
                }

                fclose(file);

                printf("\t\tENTER YOUR FULL NAME             :");
                scanf("%s",W);

                int valid=0;
                for(;!valid;){
                    printf("\n\t\tENTER YOUR NATIONAL IDENTY CARD NUMBER _________");
                    printf("\n\t\tYou don't need to include the final characters of 'x' or 'v' in your national ID :");
                    scanf("%s",E);            
                    if(strlen(E)==12 ||strlen(E)==9){
                        valid=1;
                    }else{
                        printf("\t\tIt's an invalid number!!! \n\t\tPlease enter a 9 or 12 Digit your national ID number.");
                        scanf("%s",E);
                    }
                }
                printf("\n\t\tYour ID number is accepted: %s\n", E);
                            
                printf("\n\t\tYOUR DATE OF BIRTH (YYYY.MM.DD):");
                scanf("%s",R);

                printf("\n\t\tYOUR G-mail        :");
                scanf("%s",T);

                printf("\n\t\tYOUR PARTY NAME    :");
                scanf("%s",Y);

                printf("\n\t\tYOUR ZIP CODE      :");
                scanf("%d",&U);

                printf("\n\t\tYOUR ADDRESS       :");
                scanf("%s",O);
                
                printf("\n\t\tUSERNAME  :");
                scanf("%s",K);

                printf("\n\t\t\t* include 6 Characters and Don't include a simbls.");
                printf("\n\t\tPASSWORD  :");
                scanf("%s",J);            

                printf("\n\t\t1. Confirm and Save");
                printf("\n\t\t2. Re-enter Data");
                printf("\n\t\t3. Back to Previous Menu\n");
                printf("\n\t\tEnter choice: ");
                scanf("%d",&confirm);

                if(confirm==1){
                    fprintf(candi1,"\n%s",W);
                    fprintf(candi1,"\t%s",E);
                    fprintf(candi1,"\t%s",R);
                    fprintf(candi1,"\t%s",T);
                    fprintf(candi1,"\t%s",Y);
                    fprintf(candi1,"\t%d",U);
                    fprintf(candi1,"\t%s",O);
                    fprintf(candi2,"\n%s",K);
                    fprintf(candi2,"\t%s",J);
                }


                printf("\t\t\t\t...........................................................\n\n");

                printf("\t\t\t\t\t\tTHANK YOU FOR YOUR COOPARION !!!\n");

                printf("\t\t\t\t...........................................................\n\n");
                while(confirm==2);//choose re enter data need to enter repeat 
                if(back)break;
                break;

            case 2:
                system("cls");

                printf("\n\t\t\t\t\t\t####ENTER YOUR DATAILS HERE ####\n\n");

                printf("\t\tENTER YOUR FULL NAME             :");
                scanf("%S",H);
                fprintf(vot1,"\n%s",H);

                int valid1=0;
                for(;!valid1;){
                    printf("\n\t\tENTER YOUR NATIONAL IDENTY CARD NUMBER _________");
                    printf("\n\t\tYou don't need to include the final characters of 'x' or 'v' in your national ID :");
                    scanf("%s",G);            
                    if(strlen(G)==12 ||strlen(G)==9){
                        valid1=1;
                    }else{
                        printf("\t\tIt's an invalid number!!! \n\t\tPlease enter a 9 or 12 Digit your national ID number.");
                        scanf("%s",G);
                    }
                }
                printf("\n\t\tYour ID number is accepted: %s\n", G);
                fprintf(vot1,"\t%s",G);

                printf("\n\t\tYOUR DATE OF BIRTH(YYYY.MM.DD) :");
                scanf("%s",F);
                fprintf(vot1,"\t%s",F);

                printf("\n\t\tYOUR G-mail        :");
                scanf("%s",D);
                fprintf(vot1,"\t%s",D);

                printf("\n\t\tYOUR ADDRESS       :");
                scanf("%s",Z);
                fprintf(vot1,"\t%s",Z);
                
                printf("\n\t\tUSERNAME  :");
                scanf("%S",X);
                fprintf(candi2,"\n%s",X);

                printf("\n\t\tPASSWORD  :");
                scanf("%s",C);
                fprintf(candi2,"\t%s",C);

                printf("\t\t\t\t...........................................................\n\n");

                printf("\t\t\t\t\t\tTHANK YOU FOR YOUR COOPARION !!!\n");

                printf("\t\t\t\t...........................................................\n\n");

                break;

            case 3: 
                system("cls");
                
                printf("\n\t\t\t\t\t\t#### ENTER YOUR DATAILS HERE ####\n\n");

                printf("\t\tENTER YOUR POLITICAL PARTY NAME  :");
                scanf(" %S",&V);
                fprintf(party1,"\n%s",V);
                fprintf(party2,"\n%s",V);

                printf("\n\t\t\t\t  PLEASE ENTER THIS AREA TO YOUR PARTY CHIRMEN DETAILES");
                printf("\n\t\tNAME :");
                scanf("%s",&B);
                fprintf(party1,"\t%s",B);

                int valid2=0;
                for(;!valid2;){
                    printf("\n\t\tENTER YOUR NATIONAL IDENTY CARD NUMBER _________");
                    printf("\n\t\tYou don't need to include the final characters of 'x' or 'v' in your national ID :");
 
                    scanf("%s",N);            
                    if(strlen(N)==12 ||strlen(N)==9){
                        valid2=1;
                    }else{
                        printf("\t\tIt's an invalid number!!! \n\t\tPlease enter a 9 or 12 Digit your national ID number.");
                        scanf("%s",N);
                    }
                }
                printf("\n\t\tYour ID number is accepted: %s\n", N);
                fprintf(party1,"\t%s",N);

                printf("\n\t\t\t\t  PLEASE ENTER THIS AREA TO YOUR PARTY SECRATERY DETAILES");
                printf("\n\t\tNAME :");
                scanf("%s",B);
                fprintf(party1,"\t%s",B);

                int valid3=0;
                for(;!valid3;){
                    printf("\n\t\tENTER YOUR NATIONAL IDENTY CARD NUMBER _________");
                    printf("\n\t\tYou don't need to include the final characters of 'x' or 'v' in your national ID :");
                    scanf("%s",P);            
                    if(strlen(P)==12 ||strlen(P)==9){
                        valid3=1;
                    }else{
                        printf("\t\tIt's an invalid number!!! \n\t\tPlease enter a 9 or 12 Digit your national ID number.");
                        scanf("%s",P);
                    }
                }
                printf("\n\t\tYour ID number is accepted: %s\n", P);
                fprintf(party1,"\t%s",P);

                printf("ENTER YOUR PARTY SYSTEM PASSWORD :");
                scanf("%s",PA);
                fprintf(party2,"\t%s",PA);

                printf("\t\t\t\t...........................................................\n\n");

                printf("\t\t\t\t\t\tTHANK YOU FOR YOUR COOPARION !!!\n");

                printf("\t\t\t\t...........................................................\n\n");
                

                break ;
            
            default: 
                break;

            fclose(candi1);
            fclose(candi2);
            fclose(vot1);
            fclose(party1);
            fclose(party2);

        }

    case 2:
        break;
               
    }

return 0;
}