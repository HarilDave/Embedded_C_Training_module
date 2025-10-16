#include <stdio.h>

void bubbleSort(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
        }
    }
}

void selectionSort(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])min=j;
            int t=a[i];
            a[i]=a[min];
            a[min]=t;
        }
    }
}
void insertionSort(int *a,int n)
{
    for(int i=1;i<n;i++)
    {
        int key=a[i],j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;    
    }
}
int main()
{
    int n; printf("n: "); 
    if(scanf("%d",&n)!=1) return 0;

    int a[n]; 
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    void (*sorts[])(int*,int) = {bubbleSort, selectionSort, insertionSort};

    int choice; 
    printf("Choose 0:bubble 1:select 2:insert: "); 
    scanf("%d",&choice);

    if(choice<0||choice>2) return 0;
    sorts[choice](a,n);
    for(int i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
