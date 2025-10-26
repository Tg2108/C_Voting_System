#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>//this use system("cls")
int main(){  
    system("cls");
    char W[100],R[10],T[100],O[100],E[12],K[12],J[12],H[100],F[10],D[100],I[12];
    char A[25],Z[100],X[12],C[12],V[100],B[50],N[12],G[12],P[12];
    int U,Q,S,rl,len,Y; 
    int confirm,back;//for confirmations and previous page value
    
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t---- WELLCOME TO PARLIAMENT ELECTION VOTING SYSTEM 2025 ----\n");
    printf("\t\t\t\t\t...............................................................\n\n");

    printf("\t\t\t\t\t||\t\t\t1.Registration\t\t\t     ||\n");
    printf("\t\t\t\t\t||\t\t\t2.Loging\t\t\t     ||\n\n");

    printf("\t\t\t\t\t...............................................................\n\n");

    printf("\t\t\t\t\tPLEASE ENTER YOUR CHOISE HERE:");
    scanf("%d",&rl);

    
    FILE *candi1; //file creating 
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

            fseek(candi1, 0, SEEK_END); //this code is useto show default file header
            long size = ftell(candi1);
            if (size == 0) {
                fprintf(candi1, "NAME\tID_NUM\tDOB\tG-mail\tPARTY_NAME\tZIP_CODE\tADDRESS");
            }

            fseek(candi2, 0, SEEK_END);//this code is useto show default file header
            long size1 = ftell(candi2);
            if (size1 == 0) {
                fprintf(candi2, "USER_NAME\tPASSWORD");
            }

            fseek(vot1, 0, SEEK_END);//this code is useto show default file header
            long size2 = ftell(vot1);
            if (size2 == 0) {
                fprintf(vot1, "NAME\tID_NUM\tDOB\tG-mail\tZIP_CODE\t\tADDRESS");
            }
            
        switch(Q){
                 
            case 1:
                do{
                    system("cls");//close the up interface
                    back=0;
                    confirm=0;

                    printf("\t\t\t\t...............................................................\n\n");
                    printf("\n\t\t\t\t||\t#### ENTER YOUR CANDIDATES DATAILS HERE ####         ||\n\n");
                    printf("\t\t\t\t...............................................................\n\n");

                    printf("\t\tENTER YOUR FULL NAME             :");
                     //this umder 4 code line use to user input data with space but it read a one part
                    getchar();     
                    fgets(W, sizeof(W), stdin);           
                    len = strlen(W);
                        if (len > 0 && W[len - 1] == '\n')
                        W[len - 1] = '\0';

                    int valid=0;
                    for(;!valid;){
                        printf("\n\t\tENTER YOUR NATIONAL IDENTY CARD NUMBER _________");
                        printf("\n\t\tYou don't need to include the final characters of 'x' or 'v' in your national ID :");
                        scanf("%s",E);            
                        if(strlen(E)==12 ||strlen(E)==9){
                            valid=1;
                            fprintf(candi1,"\n%s",W);
                        fprintf(candi1,"\t%s",E);
                        
                        }else{
                            continue;
                        }
                    }
                    printf("\n\t\tYour ID number is accepted: %s\n",E);
                                
                    printf("\n\t\tYOUR DATE OF BIRTH (YYYY.MM.DD):");
                    scanf("%s",R);

                    printf("\n\t\tYOUR G-mail        :");
                    scanf("%s",T);

                    FILE *file;
                    char line[100];

                    char Word[100];
                    int Number = 0;

                    file = fopen("approv_party.txt", "r");
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
                    printf("\n\t\tENTER YOUR PARTY NUMBER     :");
                    scanf("%d",&Y);

                    switch(Y){
                        case 1:{
                            FILE *party1;
                            party1=fopen("partyone.txt","a");
                            if (party1== NULL) {
                                printf("Error opening file for writing!\n");
                                return 1;
                            }
                            fprintf(party1,"%s",W);
                            fclose(party1);
                            break;
                        }
                        case 2:{
                            FILE *party2;
                            party2=fopen("partytwo.txt","a");
                            if (party2== NULL) {
                                printf("Error opening file for writing!\n");
                                return 1;
                            }
                            fprintf(party2,"%s",W);

                            fclose(party2);
                            break;
                        }
                        case 3:{
                            FILE *party3;
                            party3=fopen("partythree.txt","a");
                            if (party3== NULL) {
                                printf("Error opening file for writing!\n");
                                return 1;
                            }
                            fprintf(party3,"%s",W);
                            fclose(party3);
                            break;
                        }
                        case 4:{
                            FILE *party4;
                            party4=fopen("partyfour.txt","a");
                            if (party4== NULL) {
                                printf("Error opening file for writing!\n");
                                return 1;
                            }
                            fprintf(party4,"%s",W);
                            fclose(party4);
                            break;
                        }
                        case 5:{
                            FILE *party5;
                            party5=fopen("partyfive.txt","a");
                            if (party5== NULL) {
                                printf("Error opening file for writing!\n");
                                return 1;
                            }
                            fprintf(party5,"%s",W);
                            fclose(party5);
                            break;
                        }
                        default:
                            printf("THIS is invalied number::");
                            break;
                    }
                    printf("\n\t\tYOUR ZIP CODE      :");
                    scanf("%d",&U);

                    printf("\n\t\tYOUR ADDRESS       :");
                     //this umder 4 code line use to user input data with space but it read a one part
                    getchar();     
                    fgets(O, sizeof(O), stdin);
                    len = strlen(O);
                        if (len > 0 && O[len - 1] == '\n')
                        O[len - 1] = '\0';

                    do{
                        printf("\n\t\tUSERNAME___________");
                        printf("\n\t\tThis user name must be your ID_NUMBER\t:");
                        scanf("%s",K);
                    }while ((E==K) != 0);

                    int valid7=0;
                    for(;!valid7;){
                        printf("\n\t\tENTER YOUR PARTY PASSWORD _________");
                        printf("\n\t\tinclude 8 Characters and Don't include a simbls.");
                        scanf("%s",J);            
                        if(strlen(J)==8){
                            valid7=1;
                        }else{
                            continue;
                        }
                    }
                    printf("\n\t\tYour PASSWORD is accepted: %s\n",J);
                          
                    printf("\n\t\t1. Confirm and Save");
                    printf("\n\t\t2. Re-enter Data");
                    printf("\n\t\t3. Exit the system\n");
                    printf("\n\t\tEnter choice: ");
                    scanf("%d",&confirm);

                    //store data in file
                    if(confirm==1){
                        fprintf(candi1,"\t%s",R);
                        fprintf(candi1,"\t%s",T);
                        fprintf(candi1,"\t%d",Y);
                        fprintf(candi1,"\t%d",U);
                        fprintf(candi1,"\t%s",O);
                        fprintf(candi2,"\n%s",K);
                        fprintf(candi2,"\t%s",J);
                        printf("\n\t\tData Saved Successfully!\n");
                    }else if(confirm==3){
                        back=1;
                    }

                    printf("\t\t\t\t...........................................................\n\n");

                    printf("\t\t\t\t\t\tTHANK YOU FOR YOUR COOPARION !!!\n");

                    printf("\t\t\t\t...........................................................\n\n");
                }while(confirm==2);//choose re enter data need to enter repeat 
                    if(back)break;
                break;

            case 2:
                do{
                    back=0;
                    confirm=0;
                    system("cls");//close the up interface

                    printf("\n\t\t\t\t\t\t####ENTER YOUR DATAILS HERE ####\n\n");

                    printf("\t\tENTER YOUR FULL NAME             :");
                     //this umder 4 code line use to user input data with space but it read a one part
                    getchar();     
                    fgets(H, sizeof(H), stdin);
                    len = strlen(H);
                        if (len > 0 && H[len - 1] == '\n')
                        H[len - 1] = '\0';
                    
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

                    printf("\n\t\tYOUR DATE OF BIRTH(YYYY.MM.DD) :");
                    scanf("%s",F);

                    printf("\n\t\tYOUR G-mail        :");
                    scanf("%s",D);

                    printf("\n\t\tYOUR ADDRESS       :");
                    getchar();     
                    fgets(Z, sizeof(Z), stdin);
                    len = strlen(Z);
                        if (len > 0 && Z[len - 1] == '\n')
                        Z[len - 1] = '\0';

                    do{
                        printf("\n\t\tUSERNAME___________");
                        printf("\n\t\tThis user name must be your ID_NUMBER\t:");
                        scanf("%s",X);
                    }while ((G== X) != 0);

                    int valid10=0;
                    for(;!valid10;){
                        printf("\n\t\tENTER YOUR PARTY PASSWORD _________");
                        printf("\n\t\tinclude 8 Characters and Don't include a simbls.");
                        scanf("%s",C);            
                        if(strlen(C)==8){
                            valid10=1;
                        }else{
                            continue;
                        }
                    }
                    printf("\n\t\tYour PASSWORD is accepted: %s\n",C);
                    
                    printf("\n\t\t1. Confirm and Save");
                    printf("\n\t\t2. Re-enter Data");
                    printf("\n\t\t3. Back to Previous Menu\n");
                    printf("\n\t\tEnter choice: ");
                    scanf("%d",&confirm);

                    //store data in file
                    if(confirm==1){
                        fprintf(vot1,"\n%s",H);
                        fprintf(vot1,"\t%s",G);
                        fprintf(vot1,"\t%s",F);
                        fprintf(vot1,"\t%s",D);
                        fprintf(vot1,"\t%s",Z);
                        fprintf(candi2,"\n%s",X);
                        fprintf(candi2,"\t%s",C);
                        printf("\n\t\tData Saved Successfully!\n");
                    }else if(confirm==3){
                        back=1;
                    }

                    printf("\t\t\t\t...........................................................\n\n");

                    printf("\t\t\t\t\t\tTHANK YOU FOR YOUR COOPARION !!!\n");

                    printf("\t\t\t\t...........................................................\n\n");
                }while(confirm==2);//choose re enter data need to enter repeat 
                if(back)break;            
                break;

            case 3:
                do{
                    back-0;
                    confirm=0;
                    system("cls");//close the up interface
                    
                    printf("\n\t\t\t\t\t\t#### ENTER YOUR DATAILS HERE ####\n\n");

                    printf("\t\tENTER YOUR POLITICAL PARTY NAME  :");
                     //this umder 4 code line use to user input data with space but it read a one part
                    getchar();
                    fgets(V, sizeof(V), stdin);
                    len = strlen(V);
                        if (len > 0 && V[len - 1] == '\n')
                        V[len - 1] = '\0';

                    printf("\n\t\t\t\t  PLEASE ENTER THIS AREA TO YOUR PARTY CHIRMEN DETAILES");
                    printf("\n\t\tNAME :");
                     //this umder 4 code line use to user input data with space but it read a one part
                    getchar();
                    fgets(A, sizeof(A), stdin);
                    len = strlen(A);
                        if (len > 0 && A[len - 1] == '\n')
                        A[len - 1] = '\0';
   
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

                    printf("\n\t\t\t\t  PLEASE ENTER THIS AREA TO YOUR PARTY SECRATERY DETAILES");
                    printf("\n\t\tNAME :");
                     //this umder 4 code line use to user input data with space but it read a one part
                    getchar();
                    fgets(B, sizeof(B), stdin);
                    len = strlen(B);
                        if (len > 0 && B[len - 1] == '\n')
                        B[len - 1] = '\0';

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

                    int valid9=0;
                    for(;!valid9;){
                        printf("\n\t\tENTER YOUR PARTY PASSWORD _________");
                        printf("\n\t\tinclude 8 Characters and Don't include a simbls.");
                        scanf("%s",I);            
                        if(strlen(I)==8){
                            valid9=1;
                        }else{
                            continue;
                        }
                    }
                    printf("\n\t\tYour PASSWORD is accepted: %s\n",I);
                    
                    printf("\n\t\t1. Confirm and Save");
                    printf("\n\t\t2. Re-enter Data");
                    printf("\n\t\t3. Back to Previous Menu\n");
                    printf("\n\t\tEnter choice: ");
                    scanf("%d",&confirm);

                    //store data in file
                    if(confirm==1){
                        fprintf(party1,"%s",V);
                        fprintf(party1,"\t%s",A);
                        fprintf(party1,"\t%s",N);
                        fprintf(party1,"\t%s",B);
                        fprintf(party1,"\t%s\n",P);
                        fprintf(party2,"\n%s",V);
                        fprintf(party2,"\t%s",I);
                        printf("\n\t\tData Saved Successfully!\n");
                    }else if(confirm==3){
                        back=1;
                    }

                    printf("\t\t\t\t...........................................................\n\n");

                    printf("\t\t\t\t\t\tTHANK YOU FOR YOUR COOPARION !!!\n");

                    printf("\t\t\t\t...........................................................\n\n");
                }while(confirm==2);//choose re enter data need to enter repeat 
                if(back)break;            
                break;

                break ;
            
            default: 
                break;

            fclose(candi1);
            fclose(candi2);
            fclose(vot1);
            fclose(party1);
            fclose(party2);

        }
        break;
    case 2:
        
        break;           
    }
return 0;
}