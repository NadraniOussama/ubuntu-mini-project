#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define TAILLE_MESSAGE 256
int main(void)
{
pid_t pid_fils;
int descripteurTube[2];
char messageLire[TAILLE_MESSAGE];
pipe(descripteurTube);
pid_fils=fork();
if(pid_fils==-1)
{
 fprintf(stderr,"ERRUR de creation du processus.\n");
return 1;
}
if(pid_fils)
 {
 close(descripteurTube[1]);
 read(descripteurTube[0],messageLire,TAILLE_MESSAGE);
 exit(0);
 }
 else
 {
 close(descripteurTube[0]);
 write(descripteurTube[1],"Bonjour fils je suis ton pere",TAILLE_MESSAGE); 
 }
wait(NULL);
return 0;
}
