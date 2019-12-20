#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,int *argv)
{
 int i,j;
 printf("\n processus:%d avant le fork\n",getpid());
 printf("APPEL fork\n\n");
 i=fork();
 if(i==0)
 {
 sleep(1);
 printf("[processus enfant %d]:Tache 1 ok\n",getpid());
 int list=system("ls -l /");
 return list;
 }else
 {
 j=wait(NULL);
 printf("[processus pere %d ]: Tache 2 ok\n",getpid());
 }
 exit(EXIT_SUCCESS);
}
