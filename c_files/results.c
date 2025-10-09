#include<stdio.h>
void results(){
    char x;
    int y;
    printf("3.Results\n");
    printf("a.\n");
    printf("b.\n");
    printf("c.\n");
    printf("Enter number from party: ");
    scanf(" %c",&x);
    switch(x){
        case 'a':
        printf("111\n");
        printf("1\n");
        printf("2\n");
        printf("3\n");
        printf("Enter ONE CANDIDATE TO GET RESULTS: ");
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
                printf("enter correct number\n");
                break;
            }
        break;

        case 'b':
        
        printf("222\n");
        printf("1\n");
        printf("2\n");
        printf("3\n");
        printf("Enter ONE CANDIDATE TO GET RESULTS: ");
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
                printf("enter correct number\n");
                break;
            }
        break;

        case 'c':
        printf("333\n");
        printf("1\n");
        printf("2\n");
        printf("3\n");
        printf("Enter ONE CANDIDATE TO GET RESULTS: ");
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
                printf("enter correct number\n");
                break;
            }
        break;

        default:
        printf("ENTER CORRECT NUMBER\n");
        


    }

}
int main(){
    results();
    return 0;
}