# Memory Management
- Memory management it will controlling and coordinating computer memory,By ensuring the different processes&application can utilize the computer memory resources.
- Pages : The processor’s smallest addressable unit is a byte or a word, the memory management unit typically deals in pages. In every modern system comes with 64-bit architectures have 8KB pages.
- Static Allocation: Memory is allocated at compile time and remains fixed throughout the program's execution.
- Dynamic Allocation: Memory is allocated at runtime, and the size can vary as needed.
- After the allocation of aynamically allocated memory we need to free the memory else it will leades to memory leak.
- Zones : In pages,because of their physical address in memory, cannot be used for certain tasks. Because of this limitation, the kernel divides pages into different zones The kernel uses the zones to group pages of similar properties. the zones do not have any physical relevance but are simply logical groupings used by the kernel to keep track of pages
- Segmentation: Divides memory into segments based on the type of data.
