// Random File Handling fread() and fwrite() (structure)
#include<stdio.h>
#include<conio.h>

struct Stud
{
	int rn;
	char nm[20];
}s1;

void main()
{
	char c;
	int n, l, nr, pos;
	FILE *fp;
	clrscr();
	fp = fopen("file5.txt","r+");
	fseek(fp, 0, SEEK_SET);
	printf("\n Existing Content Of the file");
	printf("\n Rno \t Name\n");
	while(1)
	{
		fread(&s1,sizeof(s1),1,fp);
		if(feof(fp))
			break;
		printf("%d \t %s\n",s1.rn,s1.nm);
	}
	printf("\n Enter new record:");
	printf("\nEnter roll no and name:");
	scanf("%d %s",&s1.rn,s1.nm);
	fwrite(&s1,sizeof(s1),1,fp);

	printf("\n Content of file after add a record:");
	fseek(fp, 0, SEEK_SET);
	printf("\n Rno \t Name\n");
	while(1)
	{
		fread(&s1,sizeof(s1),1,fp);
		if(feof(fp))
			break;
		printf("%d \t %s\n",s1.rn,s1.nm);
	}

	l = ftell(fp);
	printf("\n FIle length = %d",l);
	nr = l / sizeof(s1);
	printf("\n No. Of Record = %d",nr);
	printf("\n Enter record no. to update:");
	scanf("%d",&n);
	//	1	2	3	4	5
	//	0	22	44	66	88
	pos = (n-1)*sizeof(s1);
	printf("\nEnter roll no and name:");
	scanf("%d %s",&s1.rn,s1.nm);
	fseek(fp, pos, SEEK_SET);

	fwrite(&s1,sizeof(s1),1,fp);

	printf("\n Content of the file after update the record:");
	fseek(fp, 0, SEEK_SET);
	printf("\n Rno \t Name\n");
	while(1)
	{
		fread(&s1,sizeof(s1),1,fp);
		if(feof(fp))
			break;
		printf("%d \t %s\n",s1.rn,s1.nm);
	}
	fclose(fp);
	getch();
}