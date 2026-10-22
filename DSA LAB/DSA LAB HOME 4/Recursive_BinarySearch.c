#include <stdio.h>
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == key)
        return mid;
    else if (key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, high, key);
}
int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter key: ");
    scanf("%d", &key);
    int index = binarySearch(arr, 0, n - 1, key);
    if (index != -1)
        printf("Found at index %d\n", index);
    else
        printf("Not found\n");
    return 0;
}