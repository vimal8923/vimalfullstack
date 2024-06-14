
int main() {
    // Declaring and initializing an array
    int array[5] = {1, 2, 3, 4, 5};

    // Accessing elements
    printf("First element: %d\n", array[0]);
    printf("Second element: %d\n", array[1]);

    // Modifying an element
    array[0] = 10;
    printf("Modified first element: %d\n", array[0]);

    // Iterating through the array
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, array[i]);
    }

    return 0;
}
