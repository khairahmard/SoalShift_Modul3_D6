#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h> //library thread

void *print_message_function( void *ptr );
{
}

int main()
{
     pthread_t thread[50];//inisialisasi awal
     int  iret;

     while(1){
        iret = pthread_create( &thread, NULL, print_message_function, (void*) message);//membuat thread
        if(iret)//jika eror
        {
            fprintf(stderr,"Error - pthread_create() return code: %d\n",iret);
            exit(EXIT_FAILURE);
        }
     }

  exit(EXIT_SUCCESS);
}
