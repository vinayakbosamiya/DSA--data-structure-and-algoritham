// File Handling fread() and fwrite() (structure)
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
	FILE *fp;
	clrscr();
	fp = fopen("file5.txt","w");
	while(1)
	{
		printf("\nEnter roll no and name:");
		scanf("%d %s",&s1.rn,s1.nm);
		fwrite(&s1,sizeof(s1),1,fp);
		printf("\nContinue...?");
		cscanf("%c",&c);
		if(c!='y')
			break;
	}
	fclose(fp);


	fp = fopen("file5.txt","r");
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