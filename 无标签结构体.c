#include <stdio.h>

typedef struct {
    char *name;
    int count;
} stu;

int main() {
    stu stuu = {
        .name = "wang",
        .count = 1
    };

    printf("%s\n%d", stuu.name, stuu.count);

    return 0;
}