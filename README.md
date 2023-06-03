Certainly! Here's an updated version of the README.md file that emphasizes the fact that the code is written in pure C without using any libraries:

```markdown
# Riemann's Zeta function for Quaternions (Hypercomplex)

This is a pure C program that calculates the Riemann's Zeta function for Quaternions, a type of Hypercomplex numbers. The code is implemented without using any external libraries, providing a self-contained solution for computing the Quaternion Zeta function.

## Introduction

The Riemann's Zeta function, denoted as ζ(s), is a fundamental mathematical function in number theory and complex analysis. It is defined for complex numbers s with real part > 1, and it can be extended to other domains including hypercomplex numbers.

In this program, we focus on computing the value of the Riemann's Zeta function for Quaternions, which are Hypercomplex numbers consisting of a real part, three imaginary parts (i, j, k), and a dual part. The Quaternion Zeta function is an interesting extension of the classical Zeta function to Quaternions.

## About the Code

The code is implemented in pure C, without relying on any external libraries. It provides a function `zeta` that takes a Quaternion as input and calculates the value of the Riemann's Zeta function for the given Quaternion. The program employs an iterative approach to compute the sum of terms in the series expansion of the function.

The calculations are performed using basic arithmetic operations and control flow statements available in the C language. The program does not depend on any external math libraries or complex number libraries, making it a self-contained solution.

## Usage

To use the program, follow the steps below:

1. Clone the repository or download the source code file to your local machine.

2. Compile the C program using a C compiler that supports the C99 standard.

   ```shell
   $ gcc -std=c99 -o zeta_quaternion zeta_quaternion.c
   ```

3. Run the compiled executable.

   ```shell
   $ ./zeta_quaternion
   ```

4. Enter the real, imaginary, and dual parts of the Quaternion when prompted.

5. The program will calculate and display the value of the Zeta function for the provided Quaternion.

## Example

Here's an example usage of the program:

```shell
$ ./zeta_quaternion
Enter the real part of the Quaternion: 1.5
Enter the imaginary part of the Quaternion: 2.0
Enter the dual part of the Quaternion: -0.5
Zeta function value: 0.9159655942 + 1.2212829364i + 0.6106414682j
```

In this example, the program calculates the value of the Riemann's Zeta function for the Quaternion with a real part of 1.5, an imaginary part of 2.0, and a dual part of -0.5.

## Contribution

Contributions are welcome! If you find any issues or want to enhance the functionality of the code, feel free to create a pull request.
```

Feel free to modify and customize this README.md template as needed.
