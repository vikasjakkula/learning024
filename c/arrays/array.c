// // array is a collection of homogeneous/ similar data types in contiguous memory locations

// //1. Static Array Stores data in excution time fixed size
// #include <stdio.h>
// void main() {
//     int a[5];
//     printf("Enter five elements of array: \n");
//     for(int i=0; i<5; i++) {
//         scanf("%d", &a[i]);
//     }
//     printf("The elements of array are: \n");
//     for(int i=0; i<5; i++) {
//         printf("%d\n", a[i]);
//     }
// }

// //2. Dynamic Array Stores data in runtime variable size
// #include <stdio.h>
// void main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d elements of array: \n", n);
//     for(int i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }
//     printf("The elements of array are: \n");
//     for(int i=0; i<n; i++) {
//         printf("%d\n", a[i]);
//     }
// }

// //3. Counting total number of elements in an array
// #include <stdio.h>
// void main() {
//     int n, count=0;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d elements of array: \n", n);
//     for(int i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }
//     for(int i=0; i<n; i++) {
//         count++;
//     }
//     printf("The total number of elements in the array is: %d", count);
// }
// //4. Sum of all elements in an array
// #include <stdio.h>
// void main() {
//     int n, sum=0;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d elements of array: \n", n);
//     for(int i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }
//     printf("The sum of all elements in the array is: %d", sum);
//     for(int i=0; i<n; i++) {
//         sum += a[i];
//     }
//     printf("The sum of all elements in the array is: %d", sum);
// }
// //5. Average of all elements in an array
// #include <stdio.h>
// void main() {
//     int n, sum=0;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d elements of array: \n", n);
//     for(int i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }
//     for(int i=0; i<n; i++) {
//         sum += a[i];
//     }
//     printf("The sum of all elements in the array is: %d", sum);
// }
// //6. Total number of even odd elements in an array
// #include <stdio.h>
// void main() {
//     int n, even=0, odd=0;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d elements of array: \n", n);
//     for(int i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }
//     for(int i=0; i<n; i++) {
//         if(a[i]%2==0) {
//             even++;
//         }
//         else {
//             odd++;
//         }
//     }
//     printf("The total number of even elements in the array is: %d", even);
//     printf("The total number of odd elements in the array is: %d", odd);
// }
// //7. Total number of divisible by 2, 3 and 5 in an array
// #include <stdio.h>
// void main() {
//     int n, count2=0, count3=0, count5=0;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d elements of array: \n", n);
//     for(int i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }
//     for(int i=0; i<n; i++) {
//         if(a[i]%2==0) {
//             count2++;
//         }
//     }
//     printf("The total number of divisible by 2 elements in the array is: %d", count2);
//     for(int i=0; i<n; i++) {
//         if(a[i]%3==0) {
//             count3++;
//         }
//     }
//     printf("The total number of divisible by 3 elements in the array is: %d", count3);
//     for(int i=0; i<n; i++) {
//         if(a[i]%5==0) {
//             count5++;
//         }
//     }
//     printf("The total number of divisible by 5 elements in the array is: %d", count5);
// }
// //8. Total number of prime numbers in an array
// #include <stdio.h>
// void main() {
//     int n, count=0;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d elements of array: \n", n);
//     for(int i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//         if(isPrime(a[i])) {
//             count++;
//         }
//     }
//     printf("The total number of prime numbers in the array is: %d", count);
// }
// int isPrime(int n) {
//     if(n<=1) {
//         return 0;
//     }
//     for(int i=2; i*i<=n; i++) {
//         if(n%i==0) {
//             return 0;
//         }
//     }
//     return 1;
// }
// //9. Checking if an element is present in an array
// #include <stdio.h>
// void main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d elements of array: \n", n);
//     for(int i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }
//     int key;
//     printf("Enter the element to be searched: ");
//     scanf("%d", &key);
//     for(int i=0; i<n; i++) {
//         if(a[i]==key) {
//             printf("The element is present in the array at index %d", i);
//             break;
//         }
//     }
// }
// //10. Maximum and minimum element in an array
// #include <stdio.h>
// void main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d elements of array: \n", n);
//     for(int i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }
//     int max=a[0], min=a[0];
//     for(int i=0; i<n; i++) {
//         if(a[i]>max) {
//             max=a[i];
//         }
//         if(a[i]<min) {
//             min=a[i];
//         }
//     }
//     printf("The maximum element in the array is: %d", max);
//     printf("The minimum element in the array is: %d", min);
// }
// //11. sorting an array in ascending order
// #include <stdio.h>
// void main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d elements of array: \n", n);
//     for(int i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }
//     for(int i=0; i<n; i++) {
//         for(int j=i+1; j<n; j++) {
//             if(a[i]>a[j]) {
//                 int temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     printf("The sorted array in ascending order is: \n");
//     for(int i=0; i<n; i++) {
//         printf("%d\n", a[i]);
//     }
// }

