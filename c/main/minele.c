// min of elements in an array
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
    int min = a[0];
    for(int i=n; i>=0; i--) {
        if(a[i] < min) {
            min = a[i];
        }
    }
    printf("The minimum element in the array is: %d\n", min);
    return 0;
}