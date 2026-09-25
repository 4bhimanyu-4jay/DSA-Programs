#include <stdio.h>

int main() {
    int arr1[50], arr2[50], arr3[100];
    int m, n, j, i, k = 0;
    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    printf("Enter the elements of the first array (sorted):\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &n);
    printf("Enter the elements of the second array (sorted):\n");
    for (j = 0; j < n; j++) {
        scanf("%d", &arr2[j]);
    }
    i = 0;
    j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (j < n) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    while (i < m) {
        arr3[k] = arr1[i]; // FIXED: Changed arr1[j] to arr1[i]
        i++;
        k++;
    }
    printf("\nMerged array:\n");
    for (i = 0; i < k; i++) {
        printf("%d\t", arr3[i]);
    }
    printf("\n");

    return 0;
}

