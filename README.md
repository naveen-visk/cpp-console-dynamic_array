# C++ Dynamic Array Implementation

A low-level implementation of a self-resizing contiguous array built directly on Heap memory in C++, simulating the foundational architecture behind standard dynamic containers like `std::vector`.

## 📌 Features
- **Heap Allocation:** Dynamically allocates memory at runtime using raw C++ pointers.
- **Dynamic Capacity Doubling:** Automatically resizes and doubles array capacity when full to accommodate new elements.
- **Memory Leak Protection:** Explicitly releases unneeded memory using `delete[]` and clears dangling pointers with `nullptr`.

## 🛠️ Concepts Learned
- **Manual Memory Management:** Allocation with `new[]` and deallocation with `delete[]`.
- **Heap vs. Stack:** Understanding memory lifetimes and persistent dynamic storage.
- **Pointer Manipulation:** Swapping array addresses between temporary buffers and original pointers.
- **Amortized Expansion Logic:** Resizing strategies to efficiently manage dynamic collections.

## 🚀 How to Run

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/YOUR_USERNAME/cpp-dynamic-array.git](https://github.com/YOUR_USERNAME/cpp-dynamic-array.git)
   cd cpp-dynamic-array
