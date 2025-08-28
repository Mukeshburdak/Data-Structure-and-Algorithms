# 📂 Stack Programs in C  

This folder contains **Stack implementations in C** using different approaches.  
The stack is a **LIFO (Last In First Out)** data structure, widely used in compilers, expression evaluation, and memory management.  

---

## 📌 Programs Included  

1. **Stack Implementation using Array**  
   - Basic operations: `push()`, `pop()`, `peek()`, and `display()`.  
   - Demonstrates fixed-size stack using static memory allocation.  

2. **Stack Implementation using Linked List**  
   - Dynamic memory allocation with linked list nodes.  
   - Supports unlimited elements (limited by system memory).  

3. **Stack Implementation using Functions with Linked List**  
   - Modular approach: stack operations written as **separate functions**.  
   - Improves code **readability, reusability, and maintainability**.  

---

## 📂 Suggested File Structure  

📂 Stack
┣ 📜 stack_array.c
┣ 📜 stack_linkedlist.c
┣ 📜 stack_functions_linkedlist.c
┗ 📜 README.md

yaml
Copy code

---

## ⚙️ How to Compile & Run  

```bash
gcc stack_array.c -o stack_array
./stack_array