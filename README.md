# Workplace
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
- Resource:  https://www.cs.uic.edu/~jbell/CourseNotes/OperatingSystems/4_Threads.html#:~:text=There%20are%20two%20types%20of,kernel%20of%20the%20OS%20itself
- Threads of execution, often shortened to threads, are the objects of activity within the process. Each thread includes a unique program counter, process stack, and set of processor registers.The kernel schedules individual threads, not processes.
- 

# Deadlocks
- Plese go through link https://en.wikipedia.org/wiki/Deadlock
