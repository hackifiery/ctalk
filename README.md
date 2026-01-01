### ctalk
ctalk is a collection of macros and typedefs that make your c programs more verbose.
## Example: bubblesort (in `test.c `):
ctalk makes this:
```c
#include <stdio.h>

#include "fillers.h"
#include "functions.h"
#include "types.h"
#include "vars.h"
#include "comps.h"
#include "arith.h"
#include "loops.h"

define a function returning nothing called bubbleSort with parameters(a number arr which is an array(of unknown length), a number n) as {
    create some variables of type number called i, j, temp;
    for (every number i initialized to value 0 such that i is less than n subtracted by 1; increment(i)) execute {
        for (every number j initialized to value 0 such that j is less than n subtracted by i subtracted by 1; increment(j)) execute {
            if (arr[j] is greater than arr[j added to 1]) {
                // Swap arr[j] and arr[j+1]
                set temp to the value of arr[j];
                swap(arr[j], with arr[j added to 1]);
            }
        }
    }
}
define a function returning nothing called printArray with parameters(a number arr which is an array(of unknown length), a number sz) as {
    create a variable of type number called i;
    for (every number i initialized to value 0 such that i is less sz; increment(i)) printf("%d ", arr[i]);
    printf("\n");
}

define a function returning a number called main with parameters(nothing) {
    initialize a variable of type number called arr which is an array(of size unknown) to the value {64, 34, 25, 12, 22, 11, 90};
    initialize a variable of type number called n to the value of the sizeof(arr) divided by the sizeof(arr[0]);
    call bubbleSort with parameters(arr, n);
    printf("Sorted array: \n");
    call printArray with parameters(arr, n);
    return successfully;
}
```
valid c syntax. it's equivalent to:
```c
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
```

As you can see, it's much less efficient, but more readable (kind of).
## Note
There are lot's of filler words (not limited to `fillers.h`) like "as", "the", "to", etc. This makes grammar checking kind of weak, 
but make sure to check the macros first to make sure you're not missing any non-filler macros in your specific writing style.