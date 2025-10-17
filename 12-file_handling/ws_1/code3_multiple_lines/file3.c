#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[50], line[100];
    int n, i;

    printf("Enter file name: ");
    scanf("%s", filename);
    printf("Number of lines: ");
    scanf("%d", &n);
    getchar(); // consume newline

    fp = fopen(filename, "w");

    for(i=0;i<n;i++){
        printf("Line %d: ", i+1);
        fgets(line, sizeof(line), stdin);
        fputs(line, fp);
    }
    fclose(fp);

    printf("All lines saved in '%s'.\n", filename);
    return 0;
}
