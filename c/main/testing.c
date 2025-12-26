/*
// PROGRAM 1: BINARY SEARCH
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10, target, left = 0, right = n - 1, mid, found = 0;

    printf("Enter number to search: ");
    scanf("%d", &target);

    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == target) {
            printf("Found at index %d\n", mid);
            found = 1;
            break;
        }
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if (!found) printf("Not found\n");
    return 0;
}
*/

/*
// PROGRAM 2: SELECTION SORT
#include <stdio.h>

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5, i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted Array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}

*/
/*
// PROGRAM 3: BUBBLE SORT
#include <stdio.h>

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7, i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
*/