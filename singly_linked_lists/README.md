# C - Singly linked lists
Singly linked lists in C are linear data structures where each element, or node, contains a data field and a reference (link) to the next node in the sequence, with the last node pointing to NULL.

## Print list
This C function, print\_list, prints the elements of a singly linked list and returns the number of elements (nodes) in the list. Here's a brief breakdown:

- Initializes nodes counter for tracking list nodes.
- Loops until h is NULL, indicating list's end.
- Checks if node's string is NULL, prints "[0] (nil)" if true.
- If string exists, prints its length and content in "[length] string" format.
- Increments nodes for each node processed.
- Updates h to the next node (h-\>next) to continue.
- Returns total node count (nodes) after reaching list end.
##
Complie using the following code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
```
## List length
This C function, list\_len, calculates the length of a singly linked list, i.e., the number of elements (nodes) in the list. Here's how it works in brief:

- Initializes elements to count nodes in the list.
- Iterates over each node in the list with a while loop until reaching the end (h is NULL).
- Increments elements by 1 for each node encountered.
- Updates h to the next node (h-\>next) to continue traversal.
- Returns the total count of nodes (elements) as the length of the list
##
Compile using the following code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
```
## Add node

This C function, add\_node, inserts a new node at the beginning of a linked list. Here's a concise explanation:
- Allocates memory for a new node and handles allocation failure.
- Duplicates the input string and handles duplication failure, freeing memory appropriately.
- Calculates the length of the input string.
- Assigns the duplicated string and its length to the new node.
- Updates the head of the list to point to the new node and returns a pointer to it.
##
Compile using the following code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
```
## Add node at the end

## Free list