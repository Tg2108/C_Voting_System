#include <stdio.h>
#include <string.h>
FILE *fp1;
FILE *file;
FILE *ac;
FILE *nc;
FILE *ap;
FILE *np;
FILE *av;
FILE *nv;
        
char line[256];
char ch;
char name_from_file[50], avg_from_file[10];
char name_from_user[50], avg_from_user[10];
int found = 0,x,c;
#define MAX_PARTIES 100
                void pa() {
                        FILE *fp1;
                        FILE *fp2;
                        char l1[256];
                        char n1[50], p1[50];
                        int p2=0;
                        char fn[100];
                        char parties[MAX_PARTIES][50]; 
                        int partyCount = 0;   
                        fp1 = fopen("C_Details.txt", "r");
                        if (fp1 == NULL) {
                            printf("Error: Cannot open C_Details.txt\n");
                            
                        }
                        
                        fgets(l1, sizeof(l1), fp1);    
                        while (fgets(l1, sizeof(l1), fp1)) {
                            if (sscanf(l1, "%s %*s %*s %*s %s", n1, p1) == 2) {            
                                int index = -1;
                                int i;
                                for (i = 0; i < partyCount; i++) {
                                    if (strcmp(parties[i], p1) == 0) {
                                        index = i;
                                        break;
                                    }
                                }           
                                if (index == -1 && partyCount < MAX_PARTIES) {
                                    strcpy(parties[partyCount], p1);
                                    index = partyCount;
                                    partyCount++;
                                }           
                                if (index == 0)
                                    sprintf(fn, "party1.txt");
                                else if (index == 1)
                                    sprintf(fn, "party2.txt");
                                else if (index == 2)
                                    sprintf(fn, "party3.txt");
                                else
                                    sprintf(fn, "party%d.txt", index + 1);           
                                fp2 = fopen(fn, "a");
                                if (fp2 == NULL) {
                                    printf("Error: Cannot create %s\n", fn);
                                    continue;
                                }
                                
                                fseek(fp2, 0, SEEK_END);
                                long size = ftell(fp2);
                                if (size == 0) {
                                    fprintf(fp2, "%s\n", p1);
                                }            
                                fprintf(fp2, "%s %d\n", n1,p2);

                                fclose(fp2);
                            }
                        }
                        fclose(fp1);
                        
                        
                    }
