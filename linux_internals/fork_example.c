#include <unistd.h>
int main() 
{
    fork();  // Create a child process

    write(1, "Hello from process!\n", 21);  // 1 = stdout

    return 0;
}


