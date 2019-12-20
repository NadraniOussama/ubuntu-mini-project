
#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void sig_handler(int sig){
	if(sig == SIGUSR1){
		printf("signal recu \n");
	}
	if(sig == SIGKILL){
		printf("signal recu\n");
	}
	if(sig == SIGSTOP){
		printf("signal recu \n");
	}
}

int main(int argc, char *argv[]){
	if(signal(SIGUSR1,sig_handler)==SIG_ERR)
		printf("erreur SIGUSR1");
	if(signal(SIGKILL,sig_handler)==SIG_ERR)
		printf("erreur SIGKILL");
	if(signal(SIGSTOP,sig_handler)==SIG_ERR)
		printf("erreur SIGSTOP");
	while(1)
	sleep(1);
	return 0;
}
