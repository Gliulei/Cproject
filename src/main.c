#include <stdio.h>

struct student {
    int age;
    char *name;
} student1;


int main(void)
{
    char name[] = "xiao ming hehe zhong hua ren ming gong he guo";
    student1.name = name;
    printf("%s\n", student1.name);
    printf("%lu\n", sizeof(name));
    printf("%lu\n", sizeof(student1));
}
