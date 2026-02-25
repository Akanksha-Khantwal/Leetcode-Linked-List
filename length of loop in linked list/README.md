🔁 Length of Loop in Linked List (Floyd’s Cycle Detection)

Efficiently detects and calculates the length of a loop in a singly linked list using Floyd’s Tortoise and Hare Algorithm.

📌 Problem Statement

Given the head of a singly linked list, determine:

Whether the linked list contains a loop.

If a loop exists, return the length of the loop.

If no loop exists, return 0.

🧠 Approach Used

We use Floyd’s Cycle Detection Algorithm, also known as:

🐢 Tortoise and Hare Algorithm

🚀 Steps:

Initialize two pointers:

slow → moves 1 step at a time

fast → moves 2 steps at a time

Traverse the linked list:

If slow == fast, a cycle exists.

If fast reaches NULL, no cycle exists.

Once a cycle is detected:

Keep one pointer fixed.

Move another pointer until it completes one full loop.

Count the number of nodes traversed.
🕒 Time	O(N)
🧠 Space	O(1)

✔ Only constant extra space used
✔ Efficient even for large linked lists

🎯 Why This Approach?

No extra memory (unlike using HashSet)

Detects loop and calculates its length in one traversal

Industry-standard technique

📖 Example
Input:

Linked List with cycle:

1 → 2 → 3 → 4 → 5
        ↑       ↓
        ← ← ← ← ←
Output:
3

Because the loop contains nodes: 3 → 4 → 5
