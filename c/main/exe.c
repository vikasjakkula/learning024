#include <stdio.h>
#define MAX 100
void main(){
    int a[MAX],i,greatest, smallest, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    greatest = smallest = a[0];
    for(i=1; i<n; i++){
        if(a[i] > greatest)
            greatest = a[i];
        else if(a[i] < smallest)
            smallest = a[i];
    }
    printf("Greatest element = %d\n", greatest);
    printf("Smallest element = %d\n", smallest);
}