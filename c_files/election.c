#include<stdio.h>
void election2(){
    float a;
    int b;
    printf("1.JVP\n2.UNP\n3.SJB\n");
    printf("enter a number: ");
    scanf("%d",&b);
    switch(b){
        case 1:
        printf("1.JVP\n");
        printf("1.1\n");
        printf("1.2\n");
        printf("1.3\n");
        break;
        
        case 2:
        printf("2.UNP\n");
        printf("1.1\n");
        printf("1.2\n");
        printf("1.3\n");
        break;
        
        case 3:
        printf("3.STB\n");
        printf("1.1\n");
        printf("1.2\n");
        printf("1.3\n");
        break;
        default:
        printf("enter correct number");
        break;
        
        
        
    }
}
void election(){
    int x,Id;
    printf("Election\n\n");
    printf("Select your category\n1.voter\n2.candidates\n");
    printf("Enter the number: ");
    scanf("%d",&x);

    switch(x){
        case 1:
        printf("Enter your id number: ");
        scanf("%d",&Id);
        election2();

        
        break;   
       
        case 2:
        printf("Enter your id number: ");
        scanf("%d",&Id);
        election2();
        
        break;
        default:
        printf("enter correct number");
    }
   
}
int main(){
    election();
}
