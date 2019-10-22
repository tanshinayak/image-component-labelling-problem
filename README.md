# Image Component Labelling Problem
Image component labelling is used for all kinds of tasks ranging from computer vision to medical analysis. Infact, some MRI scans produce a _fancy_ verison component labelling to differentiate different parts of the brain.
## Our approach
We started with an itterative solution involving arrays and linked lists to store locations, But we soon realized that there would be severe performance issues on edge cases. Then we tried to solve it recursively. Once we had an initial code, we compared it with other faster & better solutions used in the field.  
As it turns out, he one we implemented was called 4-neighbour recursive tracking.  
Here's the pseudocode for the program:  
```python
set counter to 2
Loop until 1 is encountered:
  Assign it the value of counter
  check recursively the elements:
            top
            bottom
            left
            right
   increment the counter
```
The complexity is O(n^2 * c^n), which is pretty bad.
The 8-neighbour approach is similar but also considers top-left, top-right, bottom-left and bottom-right elements.  
As it turns out, these two are amongst least used approaches.  

## Other approaches:
### Row by row (Classical):
In this one, we traverse the whole 2-d array row by row and label continuous rows of 1s. For example: 0 0 0 1 1 0 0 1 1 0 0 1 1 1 will be labelled as : 0 0 0 1 1 0 0 2 2 0 0 3 3 3. This labeling will happen only if the encountered one is not connected to any element before or above it. If it is, then it will be assigned the lowest label and if there is an conflict, such as the label before and the above differ, then we'll save tha conflict in a table. At the end, all the conflicts are resolved by assigning the smallest value to the conflicting elements.
Here's the pseudocode for this one:  
```python
set counter to 2
Loop each row:
        if 1 encountered:
            if top and left are 0:
                  increment counter and assign it the value of counter
            elif atlest one of them is not zero:
                  assign it the smaller value
                  if both were non zero:
                        store the clashing value in a table
Loop over whole array:
        update value on basis of table
```
This approach reduces the run time to o(n^2)  
Appart from these two, there are various other algos and improvements, some of which take advantage of parallel hardware, and some are mathematical improvements.


### Sources reffered:
(Binary Image Ananlysis)[https://courses.cs.washington.edu/courses/cse373/00au/chcon.pdf]  
(A New Parallel Algorithm)[http://cucis.ece.northwestern.edu/publications/pdf/GPP14.pdf]  


