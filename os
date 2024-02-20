// FCFS
/*#include <stdio.h>

void main()
{
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int processes[n];
    int burst_time[n];
    int waiting_time[n];
    int turnaround_time[n];

    // Input burst times for each process
    printf("Enter the burst time for each process:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Burst time for process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
        processes[i] = i + 1;
    }

    // Calculate waiting time for each process
    waiting_time[0] = 0;
    for (int i = 1; i < n; i++)
    {
        waiting_time[i] = burst_time[i - 1] + waiting_time[i - 1];
    }

    // Calculate turnaround time for each process
    for (int i = 0; i < n; i++)
    {
        turnaround_time[i] = burst_time[i] + waiting_time[i];
    }

    // Display the results
    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\n", processes[i], burst_time[i], waiting_time[i], turnaround_time[i]);
    }

    // Calculate and display average waiting time and turnaround time
    float avg_waiting_time = 0, avg_turnaround_time = 0;
    for (int i = 0; i < n; i++)
    {
        avg_waiting_time += waiting_time[i];
        avg_turnaround_time += turnaround_time[i];
    }
    avg_waiting_time /= n;
    avg_turnaround_time /= n;

    printf("\nAverage Waiting Time: %f\n", avg_waiting_time);
    printf("Average Turnaround Time: %f\n", avg_turnaround_time);
}

 //SJF

 #include <stdio.h>

 void main() {
     int n;

     printf("Enter the number of processes: ");
     scanf("%d", &n);

     int processes[n];
     int burst_time[n];
     int waiting_time[n];
     int turnaround_time[n];

     // Input burst times for each process
     printf("Enter the burst time for each process:\n");
     for (int i = 0; i < n; i++) {
         printf("Burst time for process %d: ", i + 1);
         scanf("%d", &burst_time[i]);
         processes[i] = i + 1;
     }

     // Sort processes based on burst time using Bubble Sort
     for (int i = 0; i < n - 1; i++) {
         for (int j = 0; j < n - i - 1; j++) {
             if (burst_time[j] > burst_time[j + 1]) {
                 // Swap burst times
                 int temp_bt = burst_time[j];
                 burst_time[j] = burst_time[j + 1];
                 burst_time[j + 1] = temp_bt;

                 // Swap processes
                 int temp_process = processes[j];
                 processes[j] = processes[j + 1];
                 processes[j + 1] = temp_process;
             }
         }
     }

     // Calculate waiting time for each process
     waiting_time[0] = 0;
     for (int i = 1; i < n; i++) {
         waiting_time[i] = burst_time[i - 1] + waiting_time[i - 1];
     }

     // Calculate turnaround time for each process
     for (int i = 0; i < n; i++) {
         turnaround_time[i] = burst_time[i] + waiting_time[i];
     }

     // Display the results
     printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
     for (int i = 0; i < n; i++) {
         printf("%d\t%d\t\t%d\t\t%d\n", processes[i], burst_time[i], waiting_time[i], turnaround_time[i]);
     }

     // Calculate and display average waiting time and turnaround time
     float avg_waiting_time = 0, avg_turnaround_time = 0;
     for (int i = 0; i < n; i++) {
         avg_waiting_time += waiting_time[i];
         avg_turnaround_time += turnaround_time[i];
     }
     avg_waiting_time /= n;
     avg_turnaround_time /= n;

     printf("\nAverage Waiting Time: %.2f\n", avg_waiting_time);
     printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);
 }

 // SJF--practicied successfully

 void main()
 {
     int n;
     printf("enter numnber of processes :\n");
     scanf("%d", &n);

     int process[n];
     int wt[n];
     int bt[n];
     int tat[n];

     printf("enter burst time for each process \n");
     for (int i = 0; i < n; i++)
     {
         printf("burst time for %d :", i + 1);
         scanf("%d", &bt[i]);
         process[i] = i + 1;
     }
     // sortin the process based on burst time
     for (int i = 0; i < n - 1; i++)
     {
         for (int j = 0; j < n - i - 1; i++)
         {
             if (bt[j] > bt[j + 1])
             {
                 int temp_bt = bt[j];
                 bt[j] = bt[j + 1];
                 bt[j + 1] = temp_bt;

                 int temp_process = process[j];
                 process[j] = process[j + 1];
                 process[j + 1] = temp_process;
             }
         }
     }
     wt[0] = 0;
     for (int i = 1; i < n; i++)
     {
         wt[i] = bt[i - 1] + wt[i - 1];
     }
     for (int i = 0; i < n; i++)
     {
         tat[i] = bt[i] + wt[i];
     }
     printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
     for (int i = 0; i < n; i++) {
         printf("%d\t%d\t\t%d\t\t%d\n", process[i], bt[i], wt[i], tat[i]);
     }

     float avg_wt = 0, avg_tat = 0;
     for (int i = 0; i < n; i++)
     {
         avg_wt += wt[i];
         avg_tat += tat[i];
     }
     avg_wt /= n;
     avg_tat /= n;
     printf("avearage waiting time : %f", avg_wt);
     printf("average turn around time : %f", avg_tat);
 }

 //1.3) PRIORITY

 void main() {
     int n;

     printf("Enter the number of processes: ");
     scanf("%d", &n);

     int processes[n];
     int burst_time[n];
     int priority[n];
     int waiting_time[n];
     int turnaround_time[n];

     // Input burst time and priority for each process
     printf("Enter the burst time and priority for each process:\n");
     for (int i = 0; i < n; i++) {
         printf("Burst time for process %d: ", i + 1);
         scanf("%d", &burst_time[i]);
         printf("Priority for process %d: ", i + 1);
         scanf("%d", &priority[i]);
         processes[i] = i + 1;
     }

     // Sort processes based on priority using Bubble Sort
     for (int i = 0; i < n - 1; i++) {
         for (int j = 0; j < n - i - 1; j++) {
             if (priority[j] > priority[j + 1]) {
                 // Swap burst times
                 int temp_bt = burst_time[j];
                 burst_time[j] = burst_time[j + 1];
                 burst_time[j + 1] = temp_bt;

                 // Swap priorities
                 int temp_priority = priority[j];
                 priority[j] = priority[j + 1];
                 priority[j + 1] = temp_priority;

                 // Swap processes
                 int temp_process = processes[j];
                 processes[j] = processes[j + 1];
                 processes[j + 1] = temp_process;
             }
         }
     }

     // Calculate waiting time for each process
     waiting_time[0] = 0;
     for (int i = 1; i < n; i++) {
         waiting_time[i] = burst_time[i - 1] + waiting_time[i - 1];
     }

     // Calculate turnaround time for each process
     for (int i = 0; i < n; i++) {
         turnaround_time[i] = burst_time[i] + waiting_time[i];
     }

     // Display the results
     printf("\nProcess\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n");
     for (int i = 0; i < n; i++) {
         printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", processes[i], burst_time[i], priority[i], waiting_time[i], turnaround_time[i]);
     }

     // Calculate and display average waiting time and turnaround time
     float avg_waiting_time = 0, avg_turnaround_time = 0;
     for (int i = 0; i < n; i++) {
         avg_waiting_time += waiting_time[i];
         avg_turnaround_time += turnaround_time[i];
     }
     avg_waiting_time /= n;
     avg_turnaround_time /= n;


     printf("\nAverage Waiting Time: %.2f\n", avg_waiting_time);
     printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);
 }

 //1.4) ROUND ROBIN
 //without using arrival time : TAT=CT-AT ; WT=TAT-BT; => (CT=TAT)
 //CT -> last arrival entry in grant chart

 void main() {
     int n, quantum;

     printf("Enter the number of processes: ");
     scanf("%d", &n);

     int processes[n];
     int burst_time[n];
     int remaining_time[n];
     int waiting_time[n];
     int turnaround_time[n];

     // Input burst time for each process
     printf("Enter the burst time for each process:\n");
     for (int i = 0; i < n; i++) {
         printf("Burst time for process %d: ", i + 1);
         scanf("%d", &burst_time[i]);
         processes[i] = i + 1;
         remaining_time[i] = burst_time[i];
     }

     // Input time quantum
     printf("Enter the time quantum: ");
     scanf("%d", &quantum);

     int time = 0;
     while (1) {
         int all_processes_completed = 1;

         for (int i = 0; i < n; i++) {
             if (remaining_time[i] > 0) {
                 all_processes_completed = 0;

                 if (remaining_time[i] > quantum) {
                     time += quantum;
                     remaining_time[i] -= quantum;
                 } else {
                     time += remaining_time[i];
                     waiting_time[i] = time - burst_time[i];
                     remaining_time[i] = 0;
                     turnaround_time[i] = time;
                 }
             }
         }

         if (all_processes_completed)
             break;
     }

     // Display the results
     printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
     for (int i = 0; i < n; i++) {
         printf("%d\t%d\t\t%d\t\t%d\n", processes[i], burst_time[i], waiting_time[i], turnaround_time[i]);
     }

     // Calculate and display average waiting time and turnaround time
     float avg_waiting_time = 0, avg_turnaround_time = 0;
     for (int i = 0; i < n; i++) {
         avg_waiting_time += waiting_time[i];
         avg_turnaround_time += turnaround_time[i];
     }
     avg_waiting_time /= n;
     avg_turnaround_time /= n;

     printf("\nAverage Waiting Time: %.2f\n", avg_waiting_time);
     printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);
 }

 // Multiprogramming with fixed numbers of tasks(MFT)

 #include <conio.h>

 void main()
 {
     int total, i, n, size, s[20], m, intr = 0;
     printf("Enter total total memory size:");
     scanf("%d", &total);  //50
     printf("Enter memory for OS:");
     scanf("%d", &m); //10
     total -= m;       //50-10=40
     printf("Enter no.of partitions to be divided:");
     scanf("%d", &n);
     size = total / n;      //40/4=10
     for (i = 0; i < n; i++)
     {
         printf("enter size of page %d:", i+1);
         scanf("%d", &s[i]);
         if (s[i] <= size)
         {
             intr = intr + size - s[i];
             printf("process%d is allocated\n", s[i]);
         }
         else
             printf("process%d is blocked \n", s[i]);
     }
     printf(" fragmentation is %d", intr);
     getch();
 }

// 2.2) Multiprogramming with A Fixed Number Of Tasks (MVT)

#include <conio.h>
void main()
{
    int i, m, n, tot, s[20];
    printf("Enter total memory size:");
    scanf("%d", &tot);
    printf("Enter no. of pages:");
    scanf("%d", &n);
    printf("Enter memory for OS:");
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        printf("Enter size of page%d:", i + 1);
        scanf("%d", &s[i]);
    }
    tot = tot - m;
    for (i = 0; i < n; i++)
    {
        if (tot >= s[i])
        {
            printf("Allocate page %d\n", i + 1);
            tot = tot - s[i];
        }
        else
            printf("process s%d is blocked\n", i + 1);
    }
    printf("External Fragmentation is=%d", tot);
    getch();
}

//6.A)FIFO page replacement algor

#include <stdio.h>

#define MAX_FRAMES 10

int main() {
    int referenceString[MAX_FRAMES], frames[MAX_FRAMES], pageFaults = 0;
    int n, m, i, j, k;

    printf("Enter the number of pages in the reference string: ");
    scanf("%d", &n);

    printf("Enter the reference string: ");
    for (i = 0; i < n; i++)
        scanf("%d", &referenceString[i]);

    printf("Enter the number of frames: ");
    scanf("%d", &m);

    // Initialize frames to -1 indicating empty frames
    for (i = 0; i < m; i++)
        frames[i] = -1;

    j = 0; // Index to keep track of the oldest page in the frames

    printf("\nPage   Frames   Page Fault\n");

    for (i = 0; i < n; i++) {
        int page = referenceString[i];
        int pageFound = 0;

        // Check if the page is already in the frames
        for (k = 0; k < m; k++) {
            if (frames[k] == page) {
                pageFound = 1;
                break;
            }
        }

        // If the page is not in the frames, replace the oldest page
        if (!pageFound) {
            printf("%2d     ", page);

            frames[j] = page;
            j = (j + 1) % m; // Move to the next frame (circular)

            pageFaults++;
        } else {
            printf("      ");
        }

        // Display the current state of frames
        for (k = 0; k < m; k++) {
            if (frames[k] == -1)
                printf("  ");
            else
                printf("%d ", frames[k]);
        }

        printf("     %s\n", pageFound ? " " : "X");
    }

    printf("\nTotal Page Faults: %d\n", pageFaults);

    return 0;
}

//SEQUENCED

#include<stdio.h>
int main(){
	int n,i,j,b[20],sb[20],t[20],c[20][20];
	printf("Enter no.of files : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter no of blocks occupied by file %d : ",i+1);
		scanf("%d",&b[i]);
		printf("\nEnter the starting block of file %d : ",i+1);
		scanf("%d",&sb[i]);
		t[i]=sb[i];
		for(j=0;j<b[i];j++)
			c[i][j]=sb[i]++;
	}
	printf("\n\nFilename \t Starting Block\t length \n");
	for(i=0;i<n;i++)
		printf("\n%d\t\t%d\t\t%d\n",i+1,t[i],b[i]);
	for(i=0;i<n;i++){
	printf("\nSequenced memory allocations of file %d :",i+1);
	for(j=0;j<b[i];j++)
		printf("%d  ",&c[i][j]);
	printf("\n");
	}
	return 0;
}


//1.1)SEQENCED(VS)

#define MAX_BLOCKS 100

void main() {
    int total_blocks, num_files;

    printf("Enter the total number of blocks on the storage media: ");
    scanf("%d", &total_blocks);

    if (total_blocks <= 0 || total_blocks > MAX_BLOCKS) {
        printf("Invalid number of blocks.\n");
        return 1;
    }

    printf("Enter the number of files: ");
    scanf("%d", &num_files);

    if (num_files <= 0 || num_files > total_blocks) {
        printf("Invalid number of files.\n");
        return 1;
    }

    int file_size[MAX_BLOCKS];
    int starting_block[MAX_BLOCKS];

    printf("Enter the size and starting block for each file:\n");
    for (int i = 0; i < num_files; i++) {
        printf("File %d size: ", i + 1);
        scanf("%d", &file_size[i]);

        if (file_size[i] <= 0 || file_size[i] > total_blocks) {
            printf("Invalid file size.\n");
            return 1;

        }

        printf("File %d starting block: ", i + 1);
        scanf("%d", &starting_block[i]);

        if (starting_block[i] <= 0 || starting_block[i] > total_blocks) {
            printf("Invalid starting block.\n");
            return 1;
        }
    }

    // Check if files can be allocated
    int allocated_blocks = 0;
    for (int i = 0; i < num_files; i++) {
        if (starting_block[i] + file_size[i] - 1 > total_blocks) {
            printf("Error: File %d cannot be allocated.\n", i + 1);
            return 1;
        }
        allocated_blocks += file_size[i];
    }

    if (allocated_blocks > total_blocks) {
        printf("Error: Insufficient space to allocate all files.\n");
        return 1;
    }

    // Display file allocation details
    printf("\nFile Allocation Table:\n");
    printf("File\tSize\tStarting Block\tEnding Block\n");
    for (int i = 0; i < num_files; i++) {
        printf("%d\t%d\t%d\t\t%d\n", i + 1, file_size[i], starting_block[i], starting_block[i] + file_size[i] - 1);
    }
}*/