// //12. sorting an array in descending order
// //13. reversing all elements in an array
// //14. finding the second largest element in an array
// //15. finding the second smallest element in an array
// //16. Modifying an element in an array
// //17. Mean of all elements in an array
// #include <stdio.h>
// void main() {
//     int n, sum=0, mean;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d elements of array: \n", n);
//     for(int i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }
//     for(int i=0; i<n; i++) {
//         sum += a[i];
//     }
//     mean = sum/n;
//     printf("The mean of the array is: %d", mean);
// }
// //18. Mode of all elements in an array
// //19. Median of all elements in an array
// #include <stdio.h>
// void main() {
//     int n, count, median;
//     int a[n];
//     printf("Enter %d elements of array: \n", n);
//     for(int i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }
//     for(int i=0; i<n; i++) {
//         count++;
//     }
//     if(count%2==0) {
//         median=(a[count/2]+a[(count/2)-1])/2;
//     }
//     else {
//         median=a[count/2];
//     }
//     printf("The median of the array is: %d", median);
// }
// //20. Skiping negative numbers in an array
// #include <stdio.h>
// void main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d elements of array: \n", n);
//     for(int i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }
//     for(int i=0; i<n; i++) {
//         if(a[i]<0) {
//             continue;
//         }
//         else {
//             printf("The array after skipping negative numbers is: \n");
//             for(int i=0; i<n; i++) {
//                 printf("%d\n", a[i]);
//             }
//             break;
//         }
//     }
// }
// //21. Reading and printing matrix
// #include <stdio.h>
// int main() {
//     int m, n;
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &m, &n);
//     int a[m][n];
//     for(int i=0; i<m; i++) {
//         for(int j=0; j<n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(int i=0; i<m; i++) {
//         for(int j=0; j<n; j++) {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// // 22. Sum of two matrices
// #include <stdio.h>
// void main() {
//     int max, max1, max2, m, n;
//     printf("Enter the number of rows and columns: ", m, n);
//     scanf("%d %d", &m, &n);
//     int max[m][n];
//     int max1[m][n];
//     int max2[m][n];
//     for(int i=0; i<m; i++) {
//         for(int j=0; j<n; j++) {
//             scanf("%d", &max1[i][j]);
//         }
//     }
//     for(int i=0; i<m; i++) {
//         for(int j=0; j<n; j++) {
//             scanf("%d", &max2[i][j]);
//         }
//     }
//     for(int i=0; i<m; i++) {
//         for(int j=0; j<n; j++) {
//             printf("%d ", max[i][j]= max1[i][j]+ max2[i][j]);
//             printf("\n");
//         }
//     }
// }
// // 23. Subtraction of two matrices
// #include <stdio.h>
// void main() {
//     int max, max1, max2, m, n;
//     printf("Enter the number of rows and columns: ", m, n);
//     scanf("%d %d", &m, &n);
//     int max[m][n];
//     int max1[m][n];
//     int max2[m][n];
//     for(int i=0; i<m; i++) {
//         for(int j=0; j<n; j++) {
//             scanf("%d", &max1[i][j]);
//         }
//     }
//     for(int i=0; i<m; i++) {
//         for(int j=0; j<n; j++) {
//             scanf("%d", &max2[i][j]);
//         }
//     }
//     for(int i=0; i<m; i++) {
//         for(int j=0; j<n; j++) {
//             printf("%d ", max[i][j]= max1[i][j]- max2[i][j]);
//             printf("\n");
//         }
//     }
// }
// //24. Sum of all elements in a matrix
// #include <stdio.h>
// int main() {
//     int m, n;
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &m, &n);
//     int a[m][n];
//     for(int i=0; i<m; i++) {
//         for(int j=0; j<n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(int i=0; i<m; i++) {
//         for(int j=0; j<n; j++) {
//             sum += a[i][j];
//         }
//         printf("%d ", sum);
//         printf("\n");
//     }
//     return 0;
// }
// //25. Reversing all the elements in a array
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d elements of array: \n", n);
//     for(int i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }
//     printf("The elements of the array are: \n");
//     for(int i=0; i<n; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
//     printf("The reversed array is: \n");
//     for(int i=n-1; i>=0; i--) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
//     return 0;
// }
// //26. This program counts total number of occurrences of each repeated element in the array
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int a[n], freq[n];

