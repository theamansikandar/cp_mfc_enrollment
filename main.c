#include <stdio.h>

void insertionSort(int array[], int size) {
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {29, 10, 14, 37, 14};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Original Array: ");
    printArray(data, size);

    insertionSort(data, size);

    printf("Sorted Array: ");
    printArray(data, size);

    return 0;
}
