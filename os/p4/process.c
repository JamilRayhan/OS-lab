#include<stdio.h>
#include<unistd.h>
#include<time.h>
int main()
{
	if(fork()==0){
		for(int i=0;i<100;i++){
			printf("I am child process: %d\n",i);
			
		}
	}else{
	   for(int i=0;i<100;i++){
			printf("I am Parent process: %d\n",i);		
		}
	}
	return 0;
}
