#include <stdio.h>
long long comparisons = 0;
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int medianOfThree(int arr[], int lo, int hi) {
    int mid = (lo + hi) / 2;
    if (arr[lo] > arr[mid])
        swap(&arr[lo], &arr[mid]);
    if (arr[lo] > arr[hi])
        swap(&arr[lo], &arr[hi]);
    if (arr[mid] > arr[hi])
        swap(&arr[mid], &arr[hi]);
    return mid;   // arr[mid] is median
}
int partition(int arr[], int lo, int hi) {
    int medianIndex = medianOfThree(arr, lo, hi);
    swap(&arr[medianIndex], &arr[hi]); // move pivot to end
    int pivot = arr[hi];
    int i = lo - 1;
    for (int j = lo; j < hi; j++) {
        comparisons++;
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[hi]);
    return i + 1;
}
void quickSort(int arr[], int lo, int hi) {
    if (lo < hi) {
        int p = partition(arr, lo, hi);
        quickSort(arr, lo, p - 1);
        quickSort(arr, p + 1, hi);
    }
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    quickSort(arr, 0, n - 1);
    printf("Sorted: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nComparisons: %lld\n", comparisons);
    return 0;
}