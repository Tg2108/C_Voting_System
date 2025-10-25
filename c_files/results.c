#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
void partyone(){
	
	FILE *file;
    char line[100];
    char Word1[100];
    char partyname[100];
    int vote;
    int Number = 1;

    file = fopen("party1.txt", "r");
    if (file == NULL) {
        printf("No Party\n");
        
    }
	
   	if (fgets(line, sizeof(line), file) != NULL) {
        if (sscanf(line, "%99s", partyname) == 1) {
            printf("\n\t\t\t\t\tParty: %s\n", partyname);
        }
    }
   	
    while (fgets(line, sizeof(line), file) != NULL) {
       
        
        if (sscanf(line, "%99s %d", Word1, &vote) == 2) {
            printf("\n\t\t\t\t\t\t%d: %s \t%d", Number, Word1,vote);
            Number++;
        }
    }

    fclose(file);
}

void partytwo(){
	
	FILE *file;
    char line[100];
    char Word1[100];
    char partyname[100];
    int vote;
    int Number = 1;

    file = fopen("party2.txt", "r");
    if (file == NULL) {
        printf("No Party\n");
        
    }
	if (fgets(line, sizeof(line), file) != NULL) {
        if (sscanf(line, "%99s", partyname) == 1) {
            printf("\n\n\t\t\t\t\tParty: %s\n", partyname);
        }
    }
   
    while (fgets(line, sizeof(line), file) != NULL) {
       
        
        if (sscanf(line, "%99s %d", Word1, &vote) == 2) {
            printf("\n\t\t\t\t\t\t%d: %s \t%d", Number, Word1,vote);
            Number++;
        }
    }

    fclose(file);
}
void partythree(){
	
	FILE *file;
    char line[100];
    char Word1[100];
    char partyname[100];
    int vote;
    int Number = 1;

    file = fopen("party3.txt", "r");
    if (file == NULL) {
        printf("No Party\n");
        
    }
	if (fgets(line, sizeof(line), file) != NULL) {
        if (sscanf(line, "%99s", partyname) == 1) {
            printf("\n\n\t\t\t\t\tParty: %s\n", partyname);
        }
    }
   
    while (fgets(line, sizeof(line), file) != NULL) {
       
        
        if (sscanf(line, "%99s %d", Word1, &vote) == 2) {
            printf("\n\t\t\t\t\t\t%d: %s \t%d", Number, Word1,vote);
            Number++;
        }
    }

    fclose(file);
}
void partyfour(){
	
	FILE *file;
    char line[100];
    char Word1[100];
    char partyname[100];
    int vote;
    int Number = 1;

    file = fopen("party4.txt", "r");
    if (file == NULL) {
        printf("No Party\n");
        
    }
	if (fgets(line, sizeof(line), file) != NULL) {
        if (sscanf(line, "%99s", partyname) == 1) {
            printf("\n\n\t\t\t\t\tParty: %s\n", partyname);
        }
    }
   
    while (fgets(line, sizeof(line), file) != NULL) {
       
        
        if (sscanf(line, "%99s %d", Word1, &vote) == 2) {
            printf("\n\t\t\t\t\t\t%d: %s \t%d", Number, Word1,vote);
            Number++;
        }
    }

    fclose(file);
}
void partyfive(){	
	FILE *file;
    char line[100];
    char Word1[100];
    char partyname[100];
    int vote;
    int Number = 1;
    file = fopen("party5.txt", "r");
    if (file == NULL) {
        printf("No Party\n");     
    }
	if (fgets(line, sizeof(line), file) != NULL) {
        if (sscanf(line, "%99s", partyname) == 1) {
            printf("\n\n\t\t\t\t\tParty: %s\n", partyname);
        }
    }
    while (fgets(line, sizeof(line), file) != NULL) {
       
        
        if (sscanf(line, "%99s %d", Word1, &vote) == 2) {
            printf("\n\t\t\t\t\t\t%d: %s \t%d", Number, Word1,vote);
            Number++;
        }
    }
    fclose(file);
}
struct Record {
    char name[20];
    char party[20];
    int value;
    
};
void max() {
    char *file[] = {
        "party1.txt",
        "party2.txt",
        "party3.txt",
        "party4.txt",
        "party5.txt"
    };
    struct Record records[50];
    int count = 0;
    int i,j;
    for (i = 0; i < 5; i++) {
        FILE *fp = fopen(file[i], "r");
        if (!fp) {
            printf("Cannot open file %s\n", file[i]);
            continue;
        }
        char party[20], name[20];
        int value;    
        fscanf(fp, "%s", party);      
        while (fscanf(fp, "%s %d", name, &value) == 2) {
            strcpy(records[count].party, party);
            strcpy(records[count].name, name);
            records[count].value = value;
            count++;
        }
        fclose(fp);
    }   
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (records[j].value > records[i].value) {
                struct Record temp = records[i];
                records[i] = records[j];
                records[j] = temp;
            }
        }
    }
    printf("\n\t\t\t\t\t==========SELECTED CANDIDATES==========");
    printf("\n\t\t\t------------------------------------------------------------------\n");
    printf("\t\t\t\t\t****** Congratulations ******\n");
    for (i = 0; i < 5 && i < count; i++) {
        printf("\t\t\t\t\t%d. %s (%s)  \t- %d\n", i + 1, records[i].name, records[i].party, records[i].value);
    }
}
int main(){
	char a;
	pa();
	printf("\t\t\t\t\t========== RESULTS TABLE ==========");
	printf("\n\t\t\t------------------------------------------------------------------\n");
	partyone();
	partytwo();
	partythree();
	partyfour();
	partyfive();
	printf("\n\t\t\t------------------------------------------------------------------\n");
	
		while(100){
			printf("\n\n\t\tEnter 'v' to view selected candidates or Enter 'b' to go to the Main Menu: ");
			scanf(" %c",&a);
			if(a=='v'){
				max();
				continue;
			}
			else if(a=='b'){
				printf("Goes to the main menu");
				break;
			}
			else{
				printf("\n\t\t\t\t\t=========INVALID INPUT=========");
				continue;
			}
	}	
	return 0;
}