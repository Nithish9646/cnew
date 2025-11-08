#include "header.h"
void modify_record(struct st **ptr)

{
	if(*ptr==0)
	{
		printf("****THERE IS NO STUDENT RECORDS****");
		return;
	}
	char enter;
	int rl;
	char newname[20],name[20];
	float newmark,mark;
	struct st *temp,*temp1;
	temp=*ptr;
	temp1=*ptr;
	printf("* * * * * * * * * * * * * * * * * * * * *\n");
	printf("*                                       *\n");
	printf("*      R/r : To Search Rollno           *\n");
	printf("*      N/n : To Search Name             *\n");
	printf("*      P/p : Percentage Based           *\n");
	printf("*                                       *\n");
	printf("* * * * * * * * * * * * * * * * * * * * *\n");
	printf("ENTER YOUR CHOICE : ");
	scanf(" %c",&enter);
	if((enter=='R')||(enter=='r'))
	{
		printf("ENTER THE ROLL NO : ");
		scanf("%d",&rl);
		while(temp!=0)
		{
			if(temp->roll==rl)
			{
				char op;
				printf(" __________________________\n");
				printf("|                          |\n");
				printf("|   N/n : To Search Name   |\n");
				printf("|   P/p : Percentage Based |\n");
				printf("|__________________________|\n\n");
				printf("ENTER YOUR CHOICE : ");	
				scanf(" %c",&op);
				if((op=='N')||(op=='n'))
				{
					printf("ENTER THE NAME TO MODIFY : ");
					scanf("%s",newname);
					strcpy(temp->name,newname);
					printf("NAME MODIFED SUCCESSFULLY\n\n");
					show(*ptr);
				}
				else if((op=='P')||(op=='p'))
				{
					printf("ENTER THE MARK TO MODIFY : ");
					scanf("%f",&newmark);
					temp->mark=newmark;
					printf("MARK WAS SUCCESSFULLY MODIFIED\n\n");
					show(*ptr);
				}

			}
			temp=temp->next;
		}
	}

	else if((enter=='N')||(enter=='n'))
	{
		printf("ENTER THE NAME : ");
		scanf("%s",name);
		printf("ROLL.NO\tNAMES\tMARKS\n");
		int num=0;
		while(temp!=0)
		{
			if((strcmp(temp->name,name))==0)
			{
				num++;
				printf("%d\t%s\t%f\n",temp->roll,temp->name,temp->mark);
			}
			temp=temp->next;
		}
             if(num>1)
	     {
		char c;
		printf("* * * * * * * * * * * * * * * * * * * * *\n");
		printf("*                                       *\n");
		printf("*      R/r : To Search Rollno           *\n");
		printf("*      P/p : Percentage Based           *\n");
		printf("*                                       *\n");
		printf("* * * * * * * * * * * * * * * * * * * * *\n\n");
		printf("ENTER YOUR CHOICE : ");
		scanf(" %c",&c);
		if((c=='r')||(c=='R'))
		{
			printf("ENTER THE ROLL NO \n");
			scanf("%d",&rl);
			while(temp1!=0)
			{
				if(temp1->roll==rl)
				{
					char op;
					printf(" __________________________\n");
					printf("|                          |\n");
					printf("|   N/n : To Search Name   |\n");
					printf("|   P/p : Percentage Based |\n");
					printf("|__________________________|\n\n");
					printf("ENTER YOUR CHOICE : ");
					scanf(" %c",&op);
					if((op=='N')||(op=='n'))
					{
						printf("ENTER THE NAME TO MODIFY : ");
						scanf("%s",newname);
						strcpy(temp1->name,newname);
						printf("NAME MODIFED SUCCESSFULLY\n\n");
						show(*ptr);
					}
					else if((op=='P')||(op=='p'))
					{
						printf("ENTER THE MARK TO MODIFY : ");
						scanf("%f",&newmark);
						temp1->mark=newmark;
						printf("MARK WAS SUCCESSFULLY MODIFIED\n\n");
						show(*ptr);
					}
				}
				temp1=temp1->next;
			}
		}
		else if((c=='p')||(c=='P'))
		{
			printf("ENTER THE MARK : ");
			scanf("%f",&mark);
			while(temp1!=0)
			{
				if(temp1->roll==mark)
				{
					char op;
					printf(" __________________________\n");
					printf("|                          |\n");
					printf("|   N/n : To Search Name   |\n");
					printf("|   P/p : Percentage Based |\n");
					printf("|__________________________|\n\n");
					printf("ENTER YOUR CHOICE : ");
					scanf(" %c",&op);
					if((op=='N')||(op=='n'))
					{
						printf("ENTER THE NAME TO MODIFY : ");
						scanf("%s",newname);
						strcpy(temp1->name,newname);
						printf("NAME MODIFED SUCCESSFULLY\n\n");
						show(*ptr);
					}
					else if((op=='P')||(op=='p'))
					{
						printf("ENTER THE MARK TO MODIFY : ");
						scanf("%f",&newmark);
						temp1->mark=newmark;
						printf("MARK WAS SUCCESSFULLY MODIFIED\n\n");
						show(*ptr);
					}
				}
				temp1=temp1->next;
			}
		}
	     }
	     else if(num==1)
	     {
			while(temp1!=0)
			{
				if((strcmp(temp1->name,name))==0)
				{
					char op;
					printf(" __________________________\n");
					printf("|                          |\n");
					printf("|   N/n : To modify Name   |\n");
					printf("|   P/p : Percentage Based |\n");
					printf("|__________________________|\n\n");
					printf("ENTER YOUR CHOICE : ");
					scanf(" %c",&op);
					if((op=='N')||(op=='n'))
					{
						printf("ENTER THE NAME TO MODIFY : ");
						scanf("%s",newname);
						strcpy(temp1->name,newname);
						printf("NAME MODIFED SUCCESSFULLY\n\n");
						show(*ptr);
					}
					else if((op=='P')||(op=='p'))
					{
						printf("ENTER THE MARK TO MODIFY : ");
						scanf("%f",&newmark);
						temp1->mark=newmark;
						printf("MARK WAS SUCCESSFULLY MODIFIED\n\n");
						show(*ptr);
					}
				}
	           }
         	}
	}

	else if((enter=='P')||(enter=='p'))
	{
		printf("ENTER THE MARK : ");
		scanf("%f",&mark);
		printf("HERE THE REPEATED MARKS \n");
		while(temp!=0)
		{
			if(temp->mark==mark)
			{
				printf("%d %s %f\n",temp->roll,temp->name,temp->mark);
			}
			temp=temp->next;
		}
		char c;
		printf("* * * * * * * * * * * * * * * * * * * * *\n");
		printf("*                                       *\n");
		printf("*      R/r : To Search Roll             *\n");
		printf("*      P/p : To Search Name             *\n");
		printf("*                                       *\n");
		printf("* * * * * * * * * * * * * * * * * * * * *\n\n");
		printf("ENTER YOUR CHOICE : ");
		scanf(" %c",&c);
		if((c=='r')||(c=='R'))
		{
			printf("ENTER THE ROLL NO \n");
			scanf("%d",&rl);
			while(temp1!=0)
			{
				if(temp1->roll==rl)
				{
					char op;
					printf(" __________________________\n");
					printf("|                          |\n");
					printf("|   N/n : To Search Name   |\n");
					printf("|   P/p : Percentage Based |\n");
					printf("|__________________________|\n\n");
					printf("ENTER YOUR CHOICE : ");
					scanf(" %c",&op);
					if((op=='N')||(op=='n'))
					{
						printf("ENTER THE NAME TO MODIFY : ");
						scanf("%s",newname);
						strcpy(temp1->name,newname);
						printf("NAME MODIFED SUCCESSFULLY\n\n");
						show(*ptr);
					}
					else if((op=='P')||(op=='p'))
					{
						printf("ENTER THE MARK TO MODIFY : ");
						scanf("%f",&newmark);
						temp1->mark=newmark;
						printf("MARK WAS SUCCESSFULLY MODIFIED\n\n");
						show(*ptr);
					}
				}
				temp1=temp1->next;
			}
		  }
		else if((c=='p')||(c=='P'))
		{
			printf("ENTER THE NAME : ");
			scanf("%s",name);
			while(temp1!=0)
			{
				if((strcmp(temp1->name,name))==0)
				{
					char op;
					printf(" __________________________\n");
					printf("|                          |\n");
					printf("|   N/n : To Search Name   |\n");
					printf("|   P/p : Percentage Based |\n");
					printf("|__________________________|\n\n");
					printf("ENTER YOUR CHOICE : ");
					scanf(" %c",&op);
					if((op=='N')||(op=='n'))
					{
						printf("ENTER THE NAME TO MODIFY : ");
						scanf("%s",newname);
						strcpy(temp1->name,newname);
						printf("NAME MODIFED SUCCESSFULLY\n\n");
						show(*ptr);
					}
					else if((op=='P')||(op=='p'))
					{
						printf("ENTER THE MARK TO MODIFY : ");
						scanf("%f",&newmark);
						temp1->mark=newmark;
						printf("MARK WAS SUCCESSFULLY MODIFIED\n\n");
						show(*ptr);
					}
				}
				temp1=temp1->next;
			}
		}
		
	}
}
