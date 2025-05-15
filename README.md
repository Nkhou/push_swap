📋 Overview
push_swap is a highly efficient sorting algorithm implementation that uses two stacks (A and B) and a limited set of operations to sort integers. The challenge is to sort the numbers with the minimum number of operations possible.
✨ Key Features

Efficient Sorting Algorithm - Optimized for minimal moves
Two Stack Approach - Using only stacks A and B with limited operations
Performance Analytics - Detailed statistics on algorithm efficiency
Multiple Strategies - Implementation of various sorting approaches
Visualizer Support - Compatible with push_swap visualizers

🛠️ Operations
The program supports the following operations:
Operation Description 
  - sa : Swap the first 2 elements at the top of stack A
  - sb : Swap the first 2 elements at the top of stack B
  - ss :sa and sb at the same timepaPush the first element of stack B to stack A
  - pb : Push the first element of stack A to stack B
  - ra : Rotate stack A (first element becomes last)
  - rb : Rotate stack B (first element becomes last)
  - rr : ra and rb at the same timerraReverse rotate stack A (last element becomes first)
  - rrb : Reverse rotate stack B (last element becomes first)
  - rrr : rra and rrb at the same time
🚀 Usage
Compilation
  make
Running
  # Sort a list of integers
./push_swap 4 67 3 87 23

  # Check if operations correctly sort the stack
  ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
🧠 Algorithm
The implementation uses a optimized combination of sorting strategies:

For small sets (≤5 numbers): Optimized hardcoded sequences
For medium sets: Modified insertion sort with stack optimization
For large sets: Custom radix sort implementation with binary optimization
