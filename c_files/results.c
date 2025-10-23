void sum(){
    int count;
    FILE *fp = fopen("sum.txt","r");
    if(fp==NULL){
        printf("error");
    }else{
        fscanf(fp,"%d",&count);
        printf("\n\t\t\t\t\t\t\tTotal :- %d",count);
        fclose(fp);
    }
}
void sum1(){
    int count;
    FILE *fp = fopen("sum1.txt","r");
    if(fp==NULL){
        printf("error");
    }else{
        fscanf(fp,"%d",&count);
        printf("\n\t\t\t\t\t\t\tTotal :- %d",count);
        fclose(fp);
    }
}
void sum2(){
    int count;
    FILE *fp = fopen("sum2.txt","r");
    if(fp==NULL){
        printf("error");
    }else{
        fscanf(fp,"%d",&count);
        printf("\n\t\t\t\t\t\t\tTotal :- %d",count);
        fclose(fp);
    }
}


void party1(){
    FILE *fp = fopen("party1.txt","r");
    if(fp == NULL){
        perror("error");
    }else{
        int ch_code = '\0';
        while((ch_code = fgetc(fp)) != EOF){
            printf("%c",ch_code);

        }
    }
    
}

void party2(){
    FILE *fp = fopen("party2.txt","r");
    if(fp == NULL){
        perror("error");
    }else{
        int ch_code = '\0';
        while((ch_code = fgetc(fp)) != EOF){
            printf("%c",ch_code);

        }
    }
    
}

void party3(){
    FILE *fp = fopen("party3.txt","r");
    if(fp == NULL){
        perror("error");
    }else{
        int ch_code = '\0';
        while((ch_code = fgetc(fp)) != EOF){
            printf("%c",ch_code);

        }
    }
    
}

void district1(){
    FILE *fp = fopen("district1.txt","r");
    if(fp == NULL){
        perror("error");
    }else{
        int ch_code = '\0';
        while((ch_code = fgetc(fp)) != EOF){
            printf("%c",ch_code);

        }
    }
    
}

void district2(){
    FILE *fp = fopen("district2.txt","r");
    if(fp == NULL){
        perror("error");
    }else{
        int ch_code = '\0';
        while((ch_code = fgetc(fp)) != EOF){
            printf("%c",ch_code);

        }
    }
    
}

void district3(){
    FILE *fp = fopen("district3.txt","r");
    if(fp == NULL){
        perror("error");
    }else{
        int ch_code = '\0';
        while((ch_code = fgetc(fp)) != EOF){
            printf("%c",ch_code);

        }
    }
    
}

void candidate1(){
    FILE *fp = fopen("candidate1.txt","r");
    if(fp == NULL){
        perror("error");
    }else{
        int ch_code = '\0';
        while((ch_code = fgetc(fp)) != EOF){
            printf("%c",ch_code);

        }
    }
    
}

void candidate2(){
    FILE *fp = fopen("candidate2.txt","r");
    if(fp == NULL){
        perror("error");
    }else{
        int ch_code = '\0';
        while((ch_code = fgetc(fp)) != EOF){
            printf("%c",ch_code);

        }
    }
    
}

void candidate3(){
    FILE *fp = fopen("candidate3.txt","r");
    if(fp == NULL){
        perror("error");
    }else{
        int ch_code = '\0';
        while((ch_code = fgetc(fp)) != EOF){
            printf("%c",ch_code);

        }
    }
    
}

void function(){
    int count,count1,count2;
    FILE *fp = fopen("sum.txt","r");
    FILE *fp1 = fopen("sum1.txt","r");
    FILE *fp2 = fopen("sum2.txt","r");
    if(fp==NULL,fp1==NULL,fp2==NULL){
        printf("error");
    }else{
        fscanf(fp,"%d",&count);
        fscanf(fp1,"%d",&count1);
        fscanf(fp2,"%d",&count2);
        
        if(count>count1){
        	if(count>count2){
        		printf("\t\t\t\t\t\t\tAnura is selected\n");//here reads candidate name file
			}else{
				printf("\t\t\t\t\t\t\tMahinda is selected\n");//here reads candidate name file
			}
		}else if(count1>count2){
			printf("\t\t\t\t\t\t\tSajith is selected\n");//here reads candidate name file
		}
		
		}
		fclose(fp);
		fclose(fp1);
		fclose(fp2);
    }


