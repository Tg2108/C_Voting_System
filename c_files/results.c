#include<stdio.h>
#include<string.h>

void partyone(){
	
	FILE *file;
    char line[100];
    char Word1[100];
    char partyname[100];
    int vote;
    int Number = 1;

    file = fopen("partyone.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        
    }
	
   	if (fgets(line, sizeof(line), file) != NULL) {
        if (sscanf(line, "%99s", partyname) == 1) {
            printf("\n\t\tParty: %s\n", partyname);
        }
    }
   	
    while (fgets(line, sizeof(line), file) != NULL) {
       
        
        if (sscanf(line, "%99s %d", Word1, &vote) == 2) {
            printf("\n\t\t\t%d: %s %d", Number, Word1,vote);
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

    file = fopen("partytwo.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        
    }
	if (fgets(line, sizeof(line), file) != NULL) {
        if (sscanf(line, "%99s", partyname) == 1) {
            printf("\n\n\t\tParty: %s\n", partyname);
        }
    }
   
    while (fgets(line, sizeof(line), file) != NULL) {
       
        
        if (sscanf(line, "%99s %d", Word1, &vote) == 2) {
            printf("\n\t\t\t%d: %s %d", Number, Word1,vote);
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

    file = fopen("partythree.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        
    }
	if (fgets(line, sizeof(line), file) != NULL) {
        if (sscanf(line, "%99s", partyname) == 1) {
            printf("\n\n\t\tParty: %s\n", partyname);
        }
    }
   
    while (fgets(line, sizeof(line), file) != NULL) {
       
        
        if (sscanf(line, "%99s %d", Word1, &vote) == 2) {
            printf("\n\t\t\t%d: %s %d", Number, Word1,vote);
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

    file = fopen("partyfour.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        
    }
	if (fgets(line, sizeof(line), file) != NULL) {
        if (sscanf(line, "%99s", partyname) == 1) {
            printf("\n\n\t\tParty: %s\n", partyname);
        }
    }
   
    while (fgets(line, sizeof(line), file) != NULL) {
       
        
        if (sscanf(line, "%99s %d", Word1, &vote) == 2) {
            printf("\n\t\t\t%d: %s %d", Number, Word1,vote);
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

    file = fopen("partyfive.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        
    }
	if (fgets(line, sizeof(line), file) != NULL) {
        if (sscanf(line, "%99s", partyname) == 1) {
            printf("\n\n\t\tParty: %s\n", partyname);
        }
    }
   
    while (fgets(line, sizeof(line), file) != NULL) {
       
        
        if (sscanf(line, "%99s %d", Word1, &vote) == 2) {
            printf("\n\t\t\t%d: %s %d", Number, Word1,vote);
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
        "partyone.txt",
        "partytwo.txt",
        "partythree.txt",
        "partyfour.txt",
        "partyfive.txt"
    };
    
    struct Record records[50]; // assume max 50 entries total
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

        // first line: party name
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

    printf("\t\tSelected candidates:\n");
    printf("\t\t----------------------\n");
    for (i = 0; i < 5 && i < count; i++) {
        printf("\t\t%d. %s (%s) - %d\n", i + 1, records[i].name, records[i].party, records[i].value);
    }

    
}
int main(){
	char a;
	printf("\t\t\t========== RESULTS TABLE ==========");
	printf("\n\t\t-------------------------------------------------------------\n");
	partyone();
	partytwo();
	partythree();
	partyfour();
	partyfive();
	printf("\n\t\t-------------------------------------------------------------\n");
	printf("\n\n\tEnter 'e' to view selected candidates and Enter 'b' to go to the Main Menu: ");
	scanf(" %c",&a);
		if(a=='e'){
			max();
		}
		else{
			printf("INVALID INPUT-TRY AGAIN");
	}
	
	return 0;
}