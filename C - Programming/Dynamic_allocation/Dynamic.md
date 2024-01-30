In C Programming we will use the dynamic memory allocation(Deciding input at Run time) by using malloc and calloc
'''
ptr = (int*)malloc(n*sizeof(int));
```
Suposse we need to reallocate the memory again we will use the Realloc
```
ptr = (int *) realloc(ptr,newsize);
```
