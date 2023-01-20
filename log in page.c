
#include <stdio.h>
#include<string.h>
int input();

int main()
{
	printf("PLEASE LOGIN HERE\n\n");
	char id[50];

User:

printf("Enter your id:");

scanf("%s", &id);

if (strcmp(id,"aryan")==0)

{

printf("Id is correct\n");

}

else

{

printf("You have enetred an invalid user id\nPlease enter id again\n");

goto User;

}

char pass[50];

pass:

printf("Enter your password: ");

scanf("%s", &pass);

if(strcmp(pass,"12345")==0)

{

printf("You have successfully logged in \n\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

}

		int ch2,ch3;
	float ch4;
	char ch1[78];
	
	printf("1.ENTER YOUR INFORMATION\n");
	printf("2.WATCH YOUR INFORMATION\n");
	printf("3.QUITE\n");
	int choice, num;
	choice:
	printf("ENTER YOUR CHOICE:");
	
	
	choice = input();
	
	switch (choice) {
	char hlo,hii;
	hlo:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&hii);
	if(hii=='y' || hii=='Y')
	{
		goto choice1;
	}
	else
	{
	    goto choice2;	
	}
	  char a,b;
	a:
		

		
		
	case 1: {
			printf("\nPLEASE SELECT DOCUMENT NUMBER\n\n");
			printf("1.SSC Marksheet\n");
			printf("2.HSC Marksheet\n");
			printf("3.GUJCET Marksheet\n");
			printf("4.JEE/NEET Marksheet\n");
			printf("5.Adhar card\n");
			printf("6.pan card\n");
			printf("7.Passport \n");
			printf("8.Debit card\n");
			printf("9.Driving licence\n\n");
		    
		    int choice1;
		    choice1:
		    printf("ENTER YOUR CHOICE fOR DOCUMENT:");
		    scanf("%d",&choice1);
			if(choice1==1)
			{
				printf("\nENTER YOUR NAME:\n");
				scanf("%s",&ch1);
				printf("ENTER YOUR SIT NO:\n");
				scanf("%d",&ch2);
				printf("ENTER YOUR TOTAL MARKS:\n");
				scanf("%d",&ch3);
				printf("ENTER YOUR TOTAL PERCENTAGE:\n\n");
				scanf("%f",&ch4);
				printf("Case Name%s\n",ch1);
					printf("Case Sit NO:%d\n",ch2);
					printf("Case Marks%d\n",ch3);
					printf("Case perc%f\n",ch4);
				
				
				goto hlo;
			 } 
			 else if(choice1==2)
			 {
			 	printf("\nENTER YOUR NAME:\n");
			 	scanf("%s",&ch1);
				printf("ENTER YOUR SIT NO:\n");
				scanf("%d",&ch2);
				printf("ENTER YOUR TOTAL MARKS:\n");
				scanf("%d",&ch3);
				printf("ENTER YOUR TOTAL PERCENTAGE:\n\n");
				scanf("%f",&ch4);
				printf("%s\n",ch1);
					printf("%d\n",ch2);
					printf("%d\n",ch3);
					printf("%f\n",ch4);
				goto hlo;
			 }
			  else if(choice1==3)
			 {
			 	printf("\nENTER YOUR NAME:\n");
			 	scanf("%s",&ch1);
				printf("ENTER YOUR SIT NO:\n");
				scanf("%d",&ch2);
				printf("ENTER YOUR TOTAL MARKS:\n");
				scanf("%d",&ch3);
				printf("ENTER YOUR TOTAL PERCENTAGE:\n\n");
				scanf("%f\n",&ch4);
					printf("%s\n",ch1);
					printf("%d\n",ch2);
					printf("%d\n",ch3);
					printf("%f\n",ch4);
				goto hlo;
			 }
			  else if(choice1==4)
			 {
			 	printf("\nENTER YOUR NAME:\n");
			 	scanf("%s",&ch1);
				printf("ENTER YOUR SIT NO:\n");
				scanf("%d",&ch2);
				printf("ENTER YOUR TOTAL MARKS:\n");
				scanf("%d",&ch3);
				printf("ENTER YOUR TOTAL PERCENTAGE:\n\n");
				scanf("%f",&ch4);
				printf("%s\n",ch1);
					printf("\n%d",ch2);
					printf("%d\n",ch3);
					printf("%f\n",ch4);
				goto hlo;
			 }
			  else if(choice1==5)
			 {
			 	printf("ENTER YOUR NAME:\n");
			 	scanf("%s",&ch1);
				printf("\nENTER YOUR ADHAR CARD NO.:\n");
				scanf("%d",&ch2);
				printf("%s\n",ch1);
					printf("\n%d",ch2);
				goto hlo;
			 }
			  else if(choice1==6)
			 {
			 	printf("\nENTER YOUR NAME:\n");
			 	scanf("%s",&ch1);
				printf("\nENTER YOUR PAN CARD NO.:\n");
			 	scanf("%d",&ch2);
			 		printf("%s\n",ch1);
					printf("%d\n",ch2);
			 	
				goto hlo;
			 }
			  else if(choice1==7)
			 {
			 	printf("\nENTER YOUR NAME:\n");
			 	scanf("%s",&ch1);
				printf("\nENTTER YOUR PASSPORT NO.:\n");
				scanf("%d",&ch2);
				printf("%s\n",ch1);
					printf("\n%d",ch2);
				goto hlo;
			 }
			  else if(choice1==8)
			 {
			 	printf("\nENTER YOUR NAME:\n");
			 	scanf("%s",&ch1);
				printf("ENTER YOUR DEBIT CARD NO:\n");
				scanf("%d",&ch2);
				printf("ENTER YOUR CVV\n");
				scanf("%d",&ch3);
				printf("%s\n",ch1);
					printf("\n%d",ch2);
					printf("%d",ch3);
				goto hlo;
			 }
			   else if(choice1==9)
			 {
			 	printf("\nENTER YOUR NAME:\n");
			 	scanf("%s",&ch1);
				printf("ENTER YOUR LICENCE NO:\n");
				scanf("%d",&ch2);
				printf("%s\n",ch1);
					printf("\n%d",ch2);
				goto hlo;
			 }
			   
		    else
		    {
		    	printf("SORRY WRONG CHOICE");
			}
		    
		
	}
	case 2: {
            printf("\nPLEASE SELECT DOCUMENT NUMBER\n\n");
			printf("1.SSC Marksheet\n");
			printf("2.HSC Marksheet\n");
			printf("3.GUJCET Marksheet\n");
			printf("4.JEE/NEET Marksheet\n");
			printf("5.Adhar card\n");
			printf("6.pan card\n");
			printf("7.Passport \n");
			printf("8.Debit card\n");
			printf("9.Driving licence\n\n");
				int choice2;
				choice2:
		        printf("ENTER YOUR CHOICE fOR DOCUMENT:");
                scanf("%d",&choice2);
  
                
                if(choice2==1)
                {
                	
					printf("Name: %s\n",ch1);
					printf("Sit Number:%d\n",ch2);
					printf("Marks: %d\n",ch3);
					printf("Percentage: %f\n",ch4);
					goto a;
				 }
				  if(choice2==2)
                {
                	
					printf("%s",ch1);
					printf("%d",ch2);
					printf("%d",ch3);
					printf("%f",ch4);
					goto a;
				 }
				  if(choice2==3)
                {
                	
					printf("%s",ch1);
					printf("%d",ch2);
					printf("%d",ch3);
					printf("%f",ch4);
					goto a;
				 }
				  if(choice2==4)
                {
                	
					printf("%s",ch1);
					printf("%d",ch2);
					printf("%d",ch3);
					printf("%f",ch4);
					goto a;
				 }
				  if(choice2==5)
                {
                	
					printf("%s",ch1);
					printf("%d",ch2);
					goto a;
				 }
				  if(choice2==6)
                {
                	
					printf("%s",ch1);
					printf("%d",ch2);
					goto a;
				 }
				 	  if(choice2==7)
                {
                	
					printf("%s",ch1);
					printf("%d",ch2);
					goto a;
				 }
				 	  if(choice2==8)
                {
                	
					printf("%s",ch1);
					printf("%d",ch2);
					printf("%d",ch3);
					goto a;
				 }
				 	  if(choice2==9)
                {
                	
					printf("%s",ch1);
					printf("%d",ch2);
					goto a;
				 }
				  else
		    {
		    	printf("SORRY WRONG CHOICE");
			}
				 
				 break;
		
		
	}
	
	default:
		printf("wrong Input\n");
	}





return 0;
}


int input(){

    int number;
    scanf("%d", &number);
    return (number);
}


