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

            fprintf(candi1,"\nNAME,ID_NUM,DOB,G-mail,PARTY_NAME,ZIP_CODE,DISTRICT,ADDRESS\n");
            fprintf(candi2,"\nID_NUM,USER_NAME,PASSWORD");
            fprintf(vot1,"\nNAME,ID_NUM,DOB,G-mail,PARTY_NAME,ZIP_CODE,DISTRICT,ADDRESS\n");
            fprintf(vot2,"\nID_NUM,USER_NAME,PASSWORD");
            fprintf(party1,"PARTY_NAME,Chirmen_NAME,Chirmen_ID,Secratery_NAME,Secratery_ID");
            fprintf(party2,"PARTY_NAME,PASSWORD");
        switch(Q){
                
            case 1:
                system("cls");

                printf("\t\t\t\t...............................................................\n\n");
                printf("\n\t\t\t\t||\t#### ENTER YOUR CANDIDATES DATAILS HERE ####         ||\n\n");
                printf("\t\t\t\t...............................................................\n\n");

                printf("\t\tENTER YOUR FULL NAME             :");
                scanf("%s",W);
                fprintf(candi1,"\n%s",W);

                printf("\n\t\tYOUR NATIONAL IDENTY CARD NUMBER :");
                printf("\n\t\tYou don't need to include the final characters of 'x' or 'v' in your national ID :");
                scanf("\t\t:%s",E);            
                
                if(strlen(E)!=12 ||strlen(E)!=9){
                    printf("\t\tIt's an invalid number!!! \n\t\tPlease enter a 9 or 12 Digit your national ID number.");
                    printf("\n\t\tYou don't need to include the final characters of 'x' or 'v' in your national ID :");
                    printf("\n\t\t:");
                    scanf("%s",E);
                }
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

                printf("\n\t\tSELECT YOUR DISTRICT NUMBER:");
                printf("1.Ampara,2.Anuradhapura,3.Badulla,4.Batticaloa,5.Colombo,6.Galle,7.Gampaha,8.Hambantota");
                printf("9.Jaffna,10.Kalutara,11.Kandy,12.Kegalle,13.Kilinochchi,14.Kurunagala,15.Mannarama,16.Matale,17.Matara");
                printf("18.Monaragala,19.Mullaitivu,20.Nuwara Eliya,21.Polonnaruwa,22.Puttalam,23.Ratnapura,24.Trincomalee,25.Vavuniya");
                scanf("%d",&I);

                if(I>=1 && I<=25){
                    switch(I){
                        case 1:
                            printf("Ampara");
                            break;
                        case 2:
                            printf("Anuradhapura");
                            break;
                        case 3:
                            printf("Badulla");
                            break;
                        case 4:
                            printf("Batticaloa");
                            break;
                        case 5:
                            printf("Colombo");
                            break;
                        case 6:
                            printf("Galle");
                            break;
                        case 7:
                            printf("Gampaha");
                            break;
                        case 8:
                            printf("Hambantota");
                            break;
                        case 9:
                            printf("Jaffna");
                            break;
                        case 10:
                            printf("Kalutara");
                            break;
                        case 11:
                            printf("Kandy");
                            break;
                        case 12:
                            printf("Kegalle");
                            break;
                        case 13:
                            printf("Kilinochchi");
                            break;
                        case 14:
                            printf("Kurunagala");
                            break;
                        case 15:
                            printf("Mannarama");
                            break;
                        case 16:
                            printf("Matale");
                            break;
                        case 17:
                            printf("Matara");
                            break;
                        case 18:
                            printf("Monaragala");
                            break;
                        case 19:
                            printf("Mullaitivu");
                            break;
                        case 20:
                            printf("Nuwara Eliya");
                            break;
                        case 21:
                            printf("Polonnaruwa");
                            break;
                        case 22:
                            printf("Puttalam");
                            break;
                        case 23:
                            printf("Rathnapura");
                            break;
                        case 24:
                            printf("Trincomalee");
                            break;
                        case 25:
                            printf("Vavuniya");
                            break;
                    }     
                }else{
                    printf("This number must be between 1-25");   
                }fprintf(candi1,"\t%d",I);

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
                printf("\n\t\tYou don't need to include the final characters of 'x' or 'v' in your national ID :");
                scanf("\t\t:%s",G);            
                
                if(strlen(G)!=12 ||strlen(G)!=9){
                    printf("\t\tIt's an invalid number!!! \n\t\tPlease enter a 9 or 12 Digit your national ID number.");
                    printf("\n\t\tYou don't need to include the final characters of 'x' or 'v' in your national ID :");
                    printf("\n\t\t:");
                    scanf("%s",G);
                }
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
                fprintf(party1,"\n%s",V);
                fprintf(party2,"\n%s",V);

                printf("\n\t\t\t\t  PLEASE ENTER THIS AREA TO YOUR PARTY CHIRMEN DETAILES");
                printf("\n\t\tNAME :");
                scanf("%s",&B);
                fprintf(party1,"\t%s",B);

                printf("\n\t\tYOUR NATIONAL IDENTY CARD NUMBER :");
                printf("\n\t\tYou don't need to include the final characters of 'x' or 'v' in your national ID :");
                scanf("\t\t:%s",N);            
                
                if(strlen(N)!=12 ||strlen(N)!=9){
                    printf("\t\tIt's an invalid number!!! \n\t\tPlease enter a 9 or 12 Digit your national ID number.");
                    printf("\n\t\tYou don't need to include the final characters of 'x' or 'v' in your national ID :");
                    printf("\n\t\t:");
                    scanf("%s",N);
                }
                fprintf(party1,"\t%s",N);

                printf("\n\t\t\t\t  PLEASE ENTER THIS AREA TO YOUR PARTY SECRATERY DETAILES");
                printf("\n\t\tNAME :");
                scanf("%s",B);
                fprintf(party1,"\t%s",B);

                printf("\n\t\tYOUR NATIONAL IDENTY CARD NUMBER :");
                printf("\n\t\tYou don't need to include the final characters of 'x' or 'v' in your national ID :");
                scanf("\t\t:%s",P);            
                
                if(strlen(P)!=12 ||strlen(P)!=9){
                    printf("\t\tIt's an invalid number!!! \n\t\tPlease enter a 9 or 12 Digit your national ID number.");
                    printf("\n\t\tYou don't need to include the final characters of 'x' or 'v' in your national ID :");
                    printf("\n\t\t:");
                    scanf("%s",P);
                }
                fprintf(party1,"\t%s",P);

                printf("ENTER YOUR PARTY PASSWORD :");
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