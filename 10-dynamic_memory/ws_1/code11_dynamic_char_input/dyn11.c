#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL;
    char ch;
    int size = 0;

    printf("Enter a string (end with Enter): ");

    while(1) 
    {
        ch = getchar();
        if(ch == '\n') break;

        char *temp = realloc(str, (size + 1) * sizeof(char));

        str = temp;

        str[size] = ch;
        size++;
    }

    printf("You entered: %s\n", str);

    free(str);
    return 0;
}
