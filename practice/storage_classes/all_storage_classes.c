#include <stdio.h>

// --- extern storage class demonstration ---
int globalVar = 100;  // Global variable definition

void autoExample() {
    auto int x = 10;  // 'auto' is optional; default for local variables
    printf("autoExample: x = %d\n", x);
}

void registerExample() {
    register int i;
    printf("registerExample: ");
    for (i = 0; i < 3; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void staticExample() {
    static int count = 0;  // Static retains value between calls
    count++;
    printf("staticExample: count = %d\n", count);
}

void externExample() {
    extern int globalVar;  // Declares an externally defined variable
    printf("externExample: globalVar = %d\n", globalVar);
}

int main() {
    printf("=== Storage Class Demonstration in C ===\n\n");

    autoExample();
    
    registerExample();
    
    staticExample();
    staticExample();  // Called again to show static behavior
    
    externExample();

    return 0;
}

