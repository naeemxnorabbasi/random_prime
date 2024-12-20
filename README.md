# Prime Numbers

This project generates and prints a random number of prime numbers under 1000 using a C program. It includes a `Makefile` to simplify compilation, execution, and cleanup.

## Files in the Project
- `main.c`: The C source file containing the program logic.
- `Makefile`: The Makefile to compile, run, and clean the project.
- `README.md`: This documentation file.

## Prerequisites
- GCC (GNU Compiler Collection)
- Make (build automation tool)
- Linux/MacOS or Windows with a compatible terminal

## Instructions

### Step 1: Clone or Download the Project
Clone the repository or download the files to your local machine.

### Step 2: Open the Terminal
Navigate to the directory where the files are saved.

### Step 3: Compile the Code
Run the following command to compile the code:
```bash
make
```
This will generate an executable file named `prime_numbers`.

### Step 4: Run the Program
Execute the program using the following command:
```bash
make run
```
The program will print a random number of prime numbers under 1000.

### Step 5: Clean Up
To remove the generated executable file, run:
```bash
make clean
```
This will delete the `prime_numbers` file from your directory.

## Example Output
An example of the output might look like this:
```
Printing 10 random prime numbers:
2
3
5
7
11
13
17
19
23
29
```

## Troubleshooting
- Ensure that GCC and Make are installed on your system.
- Check file permissions if you encounter execution issues.
- Verify that you are in the correct directory containing the `Makefile` and `main.c`.

## License
This project is provided under the MIT License. Feel free to modify and use it as needed.

## Author
Created by Na33m Abba51.
