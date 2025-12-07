// pointers main syntax and how to use
// void pointer
// pointer to pointer
// pointer to function
// pointer to array
// pointer to structure
// pointers in c
// pointer operations addition, subtraction, increment, decrement, comparison of 2 pointers

#include <stdio.h>
void main() {
    int a=10, *ptr;
    ptr = &a;
    printf("%d\n", ptr);
    printf("%d\n", *ptr);
    printf("%d\n", a);
    printf("%U\n", &a);
}