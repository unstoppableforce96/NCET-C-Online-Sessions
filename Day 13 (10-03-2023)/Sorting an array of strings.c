/* Selection Sort on Array of strings */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// peek function prints the given array on the screen
void peek(int r, int c, char arr[][c]) {
    for (int i = 0; i < r; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}
// swap function to swap two elements in place (function works on reference)
void swap(char a[], char b[]) {
    char t[20];
    strcpy(t, a); // t = a;
    strcpy(a, b); // a = b;
    strcpy(b, t); // b = t;
}
// Selection sort sorts the array in-place using exchange of elements techniques
void selection_sort(int r, int c, char arr[][c]) {
    for (int i = 0; i < r - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < r; j++) {
            if (strcmp(arr[j], arr[min_index]) < 0) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }   
}

int main() {
    char names[7][20] = {"rio", "denver", "tokyo", "berlin", "palermo", "professor", "nairobi"};
    // before sorting
    printf("Before sorting\n");
    peek(7, 20, names); // viewing the array
    selection_sort(7, 20, names);
    // after sorting
    printf("\nAfter sorting\n");
    peek(7, 20, names); // viewing the array
    return 0;
}