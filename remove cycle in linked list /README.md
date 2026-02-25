🔁 Remove Loop in Linked List (Floyd’s Cycle Detection)

Efficiently detect and remove a loop in a singly linked list using Floyd’s Cycle Detection Algorithm (Tortoise & Hare).

📌 Problem Statement

Given the head of a singly linked list, detect whether a loop exists.
If a loop is found, remove it without losing any nodes.

🧠 Approach Used
✅ Step 1: Detect Loop (Floyd’s Algorithm)

We use two pointers:

🐢 slow → moves 1 step

🐇 fast → moves 2 steps

If a loop exists, they will eventually meet inside the loop.

✅ Step 2: Find Start of Loop

Once slow == fast:

Move slow back to head

Move both one step at a time

The point where they meet again is the start of the loop

✅ Step 3: Remove Loop

Traverse from loop start until the node whose next points back to loop start.

Set:

temp->next = NULL;

Loop is removed successfully 🎉

⏱ Time & Space Complexity
Complexity	Value
Time	O(N)
Space	O(1)

✔ Single traversal
✔ No extra memory used

🎯 Key Concepts Used

Floyd’s Cycle Detection Algorithm

Two Pointer Technique

Linked List Traversal

Constant Space Optimization

📷 Visualization
1 → 2 → 3 → 4 → 5
          ↑     ↓
          ← ← ← ←

After removal:

1 → 2 → 3 → 4 → 5 → NULL
