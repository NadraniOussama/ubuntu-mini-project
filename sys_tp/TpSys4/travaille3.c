#include<string.h>

#include<stdio.h>

#include<stdlib.h>

#include<unistd.h>

int main(void){
	char ch[100];
	printf("entrer le chaine de caractere :");
	scanf("%s",ch);
	printf("\n la chaine entree est : %s le nombre de caractere %d \n",ch,strlen(ch));
	return 0;
}
