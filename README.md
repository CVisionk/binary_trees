# binary_trees


## Tasks
**0. New node**
- [tests/0-main.c](tests/0-main.c) [0-binary_tree_node.c](0-binary_tree_node.c): function that creates a binary tree node.
	- When created a node does not have a child.
	- Returns pointer to new node, null otherwise.
	- `Not Compiled using: ` /*gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c ./tests/0-main.c 0-binary_tree_node.c -o 0-node*/
	- `Compiled using:` gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c tests/0-main.c 0-binary_tree_node.c -o 0-node
	- `Note:` The -I (uppercase "i") option in gcc is used to specify a directory to be added to the list of directories that the compiler searches for header files. The . (dot) specifies the current directory. 

**1. Insert left**
- [tests/1-main.c](tests/1-main.c) [1-binary_tree_insert_left.c](1-binary_tree_insert_left.c):inserts a node as the left-child of another node
	- Returns pointer to new node, NULL otherwise.
	- If parent already has left child, new node must take it's place and old node assigned as left child of new node.
	- `Compiled using: ` gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c tests/1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left
