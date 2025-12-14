#include <stdio.h>
#define MAX 100

int main() {
    int arr[MAX], n, key, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Invalid number of elements\n");
        return 1;
    }

    printf("Enter the sorted elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element not found in the array\n");
    }
    return 0;
}