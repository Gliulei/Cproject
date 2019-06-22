#include <stdio.h>


int add_range(int low, int high) {
    int i, sum;
    for (i = 0; i <= high; i++) {
        sum = sum + i;
    }
    return sum;
}

int main(void) {

    typedef struct {
        volatile unsigned int pos;
        unsigned int size;
        void *p;
    } yac_shared_segment;

    typedef struct  {
        yac_shared_segment common;
        unsigned long size;
    } yac_shared_segment_mmap;

    printf("%ld\n", sizeof(yac_shared_segment_mmap));
//    printf("%d\n", Student.u.v.flags1);
//    printf("%d\n", Student.u.v.flags2);
//    printf("%d\n", Student.u.v.flags3);
//    printf("%d\n", Student.u.v.flags4);

//    int result[100];
//    result[0] = add_range(1,10);
//    result[1] = add_range(1,100);
//    printf("result[0]=%d\nresult[1]=%d\n", result[0], result[1]);
    return 0;
}
