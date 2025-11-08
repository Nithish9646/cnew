#include "header.h"
void save(struct st *ptr)
{
	FILE *fp=fopen("STUDENT-DETAIL","w");
	fprintf(fp,"ROLL.NO          NAME          MARKS\n");
	while(ptr!=0)
	{
		fprintf(fp,"%d\t\t%s\t\t%g\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}
	printf("STUDENT HISTORY FILE SAVED\n");
}

