# Scheduler management 
- Scheduler decides which process runs,when, and for how long. By Deciding which Process runs next, The scheduler is resposnsible for best utilizing the system. It will take a decesion which process runs next, given a set of runnable processes.
    - Cooperative Multitasking: Process does not stop running until it voluntary decides to do so.The process voluntarily suspending itself is called yielding.
    - Preemptive multitasking: When process is to stop running and new process start running. Involunterly Suspending a running process is called premission.
        - Before the process begins it will give the timeslice for the process.
        - Depending on the time slice every process will get slice of processor’s time.
        - It also prevents any one process from monopolizing the processor.
    - Scheduling Algorithms:
        - First-Come-First-Serve (FCFS): It will follow the Quee method (FIFO) method. Which means Processes(Program) are executed in the order they arrive.
        - Shortest Job Next (SJN): If the process will take less time than the other process the cpu will execute shortest process
        - Round Robin (RR): For every process the scheduler will allocate a fixed time slice in circuler order.
        - Priority Scheduling: Depending upon the user need the scheduler will give processes to high (or) low depending on that higher priority processes will get cpu time to complete the process.
        - Multilevel Queue Scheduling:processes are divided into multiple queues based on their priority, with each queue having a different priority level. Higher-priority processes are placed in queues with higher priority levels, while lower-priority processes are placed in queues with lower priority levels.
     - # 
