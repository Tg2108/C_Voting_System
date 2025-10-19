#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){  
    system("cls");
    char W[100],R[10],T[100],O[100],E[12],L[50],K[12],J[8],H[100],F[10],D[100];
    char A[25],Z[100],X[12],C[8],V[100],B[50],N[12],M[50],G[12],Y[100],P[12],PA[12];
    int U,Q,S,I,rl; 
    
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
            fseek(vot2, 0, SEEK_END);
            long size3 = ftell(vot2);
            if (size3 == 0) {
                fprintf(vot2, "ID_NUM,USER_NAME,PASSWORD\n");
            }
            fseek(party1, 0, SEEK_END);
            long size4 = ftell(party1);
            if (size4 == 0) {
                fprintf(party1, "PARTY_NAME,Chirmen_NAME,Chirmen_ID,Secratery_NAME,Secratery_ID\n");
            }
            fseek(party2, 0, SEEK_END);
            long size5 = ftell(party2);
            if (size5 == 0) {
                fprintf(party2, "PARTY_NAME,PASSWORD\n");
            }
            
        switch(Q){
                 
            case 1:
                system("cls");

                printf("\t\t\t\t...............................................................\n\n");
                printf("\n\t\t\t\t||\t#### ENTER YOUR CANDIDATES DATAILS HERE ####         ||\n\n");
                printf("\t\t\t\t...............................................................\n\n");

                printf("\t\tENTER YOUR FULL NAME             :");
                scanf("%s",W);
                fprintf(candi1,"\n%s",W);

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
                fprintf(candi1,"\t%s",E);
                fprintf(candi2,"\n%s",E);
            
                printf("\n\t\tYOUR DATE OF BIRTH (YYYY.MM.DD):");
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

                printf("\n\t\tSELECT YOUR DISTRICT NUMBER:\n");
                printf("\t\t1.Ampara         2.Anuradhapura   3.Badulla        4.Batticaloa     5.Colombo\n\t\t6.Galle          7.Gampaha        8.Hambantota     ");
                printf("9.Jaffna         10.Kalutara\n\t\t11.Kandy         12.Kegalle       13.Kilinochchi   14.Kurunagala    15.Mannarama\n\t\t16.Matale        ");
                printf("17.Matara        18.Monaragala    19.Mullaitivu    20.Nuwara Eliya  \n\t\t21.Polonnaruwa   22.Puttalam      23.Ratnapura     24.Trincomalee   25.Vavuniya\n");
                scanf("\t\t\t:::%d",&I);
                
                if(I>=1 && I<=25){
                    switch(I){
                        case 1:
                            printf("Ampara");
                            fprintf(candi1,"\t%d.Ampara",I);
                            break;
                        case 2:
                            printf("Anuradhapura");
                            fprintf(candi1,"\t%d.Anuradhapura",I);
                            break;
                        case 3:
                            printf("Badulla");
                            fprintf(candi1,"\t%d.Badulla",I); 
                            break;
                        case 4:
                            printf("Batticaloa");
                            fprintf(candi1,"\t%d.Batticaloa",I);
                            break;
                        case 5:
                            printf("Colombo");
                            fprintf(candi1,"\t%d.Colombo",I);
                            break;
                        case 6:
                            printf("Galle");
                            fprintf(candi1,"\t%d.Galle",I);
                            break;
                        case 7:
                            printf("Gampaha");
                            fprintf(candi1,"\t%d.Gampaha",I);
                            break;
                        case 8:
                            printf("Hambantota");
                            fprintf(candi1,"\t%d.Hambantota",I);
                            break;
                        case 9:
                            printf("Jaffna");
                            fprintf(candi1,"\t%d.Jaffna",I);
                            break;
                        case 10:
                            printf("Kalutara");
                            fprintf(candi1,"\t%d.kalutara",I);
                            break;
                        case 11:
                            printf("Kandy");
                            fprintf(candi1,"\t%d.Kandy",I);
                            break;
                        case 12:
                            printf("Kegalle");
                            fprintf(candi1,"\t%d.Kegalle",I);
                            break;
                        case 13:
                            printf("Kilinochchi");
                            fprintf(candi1,"\t%d.Kilinochchi",I);
                            break;
                        case 14:
                            printf("Kurunagala");
                            fprintf(candi1,"\t%d.Kurunagala",I);
                            break;
                        case 15:
                            printf("Mannarama");
                            fprintf(candi1,"\t%d.Mannarama",I);
                            break;
                        case 16:
                            printf("Matale");
                            fprintf(candi1,"\t%d.Matale",I);
                            break;
                        case 17:
                            printf("Matara");
                            fprintf(candi1,"\t%d.Matara",I);
                            break;
                        case 18:
                            printf("Monaragala");
                            fprintf(candi1,"\t%d.Monaragala",I);
                            break;
                        case 19:
                            printf("Mullaitivu");
                            fprintf(candi1,"\t%d.Mullaitive",I);
                            break;
                        case 20:
                            printf("Nuwara Eliya");
                            fprintf(candi1,"\t%d.Nuwara Eliya",I);
                            break;
                        case 21:
                            printf("Polonnaruwa");
                            fprintf(candi1,"\t%d.Polonnaruwa",I);
                            break;
                        case 22:
                            printf("Puttalam");
                            fprintf(candi1,"\t%d.Puttalam",I);
                            break;
                        case 23:
                            printf("Rathnapura");
                            fprintf(candi1,"\t%d.Rathnapura",I);
                            break;
                        case 24:
                            printf("Trincomalee");
                            fprintf(candi1,"\t%d.Trincomalee",I);
                            break;
                        case 25:
                            printf("Vavuniya");
                            fprintf(candi1,"\t%d.Vavuniya",I);
                            break;
                        default:
                            printf("This is invalid number:");
                            break;
                        }     
                }else{
                    printf("This number must be between 1-25");   
                } 
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
                fprintf(vot2,"\n%s",G);

                printf("\n\t\tYOUR DATE OF BIRTH(YYYY.MM.DD) :");
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
                        valid=2;
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
            fclose(vot2);
            fclose(party1);
            fclose(party2);

        }

    case 2:
        break;
               
    }

return 0;
}