//     printf("Enter %d elements of array: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//         freq[i] = -1; // Initialize all frequencies as -1 (not counted yet)
//     }

//     // Count the frequency of each element
//     for (int i = 0; i < n; i++) {
//         if (freq[i] != 0) { // If not already counted as duplicate
//             int count = 1;
//             for (int j = i + 1; j < n; j++) {
//                 if (a[i] == a[j]) {
//                     count++;
//                     freq[j] = 0; // Mark as already counted
//                 }
//             }
//             freq[i] = count;
//         }
//     }

//     printf("Repeated elements and their frequency:\n");
//     for (int i = 0; i < n; i++) {
//         if (freq[i] > 1) {
//             printf("Element %d is repeated %d times\n", a[i], freq[i]);
//         }
//     }

//     return 0;
// }
// //27. Matrix multiplication
// #include <stdio.h>

// int main(void) {
//     int m, n, m2, n2;

//     printf("Enter the number of rows and columns of the first matrix: ");
//     if (scanf("%d %d", &m, &n) != 2 || m <= 0 || n <= 0) {
//         fprintf(stderr, "Invalid size for the first matrix.\n");
//         return 1;
//     }

//     printf("Enter the number of rows and columns of the second matrix: ");
//     if (scanf("%d %d", &m2, &n2) != 2 || m2 <= 0 || n2 <= 0) {
//         fprintf(stderr, "Invalid size for the second matrix.\n");
//         return 1;
//     }

//     if (n != m2) {
//         printf("Matrix multiplication not possible. Columns of first (%d) must equal rows of second (%d).\n", n, m2);
//         return 0;
//     }

//     int mat1[m][n];
//     int mat2[m2][n2];
//     int result[m][n2];

//     printf("Enter the elements of the first matrix:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &mat1[i][j]);
//         }
//     }

//     printf("Enter the elements of the second matrix:\n");
//     for (int i = 0; i < m2; i++) {
//         for (int j = 0; j < n2; j++) {
//             scanf("%d", &mat2[i][j]);
//         }
//     }

//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n2; j++) {
//             int sum = 0;
//             for (int k = 0; k < n; k++) {
//                 sum += mat1[i][k] * mat2[k][j];
//             }
//             result[i][j] = sum;
//         }
//     }

//     printf("The product of the two matrices is:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n2; j++) {
//             printf("%d ", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 28. Counting total vowels and consonants of an string

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100];
//     int vowel=0, consonant=0;
//     printf("Enter a string: ");
//     scanf("%s", str);
//     for(int i=0; i<strlen(str); i++) {
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
//            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
//             vowel++;
//         }
//         else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
//             consonant++;
//         }
//     }
//     printf("The total number of vowels is: %d\n", vowel);
//     printf("The total number of consonants is: %d\n", consonant);
//     printf("The total number of characters is: %d\n", strlen(str));
//     return 0;
// }

// 29. printing star for vowels in the string and space for consonants
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);
//     for(int i=0; i<strlen(str); i++) {
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
//            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
//             printf("*");
//         }
//         else {
//             printf(" ");
//         }
//     }
//     return 0;
// }

