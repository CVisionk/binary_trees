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
- [tests/100-main](tests/100-main.c) [19-binary_tree_ancestor.c](19-binary_tree_ancestor.c): Finds the ancestor of a node.
	- Your function must return a pointer to the ancestor node
	- If node is NULL , return NULL
	- If node has no uncle, return NULL
	- `Compiled using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c tests/100-main.c 100-binary_trees_ancestor.c 0-binary_tree_node.c -o 100-ancestor

**20. Level-order traversal**
-  [tests/101-main](tests/101-main.c) [101-binary_tree_levelorder.c](101-binary_tree_levelorder.c): function that goes through a binary tree using level-order traversal.
	- If tree or func is NULL, do nothing.
	- `Complete using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c tests/101-main.c 101-binary_tree_levelorder.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 101-lvl

**21. Is complete**
- [tests/102-main](tests/102-main.c) [102-binary_tree_is_complete.c](102-binary_tree_is_complete.c):  Checks if a binary tree is complete.
	- If tree is NULL, your function must return 0.
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/102-main.c 102-binary_tree_is_complete.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 102-complete

**22. Rotate left**
- [tests/103-main](tests/103-main.c) [103-binary_tree_rotate_left.c](103-binary_tree_rotate_left.c):function that performs a left-rotation on a binary tree
	- return a pointer to the new root node of the tree once rotated
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 103-binary_tree_rotate_left.c tests/103-main.c 0-binary_tree_node.c -o 103-rotl

**23. Rotate right**
- [tests/104-main](tests/104-main.c) [104-binary_tree_rotate_right.c](104-binary_tree_rotate_right.c): function that performs a right-rotation on a binary tree.
	-  function must return a pointer to the new root node of the tree once rotated.
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic -I. binary_tree_print.c 104-binary_tree_rotate_right.c tests/104-main.c 0-binary_tree_node.c -o 104-rotr

**24. Is BST**
- [tests/110-main](tests/110-main.c) [110-binary_tree_is_bst.c](110-binary_tree_is_bst.c): function that checks if a binary tree is a valid Binary Search Tree.
	-  function must return 1 if tree is a valid BST, and 0 otherwise.
	- If tree is NULL, return 0.
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/110-main.c 110-binary_tree_is_bst.c 0-binary_tree_node.c -o 110-is_bst

**25. BST - Insert**
- [tests/111-main](tests/111-main.c) [111-bst_insert.c](111-bst_insert.c):inserts a value in a Binary Search Tree
	- Where tree is a double pointer to the root node of the BST to insert the value And    value is the value to store in the node to be inserted
	- Your function must return a pointer to the created node, or NULL on failure
	- If the address stored in tree is NULL, the created node must become the root node.
	- If the value is already present in the tree, it must be ignored.
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 111-bst_insert.c tests/111-main.c 0-binary_tree_node.c -o 111-bst_insert

**26. BST - Array to BST**
- [tests/112-main](tests/112-main.c) [112-array_to_bst.c](112-array_to_bst.c):builds a Binary Search Tree from an array.
	- Where array is a pointer to the first element of the array to be converted
	- size is the number of element in the array
	- Your function must return a pointer to the root node of the created BST, or NULL on failure
	- If a value of the array is already present in the tree, this value must be ignored
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 112-array_to_bst.c tests/112-main.c 111-bst_insert.c 0-binary_tree_node.c -o 112-bst_array

**27. BST - Search**
- [tests/113-main](tests/113-main.c) [113-bst_search.c](113-bst_search.c): function that searches for a value in a Binary Search Tree
	- Prototype: bst_t *bst_search(const bst_t *tree, int value);
	- Where tree is a pointer to the root node of the BST to search
	- value is the value to search in the tree
	- Your function must return a pointer to the node containing a value equals to value
	- If tree is NULL or if nothing is found, your function must return NULL
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 113-bst_search.c 113-main.c 112-array_to_bst.c 111-bst_insert.c 0-binary_tree_node.c -o 113-bst_search

**28. BST - Remove**
- [tests/114-main](tests/114-main.c) [114-bst_remove.c](114-bst_remove.c):  function that removes a node from a Binary Search Tree.
	- Where root is a pointer to the root node of the tree where you will remove a node
	- And value is the value to remove in the tree
	- Once located, the node containing a value equals to value must be removed and freed
	- If the node to be deleted has two children, it must be replaced with its first in-order successor (not predecessor)
	- Your function must return a pointer to the new root node of the tree after removing the desired value
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 114-bst_remove.c tests/114-main.c 112-array_to_bst.c 111-bst_insert.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 114-bst_rm

**29. Big O #BST**
- average time complexities of those operations on a Binary Search Tree (one answer per line):
	- Inserting the value n
	- Removing the node with the value n
	- Searching for a node in a BST of size n

**30. Is AVL**
- [tests/120-main](tests/120-main.c) [120-binary_tree_is_avl.c](120-binary_tree_is_avl.c): checks if a binary tree is a valid AVL Tree
	- Your function must return 1 if tree is a valid AVL Tree, and 0 otherwise
	- If tree is NULL, return 0
	- Properties of an AVL Tree:
		- An AVL Tree is a BST
		- The difference between heights of left and right subtrees cannot be more than one
		- The left and right subtrees must also be AVL trees

