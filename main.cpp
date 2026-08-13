#include <iostream>

int main() {
    int capacity = 2; // Starting capacity
    int size = 0;     // Number of elements added
    
    // 1. Create starting array on Heap
    int* arr = new int[capacity];

    // Add two numbers (fills the array to max capacity)
    arr[0] = 10;
    size++;
    arr[1] = 20;
    size++;

    std::cout << "Array is FULL! (Size: " << size << ", Capacity: " << capacity << ")\n";
    std::cout << "Resizing array now...\n";

    // Step A: Create a new temp array on Heap with double capacity (size 4)
    int *temp = new int[capacity * 2];

    for(int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }
    
    delete[] arr;

    arr = temp;
    capacity = capacity * 2;

    arr[2] = 30;
    size++;

    // Print all elements
    std::cout << "Elements in array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}