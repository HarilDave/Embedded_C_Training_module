#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    strcat(str1, str2);
    strcpy(str2, str1);
    str2[strlen(str1) - strlen(str2) + strlen(str2)/2] = '\0';
    int len2 = strlen(str2);
    memmove(str1, str1 + len2, strlen(str1) - len2 + 1);

    printf("After swap:\nstr1 = %s\nstr2 = %s\n", str1, str2);
    return 0;
}

