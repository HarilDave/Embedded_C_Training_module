#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[20];
    float value;
} Device;

void modifyByValue(Device d) {
    d.id = 100;
    strcpy(d.name, "ModifiedValue");
    d.value += 10.0f;
}

void modifyByPointer(Device *d) {
    d->id = 200;
    strcpy(d->name, "ModifiedPointer");
    d->value += 20.0f;
}

Device createDevice(int id, const char *name, float value) {
    Device d;
    d.id = id;
    strcpy(d.name, name);
    d.value = value;
    return d;
}

int main() {
    Device dev = {1, "Original", 50.0f};

    printf("Before modifyByValue: id=%d, name=%s, value=%.2f\n",
           dev.id, dev.name, dev.value);
    modifyByValue(dev);
    printf("After modifyByValue: id=%d, name=%s, value=%.2f\n",
           dev.id, dev.name, dev.value); 

    modifyByPointer(&dev);
    printf("After modifyByPointer: id=%d, name=%s, value=%.2f\n",
           dev.id, dev.name, dev.value); 

    Device newDev = createDevice(3, "Returned", 75.5f);
    printf("Returned Device: id=%d, name=%s, value=%.2f\n",
           newDev.id, newDev.name, newDev.value);

    return 0;
}
