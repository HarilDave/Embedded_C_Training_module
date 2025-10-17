#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[50], line[100];
    int n, i;

    printf("Enter file name: ");
    scanf("%s", filename);
    printf("Number of new lines: ");
    scanf("%d", &n);
    getchar(); 

    fp = fopen(filename, "a");

    for(i=0;i<n;i++){
        printf("New line %d: ", i+1);
        fgets(line, sizeof(line), stdin);
        fputs(line, fp);
    }
    fclose(fp);

    printf("New lines appended to '%s'.\n", filename);
    return 0;
}
