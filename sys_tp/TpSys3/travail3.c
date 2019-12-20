#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void main(int argc, char *argv[]){
	int som;

	if(argc ==3){
	som = atoi(argv[1]) + atoi(argv[2]); 
	printf("la somme des 2 arguments est %d \n", som);	
}
	else{
		printf("vous devez saisir 2 agruments!\n");
	}
}

