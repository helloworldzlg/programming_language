#include <stdio.h> 
#include <pthread.h> 

void *thread1(void *s) 
{ 
		char a[] = "Hello first!";
        printf("This is a pthread1.\n"); 
        printf("%s\n",(char*)s); 
        pthread_exit((void *)a);  //结束线程，返回一个值。 
} 

void *thread2(void *s) 
{ 
		char b[] = "Hello second!";
        printf("This is a pthread2.\n"); 
        printf("%s\n",(char*)s); 
        pthread_exit((void *)b); 
} 

int main(void) 
{ 
        pthread_t id1,id2; 
        void *a1,*a2; 
        int i,ret1,ret2; 
        char s1[]="This is first thread!"; 
        char s2[]="This is second thread!"; 
        ret1=pthread_create(&id1, NULL, thread1, s1); 

        ret2=pthread_create(&id2, NULL, thread2, s2); 

        if(ret1!=0){ 
                printf ("Create pthread1 error!\n"); 
                exit (1); 
        } 
        pthread_join(id1,&a1); 

        printf("%s\n",(char*)a1); 

        if(ret2!=0){ 
                printf ("Create pthread2 error!\n"); 
                exit (1); 
        } 
        printf("This is the  main process.\n"); 
        pthread_join(id2,&a2); 
        printf("%s\n",(char*)a2); 
        return (0); 
} 
