# Section: Basics

* Invoking the Compiler and Linker (Hello World, with puts, no printf black box)
* Variables, Types
* Functions
* if/else if/else
* switch
* while/for

# HW
## Introduce Functions/Variables
```C++
namespace Fibonacci
{
  // The fibonacci sequence is a series of numbers in which a given index is the
  // sum of the values of the previous two indicies. The first two starting
  // values as we will define them, are 0 and 1.

  // You will be writing a function that computes an index within the fibonacci
  // sequence. Given 0 you will return 0, given 1, return 1, and given 3, return
  // 3.
  int FibonacciIterative(int aIndex);
  int FibonacciRecursive(int aIndex);
}
```


# Section:  Introducing Classes/Structs

* `class`es, `struct`s

## HW 
```C++
namespace Classes
{
  class Animal
  {
    virtual void Speak;
  };

  class Mammal : public Mammal
  {

  };

  class Dog : public Mammal
  {

  };

  class Cat : public Mammal
  {

  };
}
```

# Section: Traditional C++ Polymorphism

* Function Overloads
* `virtual`, `override`

## HW
### Introducing inheritance, `virtual`, `override`

# Section: Traditional C++ Polymorphism

* RAII
* Ownership concepts

## HW
### Introducing owning pointer RAII concept

```C++
namespace UniquePtrInt
{
  class UniquePtr
  {
    private:
    // Data
    int* mData;

    public:
    // Make a UniquePtr that is empty (owns nothing).
    UniquePtr();

    // Make a UniquePtr that owns the provided pointer.
    UniquePtr(int* aValue);

    UniquePtr(UniquePtr&) = delete;

    // We delete the Copy Constructor because UniquePtrs are unique, they can
    // only be moved.
    UniquePtr(UniquePtr&) = delete;

    // Cleans up the pointer the UniquePtr owns.
    ~UniquePtr();

    // If a value exists, delete it and clear the UniquePtr.
    void Release();

    // Take ownership of the given pointer, this requires releasing a pointer if
    // we own one.
    void Reset(int* aPtr);

    // Return the pointer we currently contain.
    int* Get();
  };

  // Make a UniquePtr that owns an int, constructed with the value provided.
  UniquePtr MakeUnique(int aValue);
}
```

# Section: Templates 1
* Class Templates

## HW
### Introducing Class Templates
```C++
namespace UniquePtrTemplated
{
  template <typename T>
  class UniquePtr
  {
    private:
    // Data
    int* mData;

    public:
    // Make a UniquePtr that is empty (owns nothing).
    UniquePtr();

    // Make a UniquePtr that owns the provided pointer.
    UniquePtr(T* aValue);

    // Cleans up the pointer the UniquePtr owns.
    ~UniquePtr();

    // If a value exists, delete it and clear the UniquePtr.
    void Release();

    // Take ownership of the given pointer, this requires releasing a pointer if
    // we own one.
    void Reset(int* aPtr);

    // Return the pointer we currently contain.
    int* Get();
  };
}
```

# Section: Templates 2
* Function Templates
* Variadic Templates

## HW
### Introducing Variadic Template Functions
```C++
namespace MakeUniqueVariadic
{
  using namespace UniquePtrTemplated;

  // Make a UniquePtr that owns a T, constructed with the arguments provided.
  template <typename T, typename... Args>
  UniquePtr<T> MakeUnique(Args&&... aArgs);
}
```

## HW
### Introducing Containers
```C++
namespace HW4
{
  class ForwardList
  {
    private:

    struct Node
    {
      int aValue;
      Node* mNext;
    };

    // Data
    Node* mHead;

    public:

    // Make a forward list that owns nothing.
    ForwardList();
  };
}
```