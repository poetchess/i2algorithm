//Loop invariant:
//Initialization:   It is true prior to the first iteration of the loop.
//Maintenance:      If it is true before an iteration of the loop, it remains 
//                  true before the next iteration.
//Termination:      When the loop terminates, the invariant gives a useful 
//                  property that helps show that the algorithm is correct.

//Assume array starts at index 0
Insertion_Sort(A) {
    for j = 1 to A.length-1 {
        key = A[j];
        //insert A[j] into the sorted array A[0..j-1]
        i = j - 1;
        while (i >= 0 && key < A[i]) {
               A[i+1] = A[i];
               i--;
        }
        A[i+1] = key;
    }
}
