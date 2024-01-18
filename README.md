# Workplace
# Linux 

# Context Switching
- It is a process of Saving & restoring the state of the cpu(central processing unit) so it can switch from one task to another task.
a) Save Context: The os(operating system) decides it has to switch from one process to another process it saves the current process of the cpu.It saves the details of Program counter,cpu register values, and other relevent information because when it comes back the cpu want to know where to start.
b) Load Context: The Saved context of the new process should be loded into cpu. This includes Program counter, Register values and other information for the new process to resume it's execution.
c) Switch Execution: The cpu switch from currently running process into new process. This allows the new process to start or resume its execution.

# Process management
- A process is a program in the middle of the execution
- A Process begins it's life when it is created.
- The fork() system call, which creates a new process by duplicating an existing one.The process that calls fork() is the parent, whereas the new process is the child.
- The Process exits via the exit() system call.
- A parent process can know about the status of a terminated child via the wait4().
- The kernel stores the list of processes in a circular doubly linked list
- a) Forking: fork() via the clone() system call.This call takes a series of flags that specify which resources, if any, the parent and child process should share.
- b) Running: The process (Task) is currently executing on the CPU.
- c) Ready: The process is waiting for a processor to be allocated to it. Ready processes are waiting for the operating system to assign them a processor so that they can run. 
- d) Waiting (Blocked): When a process needs to wait for a resource, such as user input or a file towards becoming accessible, it enters the waiting state.
- e) Terminated (or Exit): When a process completes its operation or is terminated by the operating system, it is transferred to the terminated state and awaits removal from memory space.

Process Control Block
- A Process Control Block (PCB) is a data structure used by the operating system to manage information about a running process.
- PCB contains various pieces of information about a process,like state,pc,cpu registers,memory allocation and other relevent information  allowing the operating system to control and manage the execution of processes.

# Memory management
- Memory management  it will controlling and coordinating computer memory,By ensuring the different processes&application can utilize the computer memory resources.
- Pages : The processor’s smallest addressable unit is a byte or a word, the memory management unit typically deals in pages. In every modern system comes with 64-bit architectures have 8KB pages.
- Static Allocation: Memory is allocated at compile time and remains fixed throughout the program's execution.
- Dynamic Allocation: Memory is allocated at runtime, and the size can vary as needed.
- After the allocation of aynamically allocated memory we need to free the memory else it will leades to memory leak.
- Zones : In pages,because of their physical address in memory, cannot be used for certain tasks. Because of this limitation, the kernel divides pages into different zones The kernel uses the zones to group pages of similar properties. the zones do not have any physical relevance but are simply logical groupings used by the kernel to keep track of pages.
- Segmentation: Divides memory into segments based on the type of data.

# Inter Process Communication (IPC)
- It is a mechanisms that allows processes in an operating system to communicate with each other. by using ipc we can easily share the information and will get computation speedup.
  - Semaphore: Semaphore will control the resources of Shared memory. By using Semaphore only one resource will access at a time.
  - Mutex: A Locking mechanisum. Ensures only one thread access a shared resource at a time. It prevents race conditions and data corruption.
  - Sockets: it is a communication between processes over a network or locally.
- Shared Memory : In Shared memory a region of memory is shared. The process can then exchange information by reading and writing data to the sgared region.
   - Eg : We have two processes A&B. If supose process A wants to communicate the information the process A shares the information to Shared region and then Process B will have access to the region so that the information get's exchanged.
- Message Passing: The communication takes place by means of messages exchanged beetween the cooperating processes.
  - Eg : Process A wants to communicate with process B. Then Process A will create a message and it will send to the Kernal and the will know it is for Pocess B. So the kernal will send the message to the Process B.

# Scheduler management
- Scheduler decides which process runs,when, and for how long. By Deciding which Process runs next, The scheduler is resposnsible for best utilizing the system. It will take a decesion which process runs next, given a set of runnable processes.
    - Cooperative Multitasking: Process does not stop running until it voluntary decides to do so.The process voluntarily suspending itself is called yielding.
    - Preemptive multitasking: When process is to stop running and new process start running. Involunterly Suspending a running process is called premission.
        - Before the process begins it will give the timeslice for the process.
        - Depending on the time slice every process will get slice of processor’s time.
        - It also prevents any one process from monopolizing the processor.
    - Scheduling Algorithms:
       - First-Come-First-Serve (FCFS): It will follow the Quee method (FIFO) method. Which means Processes(Program) are executed in the order they arrive.
       - Shortest Job Next (SJN): If the process will take less time than the other process the cpu will execute shortest process.
       - Round Robin (RR): For every process the scheduler will allocate a fixed time slice in circuler order.
       - Priority Scheduling: Depending upon the user need the scheduler will give processes to high (or) low depending on that higher priority processes will get cpu time to complete the   process. 
       - Multilevel Queue Scheduling:processes are divided into multiple queues based on their priority, with each queue having a different priority level. Higher-priority processes are placed in queues with higher priority levels, while lower-priority processes are placed in queues with lower priority levels.
 
# Thread management
- Resource:  https://www.cs.uic.edu/~jbell/CourseNotes/OperatingSystems/4_Threads.html#:~:text=There%20are%20two%20types%20of,kernel%20of%20the%20OS%20itself.

# Deadlocks
- Plese go through link https://en.wikipedia.org/wiki/Deadlock
