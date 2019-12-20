#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/wait.h>
#define TAILLE_MESSAGE 256
int main(void)
{
pid_t pid_fils;
int descripteurTube[2];
char messageLire[TAILLE_MESSAGE];
printf("creation de tube");
pipe(descripteurTube);

pid_fils=fork();

if(pid_fils)
 {

 read(descripteurTube[0],messageLire,TAILLE_MESSAGE);
 printf("Message recu =%d",messageLire);
 }
 
 
return 0;
}
