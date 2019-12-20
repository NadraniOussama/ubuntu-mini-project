#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[]){
	FILE *f1;
	char c;
	
	
	if((f1=fopen("test.txt","w"))==NULL){
		printf("Ouverture impossible de fichier test");
		exit(1);
	}
	
	fputs("This is a test", f1);
	fclose(f1);
	return 0;

}
