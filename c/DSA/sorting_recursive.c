#include <stdio.h>

void arr_print(int [], int);

void swap(int* , int* );

void quickSort(int [], int , int );

int partition(int [], int low, int high);

void merge(int [], int , int , int );

void mergeSort(int [], int , int);

void insertionSortRecursive(int [], int );

void heapSort(int [], int);

void heapify(int [], int, int);
    
int main()
{   int a[]={1,2,3,4,5,6,7,8};
    int b1[]={4,2,6,8,1,5,7,3};
    int b2[]={4,2,6,8,1,5,7,3};
    int b3[]={4,2,6,8,1,5,7,3};
    int b4[]={4,2,6,8,1,5,7,3};

    quickSort(b4, 0, 8-1);
    arr_print(b4, 8);

    mergeSort(b3, 0, 8-1);
    arr_print(b3, 8);

    insertionSortRecursive(b2, 8);
    arr_print(b2, 8);

    heapSort(b1, 8);
    arr_print(b1, 8);

    return 0;
}

void heapify(int arr[], int N, int i)
{   // Find largest among root, left child and right child
    // Initialize largest as root
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < N && arr[left] > arr[largest])     //  change ASC "arr[left]>arr[largest]"       DESC "arr[left]<arr[largest}"
        largest = left;

    if (right < N && arr[right] > arr[largest])    //  change ASC "arr[right]>arr[largest]"       DESC "arr[right]<arr[largest}"
        largest = right;
    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) 
    {   swap(&arr[i], &arr[largest]);
        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}

void heapSort(int arr[], int N)
{   // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
    // Heapify root element to get highest element at
    // root again
    heapify(arr, i, 0);
    }
}


void insertionSortRecursive(int arr[], int n)
{   if (n <= 1)   // Base case
        return;
    // Sort first n-1 elements
    insertionSortRecursive(arr, n - 1);
 
    // Insert last element at its correct position in sorted array.
    int last = arr[n - 1];
    int j = n - 2;
 
    /* Move elements of arr[0..i-1], that are
    greater than key, to one position ahead
    of their current position */
    while (j >= 0 && arr[j] > last)    // change here for ASC 'arr[j]<last' or DESC 'arr[j]>last'
    {   arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

void quickSort(int arr[], int low, int high)    
{   if (low < high) 
        {   // pi is partitioning index
            int pi = partition(arr, low, high);
            // Separately sort elements before and after partition
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
}

int partition(int arr[], int low, int high)
{   int pivot = arr[high];
    // Index of smaller element and
    // indicates the right position
    // of pivot found so far
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) 
    {   // If current element is smaller than the pivot then transfer it to the other side (i.e. right in this case) 
        if (arr[j] < pivot)    // change this for ASC '<' or DESC '>'
        {   i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i + 1);
}


void merge(int arr[], int l, int m, int r)
{   int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    // Create temp arrays
    int L[n1], R[n2];
    // Copy data to temp array
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    // Merge the temp arrays
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {   if (L[i] <= R[j])     //change this for ASC '<=' or DESC '>='
        {   arr[k] = L[i];
            i++;
        }
        else
        {   arr[k] = R[j];
            j++;
        }
        k++;
    }
    // Copy the remaining elements of L[]
    while (i < n1)
    {   arr[k] = L[i];
        i++;
        k++;
    }
    // Copy the remaining elements of R[]
    while (j < n2)
    {   arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{   if (l < r)
    {   int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}


void arr_print(int a[],int n)
{   printf("\n the array is: ");
    for(int i = 0; i<n;i++)
        printf("%d  ", a[i]);
}

void swap(int *xp, int *yp)
{   int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
