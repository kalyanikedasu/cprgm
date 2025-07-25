#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	pid_t p = fork();
	int i=0;
	while(1)
	{
		if(p==0)
			printf("%d child process id: %d\n",i,getpid());
		else if(p>0)
			printf("%d parent process id: %d\n",i,getpid());
		else
			printf("Error");
		sleep(1);
		i++;
	}
}
