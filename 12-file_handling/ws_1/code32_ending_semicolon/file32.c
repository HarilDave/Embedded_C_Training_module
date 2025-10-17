#include <stdio.h>
#include <string.h>

int main()
{
    char filename[100], line[500];
    FILE *fp;
    int count = 0, len;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    while(fgets(line, sizeof(line), fp))
    {
        len = strlen(line);
        if(len > 0 && line[len-1] == '\n')
            len--;
        if(len > 0 && line[len-1] == ';')
            count++;
    }

    fclose(fp);

    printf("Lines ending with semicolon: %d\n", count);
    return 0;
}
