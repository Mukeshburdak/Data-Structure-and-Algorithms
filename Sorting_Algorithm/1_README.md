# 📂 Sorting Algorithms in C  

This folder contains implementations of basic **sorting algorithms in C**.  
Sorting is a fundamental concept in Data Structures and Algorithms, used to arrange data in a particular order (ascending/descending).  

---

## 📌 Programs Included  

1. **Insertion Sort**  
   - Builds the final sorted array one item at a time.  
   - Works well for **small datasets** and is **adaptive** (efficient for nearly sorted arrays).  

2. **Selection Sort**  
   - Divides the array into a sorted and unsorted part.  
   - Repeatedly selects the **smallest element** from the unsorted part and places it in the sorted part.  

---

## 📂 Suggested File Structure  

📂 Sorting
┣ 📜 insertion_sort.c
┣ 📜 selection_sort.c
┗ 📜 README.md

yaml
Copy code

---

## ⚙️ How to Compile & Run  

```bash
gcc insertion_sort.c -o insertion_sort
./insertion_sort

bash
Copy code
gcc selection_sort.c -o selection_sort
./selection_sort

✅ Key Features
Beginner-friendly implementations of Insertion Sort & Selection Sort.

Written in C for easy understanding of algorithm logic.

Demonstrates step-by-step sorting process.

Useful for DSA learners & coding practice.


📊 Time Complexity
Algorithm	Best Case	Worst Case	Average Case	Space Complexity
Insertion Sort	O(n)	O(n²)	O(n²)	O(1)
Selection Sort	O(n²)	O(n²)	O(n²)	O(1)