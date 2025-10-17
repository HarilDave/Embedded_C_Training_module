#include <stdio.h>
#include <sys/stat.h>

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

    printf("Size: %ld bytes\n", fileStat.st_size);
    return 0;
}
