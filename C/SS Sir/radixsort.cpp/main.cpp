#include <bits/stdc++.h>
using namespace std;
#define nl cout<<endl;

void insertionSort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key = arr[i];
        j = i-1;

        while (j>=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=key;
    }
}
void selectionSort(int arr[],int n)
{
    int   min_indx,i,j;
    for(int i=0; i<n-1;i++)
    {
        min_indx = i;
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[min_indx]>arr[j])min_indx = j;

        }
        if(min_indx != i)
        {
            swap(arr[min_indx],arr[i]);
        }
    }
}
void bucketSort(int arr[],int n)
{
    vector<float> b[n];

    for(int i=0;i<n;i++){
        int bucket_index = arr[i]*n;
        b[bucket_index].push_back(arr[i]);
    }
    for(int i=0;i<n;i++)
        sort(b[i].begin(),b[i].end());//sorting individual bucket

    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < b[i].size(); j++) {
            arr[index++] = b[i][j];
        }
    }
}
void countSort(int array[], int size) {
    // The size of count must be at least the (max+1) but
    // we cannot assign declare it as int count(max+1) in C++ as
    // it does not support dynamic memory allocation.
    // So, its size is provided statically.
    int output[10];
    int count[10];
    int max = array[0];

    // Find the largest element of the array
    for (int i = 1; i < size; i++) {
        if (array[i] > max)
            max = array[i];
    }
    // Initialize count array with all zeros.
    for (int i = 0; i <= max; ++i) {
        count[i] = 0;
    }
    // Store the count of each element
    for (int i = 0; i < size; i++) {
        count[array[i]]++;
    }
    // Store the cummulative count of each array
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }
    // Find the index of each element of the original array in count array, and
    // place the elements in output array
    for (int i = size - 1; i >= 0; i--) {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }
    // Copy the sorted elements into original array
    for (int i = 0; i < size; i++) {
        array[i] = output[i];
    }
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    // Create temp arrays
    int L[n1], R[n2];
    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    // Merge the temp arrays back into arr[l r
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // Copy the remaining elements of L[],
    // if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    // Copy the remaining elements of R[],
    // if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
// l is for left index and r is right index of the
// sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// This function takes last element as pivot,
// places the pivot element at its correct position
// in sorted array, and places all smaller to left
// of pivot and all greater elements to right of pivot
int partition(int arr[], int low, int high)
{
    // Choosing the pivot
    int pivot = arr[high];

    // Index of smaller element and indicates
    // the right position of pivot found so far
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {

        // If current element is smaller than the pivot
        if (arr[j] < pivot) {

            // Increment index of smaller element
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// The main function that implements QuickSort
// arr[] --> Array to be sorted,
// low --> Starting index,
// high --> Ending index
void quickSort(int arr[], int low, int high)
{
    if (low < high) {

        // pi is partitioning index, arr[p]
        // is now at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void printArray(int arr[],int n)
{
    for(int k=0; k<n ; k++)
        cout<<arr[k]<<" ";nl;
}
using namespace std;
int main() {
    int n;  cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    insertionSort(arr,n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);
    quickSort(arr, 0, n - 1);
    return 0;
}