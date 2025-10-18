#include <stdio.h>
#include <string.h>
FILE *fp1;
char name_from_file[50], avg_from_file[10];
char name_from_user[50], avg_from_user[10];
int found = 0,x;
int ex1(){

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

    fp1 = fopen("my.txt", "r");
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

    case 2:
    printf("Enter Your Username (Your NIC): ");
    scanf("%s", name_from_user);

    printf("Enter Your Passward: ");
    scanf("%s", avg_from_user);

    fp1 = fopen("my.txt", "r");
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

    case 3:
    printf("Enter Your Username (Your NIC): ");
    scanf("%s", name_from_user);

    printf("Enter Your Passward: ");
    scanf("%s", avg_from_user);

    



    
        
        break;

}


}