//LINKED...

#include <stdio.h>
struct file
{
    char fname[10];
    int start, size, block[10];
} f[10];
int main()
{
    int i, j, n;
    printf("Enter the No.of files : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter file %d name : ", i + 1);
        scanf("%s", &f[i].fname);
        printf("Enter the starting Block of file %d : ", i + 1);
        scanf("%d", &f[i].start);
        printf("Enter the No.of blocks : ");
        scanf("%d", &f[i].size);
        printf("Enter the blocks : ");
        for (j = 0; j < f[i].size; j++)
        {
            scanf("%d", &f[i].block[j]);
        }
    }
    printf("\nFile name\t Start\t Size\t blocks");
    for (i = 0; i < n; i++)
    {
        printf("\n%s\t\t %d\t %d \t", f[i].fname, f[i].start, f[i].size);
        for (j = 0; j < f[i].size - 1; j++)
        {
            printf("%d-->", f[i].block[j]);
        }
        printf("%d", f[i].block[j]);
        printf("\n");
    }
}

//INDEXED

#define MAX_BLOCKS 100
#define MAX_FILES 10

void main()
{
    int total_blocks, num_files;

    // Input the total number of blocks on the storage media
    printf("Enter the total number of blocks on the storage media: ");
    scanf("%d", &total_blocks);

    if (total_blocks <= 0 || total_blocks > MAX_BLOCKS)
    {
        printf("Invalid number of blocks.\n");
        return 1;
    }

    // Input the number of files to be allocated
    printf("Enter the number of files: ");
    scanf("%d", &num_files);

    if (num_files <= 0 || num_files > MAX_FILES)
    {
        printf("Invalid number of files.\n");
        return 1;
    }

    int index_blocks[MAX_FILES];
    int start_blocks[MAX_FILES];
    int end_blocks[MAX_FILES];

    // Input information for each file
    printf("Enter information for each file:\n");
    for (int i = 0; i < num_files; i++)
    {
        printf("File %d index block: ", i + 1);
        scanf("%d", &index_blocks[i]);

        if (index_blocks[i] <= 0 || index_blocks[i] > total_blocks)
        {
            printf("Invalid index block.\n");
            return 1;
        }

        printf("File %d starting block: ", i + 1);
        scanf("%d", &start_blocks[i]);

        if (start_blocks[i] <= 0 || start_blocks[i] > total_blocks)
        {
            printf("Invalid starting block.\n");
            return 1;
        }

        printf("File %d ending block: ", i + 1);
        scanf("%d", &end_blocks[i]);

        if (end_blocks[i] <= 0 || end_blocks[i] > total_blocks || end_blocks[i] < start_blocks[i])
        {
            printf("Invalid ending block.\n");
            return 1;
        }
    }

    // Display file allocation details
    printf("\nFile Allocation Details:\n");
    printf("File\tIndex Block\tStart Block\tEnd Block\n");
    for (int i = 0; i < num_files; i++)
    {
        printf("%d\t%d\t\t%d\t\t%d\n", i + 1, index_blocks[i], start_blocks[i], end_blocks[i]);
    }
}
