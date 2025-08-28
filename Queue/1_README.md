# 📂 Queue Programs in C  

This folder contains **Queue implementations in C** using different approaches.  
A queue is a **FIFO (First In First Out)** linear data structure, widely used in scheduling, buffering, and resource management.  

---

## 📌 Programs Included  

1. **Queue Implementation using Array**  
   - Implements queue using a **static array**.  
   - Supports operations: `enqueue()`, `dequeue()`, `peek()`, and `display()`.  

2. **Queue Implementation using Linked List**  
   - Implements queue with **dynamic memory allocation**.  
   - Efficiently handles overflow as size grows dynamically.  

3. **Sorting Queue Elements**  
   - Program to **sort the elements of a queue** in ascending order.  
   - Demonstrates traversal and reordering logic.  

4. **Priority Queue Implementation**  
   - Inserts elements in a **priority queue** based on priority value.  
   - Higher priority elements are dequeued before lower priority ones.  

---

## 📂 Suggested File Structure  

📂 Queue
┣ 📜 queue_array.c
┣ 📜 queue_linkedlist.c
┣ 📜 queue_sort.c
┣ 📜 priority_queue.c
┗ 📜 README.md

yaml
Copy code

---

## ⚙️ How to Compile & Run  

```bash
gcc queue_array.c -o queue_array
./queue_array
bash
Copy code