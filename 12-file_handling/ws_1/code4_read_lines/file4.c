#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[50], lines[100][100];
    int i=0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    while(fgets(lines[i], sizeof(lines[i]), fp) != NULL){
        lines[i][strcspn(lines[i], "\n")] = '\0'; // remove newline
        i++;
    }
    fclose(fp);

    printf("Lines in array:\n");
    for(int j=0;j<i;j++){
        printf("lines[%d] = %s\n", j, lines[j]);
    }
    return 0;
}
