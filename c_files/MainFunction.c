#include <stdio.h>
//int registstion();
int x,nic;
char pass[10];

int main(){

FILE *fp;


printf("\t1.Candidates\n");
printf("\t2.Voters\n");
printf("\t3.Political Party\n");
printf("\t4.Addmin\n\n");

printf("Enter Your Chose: ");
scanf("%d",&x);

switch(x){
    case 1:
        printf("Enter Your Username: ");
        scanf("%d",&nic);

        printf("Enter Your Passward: ");
        scanf(" %s",pass);

        fp=fopen("output.txt","a");

        fputs(pass,fp);



       /* if(E==nic && J==pass){
            printf("Your Sucsussfull Loging ! ");
           //printf("colseing date");
            //printf("Spetal note");
        }else{
            printf("Incorecct Your Username !")
        }*/

        break;

    case 2:
        printf("Enter Your Username: ");
        scanf("%d",&nic);
        printf("Enter Your Passward: ");
        scanf(" %s",pass);

       /*if(E==nic && J==pass){
            printf("Your Sucsussfull Loging ! ");
           // printf("colseing date");
            //printf("Spetal note");
        }else{
            printf("Incorecct Your Username !")
        }*/

        break;

    case 3:
        printf("Enter Your Username: ");
        scanf("%d",&nic);
        printf("Enter Your Passward: ");
        scanf(" %s",pass);
        
        /*if(E==nic && J==pass){
            printf("Your Sucsussfull Loging ! ");
           // printf("colseing date");
            //printf("Spetal note");
        }else{
            printf("Incorecct Your Username !")
        }*/

        break;

    case 4:
        printf("Enter Your Username: ");
        scanf("%d",&nic);
        printf("Enter Your Passward: ");
        scanf(" %s",pass);

       /* if(E==nic && J==pass){
            printf("Your Sucsussfull Loging ! ");
           // printf("colseing date");
            //printf("Spetal note");
        }else{
            printf("Incorecct Your Username !")
        }*/
       

        break;
}


}

//#include "registertion.c"