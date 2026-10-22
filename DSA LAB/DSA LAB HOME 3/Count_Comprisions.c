#include <stdio.h>
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
    int low = 0, high = n - 1;
    int floor = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            floor = arr[mid];
            break;
        }
        else if (arr[mid] < key) {
            floor = arr[mid];   // possible floor
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (floor == -1)
        printf("Floor = none\n");
    else
        printf("Floor = %d\n", floor);
    return 0;
}