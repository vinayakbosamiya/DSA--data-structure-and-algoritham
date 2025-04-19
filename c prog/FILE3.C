// File Handling fprintf() and fscanf()
#include<stdio.h>
#include<conio.h>

void main()
{
	int rn;
	char nm[20], c;
	FILE *fp;
	clrscr();
	fp = fopen("file3.txt","a");
	while(1)
	{
		printf("\nEnter roll no and name:");
		scanf("%d %s",&rn,nm);
		fprintf(fp,"%d %s\n",rn,nm);
		printf("Continue...?");
		cscanf("%c",&c);
		if(c!='y')
			break;
	}
	fclose(fp);

	fp = fopen("file3.txt","r");
	printf("\nRno \t Name\n");
	while(1)
	{
		fscanf(fp,"%d %s\n",&rn,nm);
		printf("%d \t %s\n",rn,nm);
		if(feof(fp))
			break;
	}
	fclose(fp);
	getch();
}