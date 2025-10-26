#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Function to update votes in a file
void updateVote(const char *partyFile, const char *candidateName) {
    FILE *fp = fopen(partyFile, "r");
    if (!fp) {
        printf("Error: Cannot open file\n", partyFile);
        return;
    }

    char lines[MAX][100];
    int count = 0;
    char partyName[50];
    fgets(partyName, sizeof(partyName), fp); // first line = party name
    strcpy(lines[count++], partyName);

    char name[50];
    int votes;

    // read and update
    while (fscanf(fp, "%s %d", name, &votes) == 2) {
        if (strcmp(name, candidateName) == 0)
            votes++; // add vote
        sprintf(lines[count++], "%s %d\n", name, votes);
    }

    fclose(fp);

    // rewrite file
    fp = fopen(partyFile, "w");
    int i;
    for (i = 0; i < count; i++)
        fputs(lines[i], fp);
    fclose(fp);

    printf("\nYou successfully voted for %s \n", candidateName);
}

int main() {
    int choice;
    int candidateNum;
    char candidateName[50];
    char candidateList[MAX][50];
    int totalCandidates = 0;

    printf("\n==== Welcome to Voting System ====\n");
    printf("Parties:\n");
    printf("1. jvp\n");
    printf("2. sjb\n");
    printf("3. unp\n");
    printf("4. slp\n");
    printf("5. ghp\n");

    printf("\nEnter your party choice : ");
    scanf("%d", &choice);

    char partyFile[20];
    FILE *fp;
    char name[50];
    int votes;

    // Switch to select correct file
    switch (choice) {
        case 1:
            strcpy(partyFile, "party1.txt");
            printf("\n--- Candidates ---\n");
            break;
        case 2:
            strcpy(partyFile, "party2.txt");
            printf("\n--- Candidates ---\n");
            break;
        case 3:
            strcpy(partyFile, "party3.txt");
            printf("\n--- Candidates ---\n");
            break;
        case 4:
            strcpy(partyFile, "party4.txt");
            printf("\n--- Candidates ---\n");
            break;
        case 5:
            strcpy(partyFile, "party5.txt");
            printf("\n--- Candidates ---\n");
            break;
        default:
            printf("======INVALID INPUT======\n");
            return 0;
    }

    fp = fopen(partyFile, "r");
    if (!fp) {
        printf("Error: Cannot open file\n", partyFile);
        return 1;
    }

    char line[100];
    fgets(line, sizeof(line), fp); // skip first line (party name)
    int number = 1;

    // show candidates with numbers
    while (fscanf(fp, "%s %d", name, &votes) == 2) {
        printf("%d. %s\n", number, name);
        strcpy(candidateList[number - 1], name); // store name by index
        number++;
    }
    totalCandidates = number - 1;
    fclose(fp);

    printf("\nEnter candidate number to vote for: ");
    scanf("%d", &candidateNum);

    if (candidateNum < 1 || candidateNum > totalCandidates) {
        printf("======INVALID CANDIDATE NUMBER======\n");
        return 0;
    }

    strcpy(candidateName, candidateList[candidateNum - 1]);

    updateVote(partyFile, candidateName);

    printf("\nThank you! Your vote has been cast successfully.\n");
    return 0;
}
