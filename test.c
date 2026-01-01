#include <stdio.h>

#include "fillers.h"
#include "functions.h"
#include "types.h"
#include "vars.h"
#include "comps.h"
#include "arith.h"
#include "loops.h"

define a function that returns nothing called fib with parameters(a number named n) {
    initialize a variable of type number called t1 with value 0;
    initialize a variable of type number called t2 with value 1;
    create a variable of type number called nextTerm;
    if (n is greater_than_or_equal to 1) then printf("%d", t1);
    if (n is greater_than_or_equal to 2) then printf(", %d", t2);
    for every (number called i initialized with value 3 such that i is less_than_or_equal to n; increment(i)) execute {
        set nextTerm to the value of t1 added to t2;
        printf(", %d", nextTerm);
        set t1 to the value of t2;
        set t2 to the value of nextTerm;
    }
    printf("\n");
}

define a function that returns a number called main with parameters(nothing) {
    initialize a variable of type number called numTerms with value 10; // example: 1st 10 terms of fib. seq.
    call fib with parameters(numTerms);
    return successfully;
}
