// File Handling fread() and fwrite() (array)
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5], i, b[5];
	FILE *fp;
	clrscr();

	for(i=0 ; i<5 ; i++)
	{
		printf("Enter value:");
		scanf("%d",&a[i]);
	}

	fp = fopen("file4.txt","w");
	fwrite(&a, sizeof(a), 5, fp);
	fclose(fp);

	fp = fopen("file4.txt","r");
	fread(&b, sizeof(b),5, fp);
	fclose(fp);

	for(i=0 ; i<5 ; i++)
		printf("%d \t ",b[i]);
	getch();
}