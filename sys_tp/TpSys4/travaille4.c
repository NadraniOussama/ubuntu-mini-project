#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(int argc, char *argv[]){
    FILE *f1,*f2;
	char c;
	
	f1 = fopen(argv[1],"r");
	f2 = fopen(argv[2],"a");
	
	if(argc != 3){
		printf("nombre de parametre incorrect \n");
		exit(1);
	}

	if(f1 == NULL){
		printf("Ouverture impossible de fichier ");
		exit(2);
	}
	
	if(f2 == NULL){
		printf("Ouverture impossible de fichier");
		exit(3);
	}
	
	else{
		while(c = fgetc(f1)!= EOF){
			fputc(c,f2);
			
	}
	fclose(f1);
	fclose(f2);
	return 0;
		}
}
