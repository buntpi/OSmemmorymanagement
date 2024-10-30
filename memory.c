#include <stdio.h>
#include <stdlib.h>

int a,b,c;

void callStack3() {
    int n3;
    printf("stack3 address: %p\n", &n3);
    printf("\n");
}

void callStack2() {
    int n2;
    printf("stack2 address: %p\n", &n2);
    return callStack3();
}

void callStack1() {
    int n1;
    printf("stack1 address: %p\n", &n1);
    return callStack2();
}

int main(){
    callStack1();

    // heap 
    int *p1, *p2, *p3;
    p1 = (int *)malloc(sizeof(int));
    p2 = (int *)malloc(sizeof(int));
    p3 = (int *)malloc(sizeof(int));
    printf("malloc1 address: %p\n", p1);
    printf("malloc2 address: %p\n", p2);
    printf("malloc3 address: %p\n", p3);
    printf("\n");

    // global
    printf("global1 address: %p\n", &a);
    printf("global2 address: %p\n", &b);
    printf("global3 address: %p\n", &c);
    printf("\n");
    return 0;
}
