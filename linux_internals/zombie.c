#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() 
{
    pid_t pid = fork(); // create child process

    if (pid > 0) 
    {
        // Parent process
        printf("Parent process (PID: %d)\n", getpid());
        sleep(30);  // Parent sleeps, does not wait for child
    }
    else if (pid == 0) 
    {
        // Child process
        printf("Child process (PID: %d) exiting\n", getpid());
        exit(0);  // Child exits immediately
    }
    else {
        printf("Fork failed\n");
    }

    return 0;
}

