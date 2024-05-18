// 5.C) Tower of Hanoi

#include <stdio.h>

// Function to solve the Tower of Hanoi problem
void TOH(int n, char from_rod, char to_rod, char aux_rod)
{
    // Base case: if there's only one disk to move
    if (n == 1)
    {
        // Print the move instruction
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    
    // Recursive case: move n-1 disks from the from_rod to the aux_rod
    TOH(n - 1, from_rod, aux_rod, to_rod);
    
    // Move the nth disk from the from_rod to the to_rod
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    
    // Recursive case: move the n-1 disks from the aux_rod to the to_rod
    TOH(n - 1, aux_rod, to_rod, from_rod);
}

// Main function
void main()
{
    // Number of disks
    int n = 2;             
    // Call the TOH function to solve the problem
    TOH(n, 'A', 'C', 'B'); // A, B and C are names of rods
}