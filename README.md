# Sorting Algorithms Project

![sorting](https://github.com/NekodaMushi/holbertonschool-sorting_algorithms/assets/98282927/02838659-a0fb-40ef-8931-c3e86fa62d46)




## Background Context

This project is designed for educational purposes to understand different sorting algorithms and their efficiencies. The project is intended to be completed in pairs, and it is encouraged to use pair programming for at least the mandatory parts.

## Resources

- Sorting algorithm
- Big O notation
- Sorting algorithms animations
- [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg) (Warning: This video can trigger seizures/epilepsy; it's optional.)

## Learning Objectives

At the end of this project, you should be able to:

- Understand at least four different sorting algorithms.
- Know what Big O notation is and how to evaluate the time complexity of an algorithm.
- Understand how to select the best sorting algorithm for a given input.
- Know what a stable sorting algorithm is.

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`.
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files should end with a newline.
- Code should be written in Betty style.
- No more than 5 functions per file.
- No usage of `printf`, `puts`, and other standard library functions.
- Include all function prototypes in a header file `sort.h`.
- No global variables.

### Data Structures and Functions

For this project, the following `print_array` and `print_list` functions are provided:

#### `print_array`

This function prints an array of integers.

```c
void print_array(const int *array, size_t size);
```

#### `print_list`

This function prints a list of integers.

```c
void print_list(const listint_t *list);
```

### GitHub

One repository per group. Cloning/forking a project repository with the same name before the second deadline risks a 0% score.

## More Info

### Big O Notation

Please use the "short" notation. For example:

- O(1)
- O(n)
- O(n!)
- O(n^2)
- O(log(n))
- O(nlog(n))
- O(n+k)

### Tests

For testing the sorting algorithms, you can use big sets of random integers from [Random.org](https://www.random.org/).

## File Descriptions

- `bubble_sort.c`: Bubble sort algorithm
- `main.c`: Main files for testing
- `insertion_sort_list.c`: Insertion sort algorithm
- `shell_sort.c`: Shell sort algorithm
- `selection_sort.c`: Selection sort algorithm
- `quick_sort.c`: Quick sort algorithm
- `README.md`: This README file
- `print_array.c`: Function to print an array
- `print_list.c`: Function to print a linked list
- `sort.h`: Header file containing all function prototypes and data structures

---

For any issues or questions, feel free to contact me.
