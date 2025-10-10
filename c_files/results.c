
#include<stdio.h>
void results(){
    char x;
    int y;
    printf("3.Results\n");
    printf("---------\n");
    printf("a.\n");
    printf("b.\n");
    printf("c.\n");
    printf("Enter Party Number: ");
    scanf(" %c",&x);
    printf("________________________________\n");
    switch(x){
        case 'a':
        printf("\n111\n");
        printf("----------\n");
        printf("1\n");
        printf("2\n");
        printf("3\n");
        printf("Enter Candidate Number To Get Their Results: ");
        scanf("%d",&y);
            switch(y){
                case 1:
                printf("reads function1\n");
                break;
                case 2:
                printf("reads function2\n");
                break;
                case 3:
                printf("reads function3\n");
                break;
                default:
                printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                break;
            }
            printf("________________________________\n");
        break;

        case 'b':
        
        printf("\n222\n");
        printf("----------\n");
        printf("1\n");
        printf("2\n");
        printf("3\n");
        printf("Enter Candidate Number To Get Their Results: ");
        scanf("%d",&y);
            switch(y){
                case 1:
                printf("reads function1\n");
                break;
                case 2:
                printf("reads function2\n");
                break;
                case 3:
                printf("reads function3\n");
                break;
                default:
                printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                break;
            }
            printf("________________________________\n");
        break;

        case 'c':
        printf("\n333\n");
        printf("---------\n");
        printf("1\n");
        printf("2\n");
        printf("3\n");
        printf("Enter Candidate Number To Get Their Results: ");
        scanf("%d",&y);
            switch(y){
                case 1:
                printf("reads function1\n");
                break;
                case 2:
                printf("reads function2\n");
                break;
                case 3:
                printf("reads function3\n");
                break;
                default:
                printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                break;
            }
            printf("________________________________\n");
        break;

        default:
        printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
        


    }
    printf("________________________________\n");

}
int main(){
    results();
    return 0;
}