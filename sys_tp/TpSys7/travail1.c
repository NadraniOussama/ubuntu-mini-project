#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<pthread.h>

static void *task_a(void *p_data){
	int i;
	printf("\n");
	for(i=0;i<5;i++){
		printf("Hello World %d \n", i);
	}
	(void) p_data;
	return NULL;
}

static void *task_b(void *p_data){
	int i;
	for(i=0;i<7;i++){
		printf("job_%d\t", i);
	}
	(void) p_data;
	return NULL;
}

int main(){
	pthread_t ta;
	pthread_t tb;
	printf("main start ");
	
	pthread_create(&ta,NULL,task_a,NULL);
	pthread_create(&tb,NULL,task_b,NULL);
	#if 1
	pthread_join(ta,NULL);
	pthread_join(tb,NULL);
	#endif
	printf("main end");
	return 0;
}
