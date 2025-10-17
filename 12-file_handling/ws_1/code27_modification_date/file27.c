#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main()
{
    char filename[100];
    struct stat fileStat;

    printf("Enter file name: ");
    scanf("%s", filename);

    if(stat(filename, &fileStat) == -1)
    {
        printf("Error: cannot access file.\n");
        return 1;
    }

    printf("Last modified: %s", ctime(&fileStat.st_mtime));
    return 0;
}
