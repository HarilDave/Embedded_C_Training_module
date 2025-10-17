#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[50], line[1000];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    printf("File contents:\n");
    while(fgets(line, sizeof(line), fp) != NULL){
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
