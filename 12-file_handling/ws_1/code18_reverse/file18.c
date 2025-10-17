#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    FILE *fp;
    char filename[50];
    char *lines[1000];
    int count = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    char buffer[1000];
    while(fgets(buffer, sizeof(buffer), fp) != NULL){
        lines[count] = (char*)malloc(strlen(buffer)+1);
        strcpy(lines[count], buffer);
        count++;
    }
    fclose(fp);

    printf("Lines in reverse order:\n");
    for(int i = count-1; i >= 0; i--){
        printf("%s", lines[i]);
        free(lines[i]);
    }

    return 0;
}