int ex1(){

printf("\t\t\t\t\t1.Your Request Is Aprove or Notaprove Check it?\n");
printf("\t\t\t\t\t2.Vorting\n");
printf("\t\t\t\t\t3.Result\n");
printf("\t\t\t\t\t4.Addmin\n\n");

printf("Enter Your Chose: ");
scanf("%d",&x);
switch(x){
    case 1:
            printf("Enter Your Username (Your NIC): ");
            scanf("%s", name_from_user);

            printf("Enter Your Passward: ");
            scanf("%s", avg_from_user);

            fp1 = fopen("C_hide.txt", "r");
            if (fp1 == NULL) {
                printf("Error opening file!\n");
                return 1; 
            }

            
            while(fscanf(fp1, "%s%s", name_from_file, avg_from_file) == 2){

                if(strcmp(name_from_file, name_from_user) == 0 && strcmp(avg_from_file, avg_from_user) == 0){
                    printf("\n\n\tYou Successful Loging..\n\n");
                    found = 1; 

                    char x[50];
                    FILE *ap = fopen("approv_party.txt", "r");
                    FILE *ac = fopen("approv.txt", "r");
                    FILE *av = fopen("approv_voter.txt", "r");


                    char line[256];
                    int found = 0;

                    while (fgets(line, sizeof(line), ap) || fgets(line, sizeof(line),av) || fgets(line, sizeof(line),ac)) {// voter and party file dekath add venna ona ||
                        if (strstr(line, name_from_user)) { 
                            found = 1;
                            break;
                        }
                    }

                    fclose(ap);
                    fclose(av);
                    fclose(ac);

                    if (found)
                        printf("Your Request Is Aprove .\n");
                    else
                        printf("Your Request Is Not Aprove Pleace Enter a Correct Details.\n");

                    break; 
                }
            }

            
            if(found == 0){
                printf("\n\n\tSorry Your Username or Passward is incrrect..\n\n");
                
                
            }

        break;


    case 2:
            printf("Enter Your Username (Your NIC): ");
            scanf("%s", name_from_user);

            printf("Enter Your Passward: ");
            scanf("%s", avg_from_user);

            fp1 = fopen("C_hide.txt", "r");
            if (fp1 == NULL) {
                printf("Error opening file!\n");
                return 1; 
            }

            
            while(fscanf(fp1, "%s%s", name_from_file, avg_from_file) == 2){

                if(strcmp(name_from_file, name_from_user) == 0 && strcmp(avg_from_file, avg_from_user) == 0){
                    printf("\n\n\tYou Successful Loging..\n\n");
                    found = 1; 

                    char x[50];
                    FILE *fp = fopen("approv.txt", "r");

                    if (fp == NULL) {
                        printf("File not found\n");
                        return 1;
                    }

                    char line[256];
                    int found = 0;

                    while (fgets(line, sizeof(line), fp)) {
                        if (strstr(line, name_from_user)) { 
                            found = 1;
                            break;
                        }
                    }

                    fclose(fp);

                    if (found)
                        printf("You Can Vorting.\n");
                    else
                        printf("Your Request Is Not Aprove Pleace Enter a Correct Details.\n");

                   e();

                    break; 
                }
            }

            
            if(found == 0){
                printf("\n\n\tSorry Your Username or Passward is incrrect..\n\n");
                
                
            }

        break;

    case 3:
            printf("Enter Your Username (Your NIC): ");
            scanf("%s", name_from_user);

            printf("Enter Your Passward: ");
            scanf("%s", avg_from_user);

            fp1 = fopen("C_hide.txt", "r");
            if (fp1 == NULL) {
                printf("Error opening file!\n");
                return 1; 
            }

            
            while(fscanf(fp1, "%s%s", name_from_file, avg_from_file) == 2){
                
                if(strcmp(name_from_file, name_from_user) == 0 && strcmp(avg_from_file, avg_from_user) == 0){
                    printf("\n\n\tYou Successful Loging..\n\n");
                    found = 1; 
                    break; 
                }
            }

            
            if(found == 0){
                printf("\n\n\tSorry Your Username or Passward is incrrect..\n\n");
                
                
            }

            r();
        break;

    case 4:
            printf("Enter Your Username (Your NIC): ");
            scanf("%s", name_from_user);

            printf("Enter Your Passward: ");
            scanf("%s", avg_from_user);

            if(strcmp("200421402650", name_from_user) == 0 && strcmp("20040801", avg_from_user) == 0){
            
                    printf("\n\t\t\t\t\t1.CANDIDATES\n");
                    printf("\t\t\t\t\t2.VOTERS\n");
                    printf("\t\t\t\t\t3.POLLITICAL PARTYS\n");
                    printf("\t\t\t\t\t4.CREAT FILE\n\n");

            printf("\t\t\t\tENTER YOUR CHOISE :");
            scanf("%d",&c);
      
            }else{
                printf("Your Username or Password incoreect");
            }
    switch(c){

        case 1:
                file = fopen("C_Details.txt", "r");//candidate details file
                if (file == NULL) {
                    printf("Error opening file!\n");
                    return 1;
                }

                printf("\tAre you want Aprove Press '1'\n \tAre you want NotAprove Press '0'\n\n");


                while (fgets(line, sizeof(line), file)) {
                    printf("%s", line);
                    printf("\nAprove or Not Aprove: ");
                    ch = getchar();
                    if(ch == '1') {
                        ac= fopen("approv.txt","a");
                        fprintf(ac,"%s\n",line);
                    }else if (ch == '0'){
                            nc = fopen("notapprov.txt","a");
                            fprintf(nc,"%s\n",line);
                        }
                    
                    while ((ch = getchar()) != '\n' && ch != EOF);
                }

                fclose(file);
                break;

        case 2:



                file = fopen("V_Details.txt", "r");//voters details file
                if (file == NULL) {
                    printf("Error opening file!\n");
                    return 1;
                }

                printf("\tAre you want Aprove Press '1'\n \tAre you want NotAprove Press '0'\n\n");


                while (fgets(line, sizeof(line), file)) {
                    printf("%s", line);
                    printf("Aprove or Not Aprove: ");
                    ch = getchar();
                    if(ch == '1') {
                        av= fopen("approv_voter.txt","a");
                        fprintf(av,"%s\n",line);
                    }else if (ch == '0'){
                            nv = fopen("notapprov_voter.txt","a");
                            fprintf(nv,"%s\n",line);
                        }
                    
                    while ((ch = getchar()) != '\n' && ch != EOF);
                }

                fclose(file);
                break;

        
        case 3:



                file = fopen("P_Details.txt", "r");//party file
                if (file == NULL) {
                    printf("Error opening file!\n");
                    return 1;
                }

                printf("\tAre you want Aprove Press '1'\n \tAre you want NotAprove Press '0'\n\n");


                while (fgets(line, sizeof(line), file)) {
                    printf("%s", line);
                    printf("\nAprove or Not Aprove: ");
                    ch = getchar();
                    if(ch == '1') {
                        ap= fopen("approv_party.txt","a");
                        fprintf(ap,"%s",line);
                    }else if (ch == '0'){
                            np = fopen("notapprov_party.txt","a");
                            fprintf(np,"%s",line);
                        }
                    
                    while ((ch = getchar()) != '\n' && ch != EOF);
                }

                fclose(file);
                break;
        case 4:

                pa();
                break;
    }
        

    
    
    
}

}