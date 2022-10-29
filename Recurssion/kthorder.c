#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partion(int arr[], int lb, int ub)
{
    int pivot = arr[ub];
    int ab = lb - 1;
    for (int i = lb; i <= ub - 1; i++)
    {
        if (arr[i] < pivot)
        {
            swap(&arr[++ab], &arr[i]);
        }
    }
    swap(&arr[++ab], &arr[ub]);
    return ab;
}
int rand_partion(int arr[], int lb, int ub)
{
    int r = lb + rand() % (ub - lb + 1);
    swap(&arr[r], &arr[ub]);
    return partion(arr, lb, ub);
}
int ithorder(int arr[], int lb, int ub, int i)
{
    if (lb == ub)
    {
        return arr[lb];
    }
    int q = rand_partion(arr, lb, ub);
    int k = q - lb + 1;
    if (i == k)
    {
        return arr[q];
    }
    if (i > k)
        return ithorder(arr, q + 1, ub, i - k);

    return ithorder(arr, lb, q - 1, i);
}
int main()
{
    int n;
    printf("Enter the number of size of the array=  ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array element\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans1;
    int k;
    printf("Enter the postion for kth element =");
    scanf("%d", &k);
    ans1 = ithorder(arr, 0, n - 1, k);
    int ans2 = ithorder(arr, 0, n - 1, n - k + 1);
    printf(" kth smallest element=%d ", ans1);
    printf("\nkth largest elemtet =%d", ans2);
}