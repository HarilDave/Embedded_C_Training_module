#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int d;
    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter distance: ");
    scanf("%d", &d);

    int freq[256] = {0};
    int len = strlen(str);
    for (int i = 0; i < len; i++) 
    {
        freq[(unsigned char)str[i]]++;
    }

    char result[100];
    int idx = 0;
    while (idx < len) 
    {
        int placed = 0;
        for (int i = 0; i < 256; i++) 
        {
            if (freq[i] > 0) 
            {
                result[idx++] = (char)i;
                freq[i]--;
                placed = 1;
                break;
            }
        }
        if (!placed) break;
    }
    result[len] = '\0';
    printf("%s\n", result);
    return 0;
}
