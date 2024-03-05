# Structues
- Structure is a user defined data type which is a collection of different types of data which are in contigious memory location
- Eg:
  ```
  struct st
  {
   char name[20];
   int age;
   float marks;
  };
  ```
  - When we create a structure it won't take any memory location when we created the object to that structure then it will take some memory space.
  - Like
    ```
    struct st s;
    ```
-----------------------------------------------

# Unions
- Union is a collection of different datatypes which are in same memory location
- Eg
  ```
   union  u
  {
    int i;
    char ch;
  };
  ```
