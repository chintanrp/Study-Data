#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a, command[100];	
	FILE *fp1, *fp2;
	sprintf(command,"bash wc.sh %s","aa.txt");
	fp1 = popen(command,"r");
	fp2 = fopen("num421.txt","w");
	while(1){
      		a = fgetc(fp1);
		if(a==EOF)
			break;
      		putc(a, fp2);
   	} 
        pclose(fp1);
	fclose(fp2);
	
}

