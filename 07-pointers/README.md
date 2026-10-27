# C Pointers Practice

This repository contains some of the programs I wrote while learning pointers in C.

Pointers were one of the topics that made me think more carefully about how a program works in memory. At first, understanding how a pointer stores a memory address and how that address can be used to access or modify an original variable was confusing.

These programs helped me practice the concepts and build a clearer understanding of pointers.

## Programs

| Program | What it demonstrates |
|---|---|
| **Swap Numbers Using Pointers** | Swapping two variables by passing their addresses to a function. |
| **Array Operations Using Pointers** | Accessing and working with array elements using pointers and pointer arithmetic. |

## What I Learned

While practicing pointers, I focused on understanding:

- What a pointer is and how it stores a memory address.
- How the address-of operator (`&`) obtains the address of a variable.
- How the dereference operator (`*`) accesses the value stored at an address.
- How changing a value through a pointer can modify the original variable.
- How pointers can be used to access and modify array elements.
- How pointer arithmetic allows us to move between array elements.

## Challenges I Faced

The most confusing part for me was understanding how pointers interact with the original variables.

I had to work through questions such as:

- If a pointer stores an address, how does dereferencing it access the original value?
- Why does changing a value through a pointer also change the original variable?
- How does pointer arithmetic move between array elements?
- What is the difference between changing a pointer's address and changing the value stored at that address?

Working through swapping numbers and array operations helped me connect these concepts with actual C code instead of just memorizing the syntax.

## What I Gained From This Practice

I became more comfortable tracing memory addresses, dereferencing pointers, and understanding how functions can modify variables through pointers.

I am still learning, but these exercises have helped me develop a stronger foundation in C and understand how pointers relate to arrays and memory.

## How to Run

You need a C compiler, such as GCC.

Compile a program:

```bash
gcc swap-using-pointers.c -o swap
```

Run on Linux:

```bash
./swap
```

On Windows, run the generated executable:

```bash
swap.exe
```

Replace the filename with the appropriate source file. Compilation commands may vary depending on your folder structure and setup.

## What's Next?

I plan to continue practicing pointers, especially their relationship with arrays, functions, and memory. My goal is to understand these concepts properly before moving on to more complex C programming topics.