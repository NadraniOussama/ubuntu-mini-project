#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main(){
int pid,j;

printf("\n[processus %d] avant le fork\n", getpid());
printf("APPEL A FORK...\n\n");

			
pid = fork();

// Processus enfant
if (pid==0)
{
sleep(1);
printf("[Processus enfant %d] \n", getpid());
// Processus pere
} else {
wait(NULL);
printf("[Processus père %d] \n",getpid());
}
exit(EXIT_SUCCESS);
}

