#include <stdio.h>
#include <string.h>
FILE *fp1;
FILE *file;
FILE *ac;
FILE *nc;
                
char line[256];
char ch;
char name_from_file[50], avg_from_file[10];
char name_from_user[50], avg_from_user[10];
int found = 0,x,c;
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
                    FILE *fp = fopen("approv", "r");

                    if (fp == NULL) {
                        printf("File not found\n");
                        return 1;
                    }

                    char line[256];
                    int found = 0;

                    while (fgets(line, sizeof(line), fp)) {// voter and party file dekath add venna ona ||
                        if (strstr(line, name_from_user)) { 
                            found = 1;
                            break;
                        }
                    }

                    fclose(fp);

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
                    FILE *fp = fopen("approv", "r");

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
        break;

    case 4:
            printf("Enter Your Username (Your NIC): ");
            scanf("%s", name_from_user);

            printf("Enter Your Passward: ");
            scanf("%s", avg_from_user);
            
                    printf("\n\t\t\t\t\t1.CANDIDATES\n");
                    printf("\t\t\t\t\t2.VOTERS\n");
                    printf("\t\t\t\t\t3.POLLITICAL PARTYS\n\n");

            printf("\t\t\t\tENTER YOUR CHOISE :");
            scanf("%d",&c);

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
                        ac= fopen("approv","a");
                        fprintf(ac,"%s\n",line);
                    }else if (ch == '0'){
                            nc = fopen("notapprov","a");
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
                        ac= fopen("approv","a");
                        fprintf(ac,"%s\n",line);
                    }else if (ch == '0'){
                            nc = fopen("notapprov","a");
                            fprintf(nc,"%s\n",line);
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
                        ac= fopen("approv","a");
                        fprintf(ac,"%s\n",line);
                    }else if (ch == '0'){
                            nc = fopen("notapprov","a");
                            fprintf(nc,"%s\n",line);
                        }
                    
                    while ((ch = getchar()) != '\n' && ch != EOF);
                }

                fclose(file);
                break;

    }
    
}

}