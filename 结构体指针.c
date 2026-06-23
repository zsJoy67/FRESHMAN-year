#include <stdio.h>

typedef struct {
    char *name;//静态存储区
    int count;
} *pStu, Stu;  //*pSTU => 结构体指针类型

int main() {
    Stu stu = {"wang",2};

    pStu p = &stu;//p 指向结构体的指针

    printf("%s,%d", 
            p->name, p->count);
    
    return 0;
}