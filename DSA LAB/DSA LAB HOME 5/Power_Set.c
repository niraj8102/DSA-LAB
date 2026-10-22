#include <stdio.h>
int count = 0;
void powerSet(int arr[], int subset[], int n, int index, int size) {
    if (index == n) {
        printf("{ ");
        for (int i = 0; i < size; i++) {
            printf("%d ", subset[i]);
        }
        printf("}\n");
        count++;
        return;
    }
    /* Exclude current element */
    powerSet(arr, subset, n, index + 1, size);
    /* Include current element */
    subset[size] = arr[index];
    powerSet(arr, subset, n, index + 1, size + 1);
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n], subset[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Subsets:\n");
    powerSet(arr, subset, n, 0, 0);
    printf("Count = %d\n", count);
    return 0;
}