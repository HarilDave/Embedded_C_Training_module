#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Enter word to search: ");
    scanf("%s", word);

    int len = strlen(str), wlen = strlen(word);
    printf("Found at positions: ");
    for (int i = 0; i <= len - wlen; i++) 
    {
        if (strncmp(&str[i], word, wlen) == 0)
            printf("%d ", i);
    }
    return 0;
}
