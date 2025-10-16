#include <stdio.h>
#include <stddef.h> // for offsetof

struct Mixed {
    char c;
    int i;
    short s;
};

#pragma pack(1)
struct Packed {
    char c;
    int i;
    short s;
};
#pragma pack() // reset packing

int main() {
    struct Mixed m;

    printf("Size of struct Mixed: %zu bytes\n", sizeof(m));
    printf("Offset of c: %zu\n", offsetof(struct Mixed, c));
    printf("Offset of i: %zu\n", offsetof(struct Mixed, i));
    printf("Offset of s: %zu\n", offsetof(struct Mixed, s));

    printf("Size of packed struct: %zu bytes\n", sizeof(struct Packed));

    return 0;
}
