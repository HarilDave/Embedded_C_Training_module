#include <stdio.h>
#include <stdarg.h>

void correctSum(int count, ...) 
{
    va_list args;
    va_start(args, count);  
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);  
    printf("Sum = %d\n", sum);
}

int main() {
    correctSum(4, 1, 2, 3, 4);
    return 0;
}
