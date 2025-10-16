#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[100];
    int age;
};

int comparebyname(const void *a,const void *b)
{
    return strcmp(((struct person*)a)->name,((struct person*)b)->name);
}

int comparebyage(const void *a,const void *b)
{
    return ((struct person*)a)->age - ((struct person*)b)->age;
}

int main()
{
    struct person people[] = {{"Alice", 25}, {"Bob", 20}, {"Charlie", 30}};
    int n = sizeof(people)/sizeof(people[0]);

    //qsort(void *, size_t, size_t, int (*)(const void *, const void *))
    qsort(people,n,sizeof(struct person),comparebyname);
    for(int i=0;i<n;i++)
    {
        printf("%s , %d",people[i].name,people[i].age );
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");
    qsort(people,n,sizeof(struct person),comparebyage);
    for(int i=0;i<n;i++)
    {
        printf("%s , %d",people[i].name,people[i].age );
        printf("\n");
    }

    return 0;
}
