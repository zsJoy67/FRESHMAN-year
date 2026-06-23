#include <stdio.h>
#include <stdlib.h>
#define DEFAULT_ABC {1, 2, 3}   //宏（预处理指令）

typedef struct {
    int a ;
    int b ;
    int c ;
} ABC;

int main() {
    ABC Pp = DEFAULT_ABC; 
    ABC *p = NULL;      //结构体指针
    p = &Pp;

    printf("%d, %d, %d, %d, %d, %d", Pp.a, Pp.b, Pp.c, p->a, p->b, p->c);
}