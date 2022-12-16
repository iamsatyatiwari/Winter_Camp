#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int mid, int l, int r,int n)
{   
    // int sz = r - l + 1;
    // int* B = new int[sz]; // Not working why
    int B[n];
    int i, j, k;
    i = l;
    j = mid + 1;
    k = l;

    while (i <= mid && j <= r)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    } 
    
    if(i>mid){
    while (j <= r)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    }
    else{
        while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    }
    for (int i = l; i <= r; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int l, int r, int n){
    int mid; 
    if(l<r){
        mid = (l + r) /2;
        mergeSort(A, l, mid,n);
        mergeSort(A, mid+1, r,n);
        merge(A, mid, l, r,n);
    }
}

int main()
{
    // int A[] = {9, 14, 4, 8, 7, 5, 6};
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    printArray(A, n);
    mergeSort(A, 0, 6,n);
    printArray(A, n);
    return 0;
}
