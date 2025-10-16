#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char str1[200], str2[100];
    printf("Enter main string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    
    printf("Enter pattern string: ");
    scanf("%s", str2);

    int hash_pat[256] = {0}, hash_str[256] = {0};
    int len1 = strlen(str1), len2 = strlen(str2);

    for (int i = 0; i < len2; i++) hash_pat[(unsigned char)str2[i]]++;

    int start = 0, start_index = -1, min_len = INT_MAX, count = 0;
    for (int j = 0; j < len1; j++) {
        hash_str[(unsigned char)str1[j]]++;
        if (hash_pat[(unsigned char)str1[j]] && hash_str[(unsigned char)str1[j]] <= hash_pat[(unsigned char)str1[j]])
            count++;

        if (count == len2) {
            while (!hash_pat[(unsigned char)str1[start]] ||
                   hash_str[(unsigned char)str1[start]] > hash_pat[(unsigned char)str1[start]]) {
                if (hash_str[(unsigned char)str1[start]] > hash_pat[(unsigned char)str1[start]])
                    hash_str[(unsigned char)str1[start]]--;
                start++;
            }

            int len_window = j - start + 1;
            if (min_len > len_window) {
                min_len = len_window;
                start_index = start;
            }
        }
    }

    if (start_index == -1)
        printf("No such window exists\n");
    else {
        printf("Smallest substring: ");
        for (int k = start_index; k < start_index + min_len; k++)
            putchar(str1[k]);
        printf("\n");
    }
    return 0;
}
