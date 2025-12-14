#include <stdio.h>
#define MAX 100

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Invalid number of elements\n");
        return 1;
    }

    int arr[n]=0;
    printf("Enter the elements: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i]>arr[j]) {
                // swaping the elements using third variable
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("Sorted array: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}