**31. AVL - Insert**
- [tests/121-main](tests/121-main.c) [121-avl_insert.c](121-avl_insert.c): function that inserts a value in an AVL Tree
	- Your function must return a pointer to the created node, or NULL on failure
	- If the address stored in tree is NULL, the created node must become the root node.
	- The resulting tree after insertion, must be a balanced AVL Tree
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 121-avl_insert.c tests/121-main.c 14-binary_tree_balance.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c 0-binary_tree_node.c -o 121-avl_insert
	
**32. AVL - Array to AVL**
- [tests/122-main](tests/122-main.c) [122-array_to_avl.c](122-array_to_avl.c): function that builds an AVL tree from an array.
	- Where array is a pointer to the first element of the array to be converted, size is the number of element in the array.
	- Your function must return a pointer to the root node of the created AVL tree, or NULL on failure
	- If a value of the array is already present in the tree, this value must be ignored
	`Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 122-array_to_avl.c tests/122-main.c 121-avl_insert.c 0-binary_tree_node.c 14-binary_tree_balance.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c -o 122-avl_array

**33. AVL - Remove**
- [tests/123-main](tests/123-main.c) [123-avl_remove.c](123-avl_remove.c): function that removes a node from an AVL tree.
	- Once located, the node containing a value equals to value must be removed and freed
	- If the node to be deleted has two children, it must be replaced with its first in-order successor (not predecessor)
	- After deletion of the desired node, the tree must be rebalanced if necessary
	- Your function must return a pointer to the new root node of the tree after removing the desired value, and after rebalancing
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 123-avl_remove.c tests/123-main.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c 122-array_to_avl.c 121-avl_insert.c 14-binary_tree_balance.c 3-binary_tree_delete.c 0-binary_tree_node.c -o 123-avl_rm

**34. AVL - From sorted array**
- [tests/124-main](tests/124-main.c) [124-sorted_array_to_avl.c](124-sorted_array_to_avl.c) function that builds an AVL tree from an array.
	- Your function must return a pointer to the root node of the created AVL tree, or NULL on failure
	- You can assume there will be no duplicate value in the array
	- You are not allowed to rotate
	- You can only have 2 functions in your file
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/124-main.c 124-sorted_array_to_avl.c 0-binary_tree_node.c -o 124-avl_sorted

**35. Big O #AVL Tree**
- average time complexities of those operations on an AVL Tree (one answer per line).
	- Inserting the value n
	- Removing the node with the value n
	- Searching for a node in an AVL tree of size n

**36. Is Binary heap**
- [tests/130-main](tests/130-main.c) [130-binary_tree_is_heap.c](130-binary_tree_is_heap.c): function that checks if a binary tree is a valid Max Binary Heap.
	- Your function must return 1 if tree is a valid Max Binary Heap, and 0 otherwise
	- If tree is NULL, return 0
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/130-main.c 130-binary_tree_is_heap.c 0-binary_tree_node.c -o 130-is_heap

**37. Heap - Insert**
- [tests/131-main](tests/131-main.c) [131-heap_insert.c](131-heap_insert.c): function that inserts a value in Max Binary Heap
	- Your function must return a pointer to the created node, or NULL on failure
	- If the address stored in root is NULL, the created node must become the root node.
	- You have to respect a Max Heap ordering
	- You are allowed to have up to 6 functions in your file
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/131-main.c 131-heap_insert.c 0-binary_tree_node.c -o 131-heap_insert

**38. Heap - Array to Binary Heap**
- [tests/132-main](tests/132-main.c) [132-array_to_heap.c](132-array_to_heap.c):  function that builds a Max Binary Heap tree from an array.
	- Your function must return a pointer to the root node of the created Binary Heap, or NULL on failure
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/132-main.c 132-array_to_heap.c 131-heap_insert.c 0-binary_tree_node.c -o 132-heap_array

**39. Heap - Extract**
- [tests/133-main](tests/133-main.c) [133-heap_extract.c](133-heap_extract.c): function that extracts the root node of a Max Binary Heap.
	- Your function must return the value stored in the root node
	- The root node must be freed and replace with the last level-order node of the heap
	- Once replaced, the heap must be rebuilt if necessary
	- If your function fails, return 0
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/133-main.c 133-heap_extract.c 132-array_to_heap.c 131-heap_insert.c 3-binary_tree_delete.c -o 133-heap_extract

**40. Heap - Sort**
- [tests/134-main](tests/134-main.c) [134-heap_to_sorted_array.c](134-heap_to_sorted_array.c):
	- Where heap is a pointer to the root node of the heap to convert
	- And size is an address to store the size of the array
	- You can assume size is a valid address
	- Since we are using Max Heap, the returned array must be sorted in descending order
	- `Compile using: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/134-main.c 134-heap_to_sorted_array.c 133-heap_extract.c 132-array_to_heap.c 131-heap_insert.c -o 134-heap_sort

**41. Big O #Binary Heap**
- What are the average time complexities of those operations on a Binary Heap (one answer per line)
	- Inserting the value n
	- Extracting the root node
	- Searching for a node in a binary heap of size n