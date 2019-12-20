#include<stdio.h>
#include<stdlib.h>
typedef struct semestre{
	char* NOM_semestre;
	char* module;
	int* notes;
	int n;
}semestre;
typedef struct etudiant{
	int cide;
	char* nom;
	char* prenom;
	semestre s;
}etudiant; 
typedef struct filiere{
	char* nom_filiere;
	etudiant*etd;
	int taille;
}fliere;
semestre definire_les_semestre(semestre s){
  int i;
	printf("saisir le nombre de module");
	scanf("%d",s.n);
	fflush(stdin);
	s.NOM_semestre=(char*)malloc(15*sizeof(char));
	gets(s.NOM_semestre);
	s.module=(char*)malloc(s.n*sizeof(char*));
	
	
	  
}
main{}
