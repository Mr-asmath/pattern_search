## Insertion Sort in C

This repository contains a simple C program that implements **Insertion Sort**, a fundamental sorting algorithm.

## 📌 Overview
Insertion Sort is a simple sorting algorithm that builds the final sorted array one element at a time. It works by comparing each element with the elements before it and inserting it into the correct position.

## 🚀 Algorithm
1. Assume the first element is already sorted.
2. Pick the next element and compare it with the previous elements.
3. Shift elements that are greater than the current element to the right.
4. Insert the current element at its correct position.
5. Repeat for all elements in the array.

## 📝 Code

```c
#include <stdio.h>

// Function to perform insertion sort
void insertionSort(int arr[], int size) {
    int i;
    for (i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements of arr[0..i-1] that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Insert key at the correct position
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    insertionSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}
```
## 🛠️ Compilation & Execution
To compile and run the program, use the following commands in a terminal:

```sh
Copy
Edit
gcc insertion_sort.c -o insertion_sort
./insertion_sort
```
## 🎯 Example Output

```output
Original array: 12 11 13 5 6 
Sorted array: 5 6 11 12 13
```

##⏳ Time Complexity

Case	Time Complexity
Best Case (Sorted Input)	O(n)
Worst Case (Reversed Input)	O(n²)
Average Case	O(n²)

##📌 Advantages

Simple to implement
Efficient for small datasets
Stable sort (preserves the order of equal elements)

## ❌ Disadvantages

Not suitable for large datasets due to O(n²) time complexity
Performs many shifts in the worst case

## 🔗 References

Insertion Sort - GeeksforGeeks

Sorting Algorithms - Wikipedia
