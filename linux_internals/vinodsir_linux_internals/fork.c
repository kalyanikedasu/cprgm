#include<stdio.h>
#include<unistd.h>
void main()
{
	pid_t pid=fork();
	if(pid==0)
	{
		printf("**********CHILD PROCESS IN IF BLOCK**********\n");
	printf("Child process:PID=%d\n",getpid());
	}
	else
	{
		printf("**********PARENT PROCESS IN ELSE BLOCK**********\n");
         printf("Parent process:PID=%d,child's process PID=%d\n",getpid(),pid);
	}
}
