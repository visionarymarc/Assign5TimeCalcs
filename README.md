# Assign4TimeCalc

## Author
- Marcus Valbrun

## License
- This project is licensed under the MIT License.

## Overview
This program, `Assign4TimeCalc.c`, is designed to compute turnaround time and average waiting time for different CPU scheduling algorithms as outlined in Assignment 4. It uses First-Come-First-Served (FCFS) and Shortest Job First (SJF) scheduling methods to evaluate process performance metrics.

## Features
- Calculates turnaround time for each process in the given process list.
- Computes average waiting time for each scheduling algorithm.
- Outputs the results in a tabular format as specified in the assignment.

## File Structure
- `Assign4TimeCalc.c`: The main C file containing the code to calculate turnaround and waiting times for processes.

## Usage
- Example Output
- The program outputs a table with the Process ID, Waiting Time, and Turnaround Time for each scheduling algorithm. The average waiting time is calculated and displayed at the end.

## Compilation
To compile the program, run the following command in your terminal:
```bash
gcc -o Assign4TimeCalc Assign4TimeCalc.c

### Execution
After compilation, run the program with ./Assign4TimeCalc
