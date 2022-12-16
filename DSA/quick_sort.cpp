// #include <stdio.h>

// void printArray(int *A, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }

// int partition(int A[], int low, int high)
// {
//     int pivot = A[low];     // pivot = A[(low + high)/2]
//     int i = low + 1;
//     int j = high;
//     int temp;

//     do
//     {
//         while (A[i] <= pivot)
//         {
//             i++;
//         }

//         while (A[j] > pivot)
//         {
//             j--;
//         }

//         if (i < j)
//         {
//             temp = A[i];
//             A[i] = A[j];
//             A[j] = temp;
//         }
//     } while (i < j);

//     // Swap A[low] and A[j]
//     temp = A[low];
//     A[low] = A[j];
//     A[j] = temp;
//     return j;
// }

// void quickSort(int A[], int low, int high)
// {
//     int partitionIndex; // Index of pivot after partition

//     if (low < high)
//     {
//         partitionIndex = partition(A, low, high); 
//         quickSort(A, low, partitionIndex - 1);  // sort left subarray 
//         quickSort(A, partitionIndex + 1, high); // sort right subarray
//     }
// }

// int main()
// {
//     //int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
//     int A[] = {9, 4, 4, 8, 7, 5, 6};
//     // 3, 5, 2, 13, 12, 3, 2, 13, 45
//     // 3, 2, 2, 13i, 12, 3j, 5, 13, 45
//     // 3, 2, 2, 3j, 12i, 13, 5, 13, 45 --> first call to partition returns 3
//     int n = 9;
//     n =7;
//     printArray(A, n);
//     quickSort(A, 0, n - 1);
//     printArray(A, n);
//     return 0;
// } 

// descending order 


#include <bits/stdc++.h>

using namespace std;

int partition(float arr[], int low, int high)

{

  int pivot = arr[high];

  int i = (low - 1);

  for (int j = low; j <= high - 1; j++)

  {

    if (arr[j] > pivot)

    {

      i++;

      swap(arr[i], arr[j]);

    }

  }

  swap(arr[i + 1], arr[high]);

  return (i + 1);

}

void quickSort(float arr[], int low, int high)

{

  if (low < high)

  {

    int pi = partition(arr, low, high);

    quickSort(arr, low, pi - 1);

    quickSort(arr, pi + 1, high);

  }

}

void printArray(float arr[], int size)

{

  int i;

  for (i = 0; i < size; i++)

    cout << arr[i] << " ";

  cout << endl;

}

int main()

{

  float arr[] = {1.2, 3.5, 4.5, 5.6, 8.9, 9.2};

  int n = sizeof(arr) / sizeof(arr[0]);
  cout<<endl;
  cout<<"Before Sorting :\n";
  printArray(arr, n);
  cout<<endl;
  quickSort(arr, 0, n - 1);

  cout << "Sorted array in descending order : \n";

  printArray(arr, n);
  cout<<endl;

  return 0;

}

