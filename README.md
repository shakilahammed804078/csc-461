# Array Memory Allocation Examples

This repository contains simple code examples that demonstrate different categories of array memory allocation in C++ and Python.

## Categories Demonstrated

1. **Fixed Stack Dynamic**
2. **Stack Dynamic**
3. **Fixed Heap Dynamic**
4. **Heap Dynamic**

Each category is demonstrated in both C++ and Python.

---

## 🆚 Structural Comparison: C++ vs Python

This section highlights how array memory allocation is handled differently between C++ and Python across the four memory categories.

| Category               | C++ Implementation                                                                 | Python Implementation                                                              |
|------------------------|-------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------|
| **Fixed Stack Dynamic**| Uses fixed-size arrays defined at compile time, stored on the stack.               | Simulates fixed-size using a list with a known size, though Python lists are heap. |
| **Stack Dynamic**      | Uses variable-length arrays (VLAs), stack-allocated at runtime (compiler-dependent).| Uses list comprehension based on user input. The list is dynamically allocated.     |
| **Fixed Heap Dynamic** | Allocates a fixed-size array on the heap using `new[]`, manual `delete[]` required.| Creates a list of fixed size (`[0]*n`), but heap-managed and auto garbage-collected.|
| **Heap Dynamic**       | Implements a manually resizing array on the heap, reallocating as needed.          | Python lists automatically resize using internal doubling strategy.                |

---

## 🔍 Key Differences

- **Memory Control**:
  - **C++** gives fine-grained control over stack vs heap memory.
  - **Python** abstracts memory entirely, always using heap under the hood for lists.

- **Typing**:
  - **C++** requires static type declarations (e.g., `int arr[5]`).
  - **Python** is dynamically typed, with type decided at runtime.

- **Resizing**:
  - In **C++**, dynamic resizing requires manually allocating new memory and copying elements.
  - **Python** lists grow automatically as needed.

- **Error Handling**:
  - **C++** needs careful memory management to avoid leaks or crashes.
  - **Python** handles most errors via exceptions and garbage collection.
