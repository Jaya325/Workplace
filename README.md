# Workplace

Context Switching
- It is a process of Saving & restoring the state of the cpu(central processing unit) so it can switch from one task to another task.
a) Save Context: The os(operating system) decides it has to switch from one process to another process it saves the current process of the cpu.It saves the details of Program counter,cpu register values, and other relevent information because when it comes back the cpu want to know where to start.
b) Load Context: The Saved context of the new process should be loded into cpu. This includes Program counter, Register values and other information for the new process to resume it's execution.
c) Switch Execution: The cpu switch from currently running process into new process. This allows the new process to start or resume its execution.
