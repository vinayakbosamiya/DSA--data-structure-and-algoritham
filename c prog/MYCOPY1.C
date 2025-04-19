// Command line argument (file copy)

#include<stdio.h>
#include<stdlib.h>

void main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	char c;
	if(argc!=3)
	{
		printf("\n Invalid no. of arguments:");
		exit(1);
	}
	fp1 = fopen(argv[1], "r");
	if(fp1==NULL)
	{
		printf("\n File Does Not Exist");
		exit(1);
	}
	fp2 = fopen(argv[2],"w");
	if(fp2==NULL)
	{
		printf("\n Can not create a file");
		exit(1);
	}
	while(1)
	{
		c = fgetc(fp1);
		if(feof(fp1))
			break;
		fputc(c, fp2);
	}
	printf("\n FIle Copied Successfully...");
	fclose(fp1);
	fclose(fp2);
}
