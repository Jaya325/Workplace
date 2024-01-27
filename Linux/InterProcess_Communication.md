# IPC
- It is a mechanisms that allows processes in an operating system to communicate with each other. by using ipc we can easily share the information and will get computation speedup.
   - Semaphore: Semaphore will control the resources of Shared memory. By using Semaphore only one resource will access at a time.
   - Mutex: A Locking mechanisum. Ensures only one thread access a shared resource at a time. It prevents race conditions and data corruption.
   - Sockets: it is a communication between processes over a network or locally
- Shared Memory : In Shared memory a region of memory is shared. The process can then exchange information by reading and writing data to the sgared region.
   - Eg : We have two processes A&B. If supose process A wants to communicate the information the process A shares the information to Shared region and then Process B will have access to the region so that the information get's exchanged.
- Message Passing: The communication takes place by means of messages exchanged beetween the cooperating processes.
    - Eg : Process A wants to communicate with process B. Then Process A will create a message and it will send to the Kernal and the will know it is for Pocess B. So the kernal will send the message to the Process B.
 
- Resource : https://www.geeksforgeeks.org/inter-process-communication-ipc/
