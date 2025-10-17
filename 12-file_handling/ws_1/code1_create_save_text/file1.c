#include <stdio.h>
#include <stdlib.h>

// int main() {
//     FILE *fp;
//     char filename[50], text[1000];

//     printf("Enter file name: ");
//     scanf("%s", filename);

//     getchar(); 

//     printf("Enter text: ");
//     fgets(text, sizeof(text), stdin);

//     fp = fopen(filename, "w");
//     if(fp == NULL){
//         printf("Error opening file.\n");
//         return 1;
//     }
//     fputs(text, fp);
//     fclose(fp);

//     printf("File '%s' created and saved.\n", filename);
//     return 0;
// }

int main()
{
    FILE *fp;
    char filename[100],text[100];

    printf("enter filename : ");
    scanf("%s",filename);

    printf("Enter text: ");
    scanf("%s",text);

    fp=fopen(filename,"w");

    fputs(text, fp);
    fclose(fp);

    printf("File '%s' created and saved.\n", filename);
    return 0;
}