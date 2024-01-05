#include <stdio.h>
int binarySearch(int arr[], int n, int key) 
{
 int left = 0;
 int right = n - 1;
 while (left <= right) 
 {
 int mid = left + (right - left) / 2;
 if (arr[mid] == key)
 return mid;
 if (arr[mid] < key)
 left = mid + 1;
 else
 right = mid - 1;
 }
 return -1;
}
int main() 
{
    int n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in sorted order:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, n, key);
    if (result == -1)
    printf("Element not found.\n");
    else
    printf("Element found at index %d.\n", result);
    return 0;
}