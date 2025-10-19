#include <stdio.h>
#include <string.h>
FILE *ac;
FILE *nc;
FILE *file;
char name_from_file[50], avg_from_file[10];
char name_from_user[50], avg_from_user[10];
char ch;
char line[256];
int found = 0,x,c;
int main(){

printf("\t\t\t\t\t1.Vorting\n");
printf("\t\t\t\t\t2.Result\n");
printf("\t\t\t\t\t3.Addmin\n\n");

printf("Enter Your Chose: ");
scanf("%d",&x);
switch(x){
    case 1:
    printf("Enter Your Username (Your NIC): ");
    scanf("%s", name_from_user);

    printf("Enter Your Passward: ");
    scanf("%s", avg_from_user);

    file = fopen("my.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; 
    }

    
    while(fscanf(file, "%s%s", name_from_file, avg_from_file) == 2){

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

    case 2:
    printf("Enter Your Username (Your NIC): ");
    scanf("%s", name_from_user);

    printf("Enter Your Passward: ");
    scanf("%s", avg_from_user);

    file = fopen("my.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; 
    }

    
    while(fscanf(file, "%s%s", name_from_file, avg_from_file) == 2){
        
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

    case 3:

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
                file = fopen("my.txt", "r");//candidate details file
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

        case 2:



                file = fopen("my.txt", "r");//voters details file
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



                file = fopen("my.txt", "r");//party file
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

    }
}
    
}




