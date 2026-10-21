# Automated Blood Cell Count Analysis Using a 2D Array

## 1. Overview
The Automated Blood Cell Count Analysis system is a C programming project designed to organize and analyze basic blood cell count data. It stores sample IDs and RBC, WBC, and platelet counts using a two-dimensional array. The program calculates average and maximum counts and sorts sample records alphabetically by sample ID.

## 2. Objective
- To store blood cell count measurements for multiple samples.
- To calculate the average count of each blood parameter.
- To identify the maximum count for each parameter.
- To sort sample records using string operations.
- To apply two-dimensional arrays to a biomedical engineering problem.

## 3. Features
- Stores up to 20 blood samples.
- Records RBC, WBC, and platelet counts.
- Calculates average values for all three parameters.
- Finds the maximum value of each parameter.
- Sorts sample records alphabetically by sample ID.
- Displays the results in a readable format.

## 4. Programming Concepts Used
- Two-dimensional arrays
- Character arrays and strings
- Loops and conditional statements
- String comparison using `strcmp()`
- String copying using `strcpy()`
- Bubble sorting
- Average and maximum calculations
- Basic input validation

## 5. How to Run
1. Install a C compiler such as GCC or use an online C compiler.
2. Open `main.c` in the compiler.
3. Compile the program using:

   ```bash
   gcc main.c -o blood_cell_analysis
   ```

4. Run the program:

   **Linux/macOS:**
   ```bash
   ./blood_cell_analysis
   ```

   **Windows:**
   ```bash
   blood_cell_analysis.exe
   ```

5. Enter the number of samples, sample IDs, and blood cell counts when prompted.

## 6. Sample Output
Refer to `sample_output.txt` for sample input and output demonstrating the program's execution.

## 7. Limitations
- Stores a maximum of 20 samples.
- Data is not permanently saved after the program terminates.
- Checks for negative counts but does not validate all input errors or clinical reference ranges.
- The sample values are illustrative and must not be used for medical diagnosis.
- The program is an educational demonstration, not a clinical diagnostic system.

## 8. Discussion
The program demonstrates how a two-dimensional array can store multiple blood parameters for several samples. Nested loops are used to calculate the average and maximum values. Bubble sorting arranges sample IDs alphabetically while keeping the corresponding blood count measurements aligned with each sample.

This approach illustrates how C programming can support basic biomedical data organization and analysis.

## 9. Conclusion
The project demonstrates the application of two-dimensional arrays, strings, loops, calculations, and sorting techniques to a basic blood cell count analysis problem.

## 10. Language
**C Programming Language**
