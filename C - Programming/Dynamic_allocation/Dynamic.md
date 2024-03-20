- In C Programming we will use the dynamic memory allocation(Deciding input at Run time) by using malloc and calloc.
# malloc
```
ptr = (int*)malloc(n*sizeof(int))
```
# Realloc
- Suposse we need to reallocate the memory again we will use the Realloc.

```
ptr = (int *) realloc(ptr,newsize)
```
# calloc
- It is simmilar to malloc function except for two defferences,it will take two arguments 1.No of blocks 2. sizeof each block
```
ptr = (int *)calloc(5,sizeof(int));
```
