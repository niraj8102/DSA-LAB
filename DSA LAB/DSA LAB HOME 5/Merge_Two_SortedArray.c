#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements of first sorted array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter elements of second sorted array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }
    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;
    /* Merge the two arrays */
    while (i < n1 && j < n2) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }
    /* Copy remaining elements of first array */
    while (i < n1)
        merged[k++] = a[i++];
    /* Copy remaining elements of second array */
    while (j < n2)
        merged[k++] = b[j++];
    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}