void results(){
    char x,f;
    int y;
    printf("\t\t\t\t\t\t\t3.Results");
    printf("\n\t\t\t\t\t\t-------------------------\n");
    printf("\t\t\t\t\t\t\ta.");
    party1();
    printf("\n\t\t\t\t\t\t\tb.");
    party2();
    printf("\n\t\t\t\t\t\t\tc.");
    party3();
    
    printf("\n\t\t\t\t\t\t\td.Back");
    printf("\n\n");
    printf("\t\t\t\t\t\tEnter Party Number: ");
    scanf(" %c",&x);
    printf("\t\t\t\t\t__________________________________________\n");
    switch(x){
        case 'a':
            printf("\n\t\t\t\t\t\t\t");
            party1();
            printf("\n\t\t\t\t\t\t-------------------------\n");
            printf("\t\t\t\t\t\t\t1.");
            district1();
            printf("\n\t\t\t\t\t\t\t2.");
            district2();
            printf("\n\t\t\t\t\t\t\t3.");
            district3();
            printf("\n\t\t\t\t\t\t\t4.back\n\n");
            printf("\t\t\t\t\t\tEnter District: ");
            scanf("%d",&y);
            printf("\t\t\t\t\t__________________________________________\n");
                switch(y){
                    case 1:
                        printf("\n\t\t\t\t\t\t\t");
           				party1();
           				printf("-");
           				district1();
            			printf("\n\t\t\t\t\t\t-------------------------\n");
            			printf("\t\t\t\t\t\t\t1.");
            			candidate1();
            			printf("\n\t\t\t\t\t\t\t2.");
            			candidate2();
            			printf("\n\t\t\t\t\t\t\t3.");
            			candidate3();
            			printf("\n\t\t\t\t\t\t\t4.View eligible candidates.");
            			printf("\n\t\t\t\t\t\t\t5.back\n\n");
            			printf("\t\t\t\t\tEnter Candidate Number To Get Their Results: ");
            			scanf("%d",&y);
            			printf("\t\t\t\t\t__________________________________________\n");
            			switch(y){
                			case 1:
                        		sum();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
								break;	
                    		case 2:
                        		sum1();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 3:
                        		sum2();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 4:
                    			function();
                    			printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
								break;
							case 5:
                        		printf("goes to previous menu\n");
                       			break;
                    		default:
                        		printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                        		break;
            				}		
                        break;
                    case 2:
                        printf("\n\t\t\t\t\t\t\t");
           				party1();
           				printf("-");
           				district2();
            			printf("\n\t\t\t\t\t\t-------------------------\n");
            			printf("\t\t\t\t\t\t\t1.");
            			candidate1();
            			printf("\n\t\t\t\t\t\t\t2.");
            			candidate2();
            			printf("\n\t\t\t\t\t\t\t3.");
            			candidate3();
            			printf("\n\t\t\t\t\t\t\t4.View eligible candidates.");
            			printf("\n\t\t\t\t\t\t\t5.back\n\n");
            			printf("\t\t\t\t\tEnter Candidate Number To Get Their Results: ");
            			scanf("%d",&y);
            			printf("\t\t\t\t\t__________________________________________\n");
            			switch(y){
                			case 1:
                        		sum();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 2:
                        		sum1();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 3:
                        		sum2();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 4:
								function();
								printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
								break;
							case 5:
                        		printf("goes to previous menu\n");
                       			break;
                    		default:
                        		printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                        		break;
            				};
                        break;
                    case 3:
                        printf("\n\t\t\t\t\t\t\t");
           				party1();
           				printf("-");
           				district3();
            			printf("\n\t\t\t\t\t\t-------------------------\n");
            			printf("\t\t\t\t\t\t\t1.");
            			candidate1();
            			printf("\n\t\t\t\t\t\t\t2.");
            			candidate2();
            			printf("\n\t\t\t\t\t\t\t3.");
            			candidate3();
            			printf("\n\t\t\t\t\t\t\t4.View eligible candidates.");
            			printf("\n\t\t\t\t\t\t\t5.back\n\n");
            			printf("\t\t\t\t\tEnter Candidate Number To Get Their Results: ");
            			scanf("%d",&y);
            			printf("\t\t\t\t\t__________________________________________\n");
            			switch(y){
                			case 1:
                        		sum();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 2:
                        		sum1();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 3:
                        		sum2();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 4:
                    			function();
                    			printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                    			break;
							case 5:
                        		printf("goes to previous menu\n");
                       			break;
                    		default:
                        		printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                        		break;
            				}
                        break;
                    case 4:
                    	printf("\n----------------------------");
                    	printf("\n\n");
                        results();
                        break;
                    default:
                        printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                        break;
            }
            printf("\n________________________________\n");
        break;

        case 'b':
            printf("\n\t\t\t\t\t\t\t");
            party2();
            printf("\n\t\t\t\t\t\t-------------------------\n");
            printf("\t\t\t\t\t\t\t1.");
            district1();
            printf("\n\t\t\t\t\t\t\t2.");
            district2();
            printf("\n\t\t\t\t\t\t\t3.");
            district3();
            printf("\n\t\t\t\t\t\t\t4.back\n");
            printf("\t\t\t\t\t\tEnter District: ");
            scanf("%d",&y);
            printf("\t\t\t\t\t__________________________________________\n");
                switch(y){
                    case 1:
                        printf("\n\t\t\t\t\t\t\t");
           				party2();
           				printf("-");
           				district1();
            			printf("\n\t\t\t\t\t\t-------------------------\n");
            			printf("\t\t\t\t\t\t\t1.");
            			candidate1();
            			printf("\n\t\t\t\t\t\t\t2.");
            			candidate2();
            			printf("\n\t\t\t\t\t\t\t3.");
            			candidate3();
            			printf("\n\t\t\t\t\t\t\t4.View eligible candidates.");
            			printf("\n\t\t\t\t\t\t\t5.back\n\n");
            			printf("\t\t\t\t\tEnter Candidate Number To Get Their Results: ");
            			scanf("%d",&y);
            			printf("\t\t\t\t\t__________________________________________\n");
            			switch(y){
                			case 1:
                        		sum();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 2:
                        		sum1();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 3:
                        		sum2();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 4:
                    			function();
                    			printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                    			break;
							case 5:
                        		printf("goes to previous menu\n");
                       			break;
                    		default:
                        		printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                        		break;
            				}		
                        break;
                        
                    case 2:
                        printf("\n\t\t\t\t\t\t\t");
           				party2();
           				printf("-");
           				district2();
            			printf("\n\t\t\t\t\t\t-------------------------\n");
            			printf("\t\t\t\t\t\t\t1.");
            			candidate1();
            			printf("\n\t\t\t\t\t\t\t2.");
            			candidate2();
            			printf("\n\t\t\t\t\t\t\t3.");
            			candidate3();
            			printf("\n\t\t\t\t\t\t\t4.View eligible candidates.");
            			printf("\n\t\t\t\t\t\t\t5.back\n\n");
            			printf("\t\t\t\t\tEnter Candidate Number To Get Their Results: ");
            			scanf("%d",&y);
            			printf("\t\t\t\t\t__________________________________________\n");
            			switch(y){
                			case 1:
                        		sum();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 2:
                        		sum1();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 3:
                        		sum2();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 4:
                    			function();
                    			printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                    			break;
							case 5:
                        		printf("goes to previous menu\n");
                       			break;
                    		default:
                        		printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                        		break;
            				}		
                        break;
                    case 3:
                        printf("\n\t\t\t\t\t\t\t");
           				party2();
           				printf("-");
           				district3();
            			printf("\n\t\t\t\t\t\t-------------------------\n");
            			printf("\t\t\t\t\t\t\t1.");
            			candidate1();
            			printf("\n\t\t\t\t\t\t\t2.");
            			candidate2();
            			printf("\n\t\t\t\t\t\t\t3.");
            			candidate3();
            			printf("\n\t\t\t\t\t\t\t4.View eligible candidates.");
            			printf("\n\t\t\t\t\t\t\t5.back\n\n");
            			printf("\t\t\t\t\tEnter Candidate Number To Get Their Results: ");
            			scanf("%d",&y);
            			printf("\t\t\t\t\t__________________________________________\n");
            			switch(y){
                			case 1:
                        		sum();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 2:
                        		sum1();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 3:
                        		sum2();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 4:
                    			function();
                    			printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                    			break;
							case 5:
                        		printf("goes to previous menu\n");
                       			break;
                    		default:
                        		printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                        		break;
            				}		
                        break;
                    case 4:
                    	printf("\n----------------------------");
                        printf("\n\n");
                        results();
                        break;
                    default:
                        printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                        break;
            }
            printf("\n________________________________\n");
        break;

        case 'c':
             printf("\n\t\t\t\t\t\t\t");
            party3();
            printf("\n\t\t\t\t\t\t-------------------------\n");
            printf("\t\t\t\t\t\t\t1.");
            district1();
            printf("\n\t\t\t\t\t\t\t2.");
            district2();
            printf("\n\t\t\t\t\t\t\t3.");
            district3();
            printf("\n\t\t\t\t\t\t\t4.back\n");
            printf("\t\t\t\t\t\tEnter District: ");
            scanf("%d",&y);
            printf("\t\t\t\t\t__________________________________________\n");
                switch(y){
                    case 1:
                        printf("\n\t\t\t\t\t\t\t");
           				party3();
           				printf("-");
           				district1();
            			printf("\n\t\t\t\t\t\t-------------------------\n");
            			printf("\t\t\t\t\t\t\t1.");
            			candidate1();
            			printf("\n\t\t\t\t\t\t\t2.");
            			candidate2();
            			printf("\n\t\t\t\t\t\t\t3.");
            			candidate3();
            			printf("\n\t\t\t\t\t\t\t4.View eligible candidates.");
            			printf("\n\t\t\t\t\t\t\t5.back\n\n");
            			printf("\t\t\t\t\tEnter Candidate Number To Get Their Results: ");
            			scanf("%d",&y);
            			printf("\t\t\t\t\t__________________________________________\n");
            			switch(y){
                			case 1:
                        		sum();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 2:
                        		sum1();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 3:
                        		sum2();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 4:
                    			function();
                    			printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                    			break;
							case 5:
                        		printf("goes to previous menu\n");
                       			break;
                    		default:
                        		printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                        		break;
            				}		
                        break;
                    case 2:
                        printf("\n\t\t\t\t\t\t\t");
           				party3();
           				printf("-");
           				district2();
            			printf("\n\t\t\t\t\t\t-------------------------\n");
            			printf("\t\t\t\t\t\t\t1.");
            			candidate1();
            			printf("\n\t\t\t\t\t\t\t2.");
            			candidate2();
            			printf("\n\t\t\t\t\t\t\t3.");
            			candidate3();
            			printf("\n\t\t\t\t\t\t\t4.View eligible candidates.");
            			printf("\n\t\t\t\t\t\t\t5.back\n\n");
            			printf("\t\t\t\t\tEnter Candidate Number To Get Their Results: ");
            			scanf("%d",&y);
            			printf("\t\t\t\t\t__________________________________________\n");
            			switch(y){
                			case 1:
                        		sum();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 2:
                        		sum1();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 3:
                        		sum2();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 4:
                    			function();
                    			printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                    			break;
							case 5:
                        		printf("goes to previous menu\n");
                       			break;
                    		default:
                        		printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                        		break;
            				}		
                        break;
                    case 3:
                        printf("\n\t\t\t\t\t\t\t");
           				party3();
           				printf("-");
           				district3();
            			printf("\n\t\t\t\t\t\t-------------------------\n");
            			printf("\t\t\t\t\t\t\t1.");
            			candidate1();
            			printf("\n\t\t\t\t\t\t\t2.");
            			candidate2();
            			printf("\n\t\t\t\t\t\t\t3.");
            			candidate3();
            			printf("\n\t\t\t\t\t\t\t4.View eligible candidates.");
            			printf("\n\t\t\t\t\t\t\t5.back\n\n");
            			printf("\t\t\t\t\tEnter Candidate Number To Get Their Results: ");
            			scanf("%d",&y);
            			printf("\t\t\t\t\t__________________________________________\n");
            			switch(y){
                			case 1:
                        		sum();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 2:
                        		sum1();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 3:
                        		sum2();
                        		printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                        		break;
                    		case 4:
                    			function();
                    			printf("\n\n\t\t\t\t\t\tPress 'y' to go to the Main Menu :");
                        		scanf(" %c",&f);
                        		if(f=='y'){
                        			printf("\t\t\t\t\t__________________________________________\n\n");
                        			results();
								}
                    			break;
							case 5:
                        		printf("goes to previous menu\n");
                       			break;
                    		default:
                        		printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                        		break;
            				}		
                        break;
                    case 4:
                    	printf("\n----------------------------");
                        printf("\n\n");
                        results();
                        
                        break;    
                    default:
                        printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
                        break;
            }
            printf("\n________________________________\n");
        break;
		
        case'd':
            printf("goes to previous menu\n");
            break;

        default:
            printf("\t!!!--INVALID NUMBER.PLEASE ENTER CORRECT NUMBER--!!!\n");
        


    }
    printf("\n________________________________\n");

}