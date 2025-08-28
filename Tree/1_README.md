# 🌳 Tree Programs in C  

This folder contains implementations of **Binary Tree** and **Binary Search Tree (BST)** programs in C.  
Trees are hierarchical data structures widely used in databases, compilers, operating systems, and file systems.  

---

## 📌 Programs Included  

1. **Creation of Binary Tree**  
   - Build a binary tree with user input.  
   - Demonstrates parent-child relationships and node connections.  

2. **Inorder Traversal of BST**  
   - Traverses the tree in **Left → Root → Right** order.  
   - Produces nodes in **sorted order** for BST.  

3. **Preorder Traversal of BST**  
   - Traverses in **Root → Left → Right** order.  
   - Useful for copying or creating a prefix expression.  

4. **Postorder Traversal of BST**  
   - Traverses in **Left → Right → Root** order.  
   - Useful for deleting nodes or creating a postfix expression.  

---

## 📂 Suggested File Structure  

📂 Tree
┣ 📜 create_binary_tree.c
┣ 📜 inorder_traversal.c
┣ 📜 preorder_traversal.c
┣ 📜 postorder_traversal.c
┗ 📜 README.md

yaml
Copy code

---

## ⚙️ How to Compile & Run  

```bash
gcc create_binary_tree.c -o create_binary_tree
./create_binary_tree
bash
Copy code
gcc inorder_traversal.c -o inorder_traversal
./inorder_traversal
bash
Copy code
gcc preorder_traversal.c -o preorder_traversal
./preorder_traversal
bash
Copy code
gcc postorder_traversal.c -o postorder_traversal
./postorder_traversal
✅ Key Features
Covers creation and basic traversals of Binary Trees / BST.

Helps understand recursive tree traversal techniques.

Beginner-friendly implementations in C language.

Useful for DSA learning & interview preparation.

📊 Traversal Orders (Example)
For the tree:

markdown
Copy code
       10
      /  \
     5    20
    / \   /
   3   7 15
Inorder (L → Root → R): 3 5 7 10 15 20

Preorder (Root → L → R): 10 5 3 7 20 15

Postorder (L → R → Root): 3 7 5 15 20 10