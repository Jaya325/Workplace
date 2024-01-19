# Tamplates 
- Templates allows functions and classes to operate with generic types
- This will allows a function (or) class to work on many diffrent data types
- This will used to over come the disadvantage of Function overloading 

- Syntax
```
template <typename T>
class Stack {
public:
  void push(T element);
  T pop();
  bool empty();
  T top();
private:
  std::vector<T> elements;
};
```
