#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int lb, int mi, int ub)
{
    int arr1[mi];
    int arr2[ub - mi];
    int i = 0;

    for (i = 0; i < mi; i++)
    {
        arr1[i] = arr[i];
    }
    int k = 0;

    for (; i < ub; i++)
    {
        arr2[k++] = arr[i];
    }
    int l = 0;
    int m = 0;
    for (int k = lb; i < ub; k++)
    {
        if (arr1[l] < arr2[k])
        {
            arr[k] = arr1[l++];
        }
        else
        {
            arr[k] = arr2[m++];
        }
    }
}
void merge_sort(int arr[], int lb, int ub)
{
    if (lb > ub)
    {
        return;
    }
    int mi = (lb + ub) / 2;
    merge_sort(arr, lb, mi - 1);
    merge_sort(arr, mi + 1, ub);
    merge(arr, lb, mi, ub);
}
int main()
{
    int arr[5] = {22, 34, 18, 23, 19};
    merge_sort(arr, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}