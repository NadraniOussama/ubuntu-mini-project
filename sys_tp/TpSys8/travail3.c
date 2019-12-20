#include<stdio.h>//NADRANI Oussama
#include<string.h>//TAZI Achraf
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

int tab[10];
pthread_mutex_t lock;

void *read_tab_process(void *args){//fonction lire
   int i;
   pthread_mutex_lock(&lock);
   for(i=0; i <10; i++){
      printf("Read procces [%d] = %d \n",i,tab[i]);
   }
   pthread_mutex_unlock(&lock);
   pthread_exit(NULL);
}
//NADRANI Oussama TAZI Achraf
void *write_tab_process(void *args){//fonction ecrire
   pthread_mutex_lock(&lock);
   int i;
   for(i = 0 ; i < 10 ; i++){
      tab[i] = i * 2;
      printf("Write procces %d\n",i);
      sleep(1);
   }
   pthread_mutex_unlock(&lock);
   pthread_exit(NULL);
}
//NADRANI Oussama TAZI Achraf
int main(){
  int err;
  pthread_t write;
  pthread_t read;
  pthread_mutex_init(&lock,NULL);
  err = pthread_create(&read,NULL,read_tab_process,NULL);
  if(err < 0){
     printf("Error create read thread \n");
  }
  err = pthread_create(&write,NULL,write_tab_process,NULL);
  if(err < 0){
     printf("Error create write thread \n");
  }
  pthread_join(write,NULL);
  pthread_join(read,NULL);
  pthread_mutex_destroy(&lock);
  return 0;
}
