#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char sentence[1000];
    char *words[100]; 
    int count = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; 

    char *token = strtok(sentence, " ");
    while(token != NULL) {
        words[count] = (char *)malloc(strlen(token) + 1); 
        strcpy(words[count], token); 
        count++;
        token = strtok(NULL, " ");
    }

    printf("Words in the sentence:\n");
    for(int i = 0; i < count; i++) {
        printf("%s\n", words[i]);
        free(words[i]); 
    }

    return 0;
}
