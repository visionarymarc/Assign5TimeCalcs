/*
* Marcus Valbrun (R01873916)
* CSC343 Operations Systems

* Assignment 4 Question 4
- Write a program (c++ or java) that computes turnaround time 
- and average wait time for the processes listed in Q2 for FCFS and SJF scheduling 

* Due 2024-11-13 11:59 pm
* Assign4TimeCalc.c
*/

#include <stdio.h>

// Function to calculate Turnaround Time and Waiting Time for FCFS
void calculateFCFS(int processes[], int n, int burst_time[], int waiting_time[], int turnaround_time[]) {
    // Initialize waiting time for first process to 0
    waiting_time[0] = 0;

    // Calculate waiting time for each process
    for (int i = 1; i < n; i++) {
        waiting_time[i] = waiting_time[i - 1] + burst_time[i - 1];
    }

    // Calculate turnaround time for each process
    for (int i = 0; i < n; i++) {
        turnaround_time[i] = burst_time[i] + waiting_time[i];
    }
}

// Function to calculate Average Waiting Time and Average Turnaround Time
void calculateAverageTimeFCFS(int processes[], int n, int burst_time[]) {
    int waiting_time[n], turnaround_time[n];
    int total_waiting_time = 0, total_turnaround_time = 0;

    // Call function to calculate waiting and turnaround time
    calculateFCFS(processes, n, burst_time, waiting_time, turnaround_time);

    // Display process details and calculate total times
    printf("Processes   Burst Time   Waiting Time   Turnaround Time\n");
    for (int i = 0; i < n; i++) {
        total_waiting_time += waiting_time[i];
        total_turnaround_time += turnaround_time[i];
        printf("%d           %d           %d              %d\n", processes[i], burst_time[i], waiting_time[i], turnaround_time[i]);
    }

    printf("\nAverage Waiting Time = %.2f", (float)total_waiting_time / n);
    printf("\nAverage Turnaround Time = %.2f", (float)total_turnaround_time / n);
}

int main() {
    int processes[] = {1, 2, 3, 4, 5};  // Process IDs
    int burst_time[] = {2, 1, 8, 4, 5}; // Burst times
    int n = sizeof processes / sizeof processes[0];

    // Calculate and display times for FCFS
    printf("FCFS Scheduling:\n");
    calculateAverageTimeFCFS(processes, n, burst_time);

    // Implement similar functions for SJF scheduling as needed
    return 0;
}