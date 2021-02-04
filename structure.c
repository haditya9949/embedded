#include <stdio.h>

struct student
{
	char name[20];
	int *ptrmem;
};

int main()
{
	struct student stu1, *stuptr=&stu1;
	scanf("%s",stuptr->name);
	printf("%p\n",stuptr->ptrmem);
	return 0;
}






















/*struct student
{
	char name[20];
	int rollno;
	int submarks[4];
};


void display(struct student stuarr[])
{
	printf("Student Data :\n");
	for (int i = 0; i < 3; i++)
	{
	printf("Student Name : %s Student Rollno :%d\n",stuarr[i].name,stuarr[i].rollno);
	for(int j=0;j<4;j++)
		{
			printf("S%d marks : %d \n",j+1,stuarr[i].submarks[j]);
			
		}
	}
}



int main()
{

	int i,j;
	struct student stuarr[3];
	
	for (i = 0;i <3; i++)
	{
		printf("Enter %d Student name,rollno and submarks : ",i+1);
		scanf("%s",stuarr[i].name);
		scanf("%d",&stuarr[i].rollno);
		for(j=0;j<4;j++)
		{
			printf("Enter s%d marks : \n",j+1);
			scanf("%d",&stuarr[i].submarks[j]);
		}
		printf("\n");
	} 

display(stuarr);

*/


/*

struct student stu1={"Mary Angelina",1,98,99,99,88};
struct student *ptr=&stu1;
printf("Name ; %s\n",ptr->name);
printf("Roll No :%d\n",ptr->rollno);	
for(i=0;i<4;i++)
	printf("Subject%d Marks : %d\n",i+1,ptr->submarks[i]);
return 0;
}*/







