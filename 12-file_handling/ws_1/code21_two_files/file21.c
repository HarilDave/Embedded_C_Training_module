#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1, *f2, *fout;
    char file1[50], file2[50], newfile[50], ch;

    printf("Enter first file name: ");
    scanf("%s", file1);
    printf("Enter second file name: ");
    scanf("%s", file2);
    printf("Enter new file name: ");
    scanf("%s", newfile);

    f1 = fopen(file1, "r");
    f2 = fopen(file2, "r");
    fout = fopen(newfile, "w");

    while((ch = fgetc(f1)) != EOF)
        fputc(ch, fout);

    while((ch = fgetc(f2)) != EOF)
        fputc(ch, fout);

    fclose(f1);
    fclose(f2);
    fclose(fout);

    printf("Files joined successfully.\n");
    return 0;
}
