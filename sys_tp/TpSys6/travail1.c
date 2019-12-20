#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/wait.h>

#define TAILLE_MESSAGE 256
int main(void)
{
pid_t pid_fils;
int descripteurTube[2];
char messageEcrire[TAILLE_MESSAGE];
pipe(descripteurTube);
pid_fils=fork();
if(!pid_fils)
 {
 sprintf(messageEcrire,"Bonjour!!");
 write(descripteurTube[1],messageEcrire,TAILLE_MESSAGE);
 }
return EXIT_SUCCESS;
}
