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

**2. Insert right**
- [tests/2-main.c](tests/2-main.c) [2-binary_tree_insert_right.c](1-binary_tree_insert_right.c):inserts a node as the right-child of another node
	- Returns pointer to new node, NULL otherwise.
	- If parent already has right child, new node must take it's place and old node assigned as right child of new node.
	- `Compiled using: ` gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c tests/2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right

**3. Delete**
- [tests/2-main.c](tests/2-main.c) [3-binary_tree_delete.c](3-binary_tree_delete.c): deletes an entire binary tree.
	-  node of the tree to delete.
	- `Compiled using: ` gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c tests/3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del

**4. Is leaf**
- [tests/4-main](tests/4-main.c) [4-binary_tree_is_leaf.c](4-binary_tree_is_leaf.c): Checks if node is leaf.
	- Returns 1 if node is leaf, 0 otherwise.
	- Return 0 if node is NULL.
	- `Compiled Using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c 4-binary_tree_is_leaf.c tests/4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf

**5. Is root**
- [tests/5-main](tests/5-main.c) [5-binary_tree_is_root.c](5-binary_tree_is_root.c): Checks if node is leaf.
	- Returns 1 if node is root, 0 otherwise.
	- Return 0 if node is NULL.
	- `Compiled Using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c 5-binary_tree_is_root.c tests/5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root

**6. Pre-order traversal**
- [tests/6-main](tests/6-main.c) [6-binary_tree_preorder.c](6-binary_tree_preorder.c):  function that goes through a binary tree using pre-order traversal
	- `Prototype: ` void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
	- if tree of func is NULL, do nothing.
	- `Compiled Using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c tests/6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre

**7. In-order traversal**
- [tests/7-main](tests/7-main.c) [7-binary_tree_inorder.c](7-binary_tree_inorder.c):  function that goes through a binary tree using in-order traversal
        - `Prototype: ` void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
        - if tree of func is NULL, do nothing.
        - `Compiled Using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c tests/7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in

**8. Post-order traversal**
- [tests/8-main](tests/8-main.c) [8-binary_tree_inorder.c](8-binary_tree_inorder.c):  function that goes through a binary tree using post-order traversal
        - `Prototype: ` void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
        - if tree of func is NULL, do nothing.
        - `Compiled Using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c tests/8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post
