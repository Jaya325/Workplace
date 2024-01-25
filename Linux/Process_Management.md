# Process_management
- A process is a program in the middle of the execution
- A Process begins it's life when it is created.
- The fork() system call, which creates a new process by duplicating an existing one.The process that calls fork() is the parent, whereas the new process is the child.
- The Process exits via the exit() system call.
- A parent process can know about the status of a terminated child via the wait4().
- The kernel stores the list of processes in a circular doubly linked list.
- a) Forking: fork() via the clone() system call.This call takes a series of flags that specify which resources, if any, the parent and child process should share.
- Process Descriptor contains the data that describes the executing program. Like openfiles,address space, pending signals, the process state & much more.
- Every process has a unique id which called PID (process identification).
- Process state has a 5 types
- ![Screenshot (7)](https://github.com/Jaya325/Workplace/assets/77492397/ce6e38be-0e3a-4f15-afff-19902e22793d)

- b) Running: The process (Task) is currently executing on the CPU.
- c) Ready: The process is waiting for a processor to be allocated to it. Ready processes are waiting for the operating system to assign them a processor so that they can run.
- d) Waiting (Blocked): When a process needs to wait for a resource, such as user input or a file towards becoming accessible, it enters the waiting state.
- e) Terminated (or Exit): When a process completes its operation or is terminated by the operating system, it is transferred to the terminated state and awaits removal from memory space.

  @PCB
- Every Process will have a seperate Block which we call as Proces Control Block (PCB)
- A Process Control Block (PCB) is a data structure used by the operating system to manage information about a running process.
- PCB contains various pieces of information about a process,like state,pc,cpu registers,memory allocation and other relevent information allowing the operating system to control and manage the execution of processes.
