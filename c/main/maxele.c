// max of elements in an array
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }
    int a[n];
    printf("Enter %d elements of array: \n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for(int i=1; i<n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    printf("The maximum element in the array is: %d\n", max);
    return 0;
}