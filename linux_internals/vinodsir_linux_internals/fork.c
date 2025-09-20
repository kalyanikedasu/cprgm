#include <stdio.h>
#include <unistd.h>
void main() 
{
    pid_t pid = fork();
    if (pid == 0) 
        // Child
        printf("Child process: PID = %d\n", getpid());
    else
        // Parent
        printf("\nParent process: PID = %d, Child PID = %d\n", getpid(), pid);
}

