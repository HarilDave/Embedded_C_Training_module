// encrypt.cand type samepassto decrypt

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc!=3)
    {
        fprintf(stderr,"Usage: %s <file> <password>\n",argv[0]); 
        return 1;
    }

    const char *fn=argv[1], *pw=argv[2];

    FILE *f=fopen(fn,"rb+"); 
    
    if(!f)
    {
        perror("fopen"); 
        return 1;
    }

    size_t pwlen=0; 
    while(pw[pwlen]) pwlen++;

    if(pwlen==0)
    {
        fprintf(stderr,"empty password\n"); 
        fclose(f); 
        return 1;
    }

    int c; size_t i=0;

    while((c=fgetc(f))!=EOF)
    {
        unsigned char out = (unsigned char)c ^ (unsigned char)pw[i % pwlen];
        fseek(f, -1, SEEK_CUR);
        fputc(out, f);
        i++;
    }
    fclose(f);
    return 0;
}
