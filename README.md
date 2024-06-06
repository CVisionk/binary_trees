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
- [tests/2-main.c](tests/2-main.c) [3-binary_tree_delete.c](3-binary_tree_delete.c): Deletes an entire binary tree.
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
- [tests/6-main](tests/6-main.c) [6-binary_tree_preorder.c](6-binary_tree_preorder.c): Function that goes through a binary tree using pre-order traversal
	- `Prototype: ` void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
	- if tree of func is NULL, do nothing.
	- `Compiled Using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c tests/6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre

**7. In-order traversal**
- [tests/7-main](tests/7-main.c) [7-binary_tree_inorder.c](7-binary_tree_inorder.c): Function that goes through a binary tree using in-order traversal
        - if tree of func is NULL, do nothing.
        - `Compiled Using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c tests/7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in

**8. Post-order traversal**
- [tests/8-main](tests/8-main.c) [8-binary_tree_inorder.c](8-binary_tree_inorder.c): Function that goes through a binary tree using post-order traversal
        - if tree of func is NULL, do nothing.
        - `Compiled Using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c tests/8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post

**9. Height**
- [tests/9-main](tests/9-main.c) [9-binary_tree_height.c](9-binary_tree_height.c): Measures the height of a binary tree
	- If tree is NULL, your function must return 0
	- `Compiled using: ` gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c 9-binary_tree_height.c tests/9-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 9-height

**10. Depth**
- [tests/10-main](tests/10-main.c) [10-binary_tree_depth.c](10-binary_tree_depth.c): Measures the depth of a node in a binary tree
	- If tree is NULL, your function must return 0
	- `Compiled using: ` gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c 10-binary_tree_depth.c tests/10-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 10-depth

**11. Size**
- [tests/11-main](tests/11-main.c) [11-binary_tree_depth.c](11-binary_tree_size.c): Measures the size of a node in a binary tree
	- If tree is NULL, your function must return 0
	- `Compiled using: ` gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c 11-binary_tree_size.c tests/11-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 11-size

**11. Size**
- [tests/12-main](tests/12-main.c) [12-binary_tree_leaves.c](12-binary_tree_leaves.c): Counts the number of leaves in a binary tree.
	- If tree is NULL, your function must return 0
	- `Compiled using: ` gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c 12-binary_tree_leaves.c tests/12-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 12-leaves

**13. Nodes**
- [tests/13-main](tests/13-main.c) [13-binary_tree_nodes.c](13-binary_tree_nodes.c): Counts the number of nodes with at least 1 child in a binary tree.
	- If tree is NULL, your function must return 0
	- `Compliled using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c 13-binary_tree_nodes.c tests/13-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 13-nodes

 **14. Balance factor**
- [tests/14-main](tests/14-main.c) [14-binary_tree_nodes.c](14-binary_tree_nodes.c):  Measures the balance factor of a binary tree.
	- If tree is NULL, your function must return 0
	- `Compliled using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c 14-binary_tree_balance.c tests/14-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c -o 14-balance

**15. Is full**
- [tests/15-main](tests/15-main.c) [15-binary_tree_is_full.c](15-binary_tree_is_full.c): Checks if a binary tree is full
	- If tree is NULL, your function must return 0
	- `Compiled using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c 15-binary_tree_is_full.c tests/15-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 15-full

**16. Is perfect**
-  [tests/16-main](tests/16-main.c) [16-binary_tree_is_perfect.c](16-binary_tree_is_perfect.c): Checks if a binary tree is perfect.
	- Checks if a binary tree is perfect.
	- `Compiled using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c 16-binary_tree_is_perfect.c tests/16-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 16-perfect

**17. Sibling**
- [tests/17-main](tests/17-main.c) [17-binary_tree_sibling.c](17-binary_tree_sibling.c): Finds the sibling of a node.
	- Your function must return a pointer to the sibling node
	- If node is NULL or the parent is NULL, return NULL
	- If node has no sibling, return NULL
	- `Compiled using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c tests/17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling

**18. Uncle**
- [tests/18-main](tests/18-main.c) [18-binary_tree_uncle.c](18-binary_tree_uncle.c): Finds the uncle of a node.
	- Your function must return a pointer to the uncle node
	- If node is NULL , return NULL
	- If node has no uncle, return NULL
	- `Compiled using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c tests/18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle

**19. Ancestor**
- [tests/19-main](tests/19-main.c) [19-binary_tree_ancestor.c](19-binary_tree_ancestor.c): Finds the ancestor of a node.
	- Your function must return a pointer to the ancestor node
	- If node is NULL , return NULL
	- If node has no uncle, return NULL
	- `Compiled using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/100-main.c 100-binary_trees_ancestor.c 0-binary_tree_node.c -o 100-ancestor



