# Holberton School Projects

## Michael L. Gans

#### Resources
<p> Markdown - https://www.markdownguide.org/basic-syntax/ <br>
Data Structures - https://intranet.hbtn.io/concepts/889 <br></p>

#### SYSK
<p> When and why using linked lists vs arrays <br>
 - https://www.geeksforgeeks.org/linked-list-vs-array/ <br>
How to build and use linked lists <br>
 - https://www.geeksforgeeks.org/introduction-to-linked-list-data-structure-and-algorithm-tutorial/ <br>
 - https://www.geeksforgeeks.org/applications-advantages-and-disadvantages-of-linked-list/ </p>

## Task 0: [Print List](https://github.com/michaellgans/holbertonschool-low_level_programming/blob/main/singly_linked_lists/0-print_list.c)
<details><summary>Task Requirements</summary>

>Write a function that prints all the elements of a `list_t` list.
>
>- Prototype: `size_t print_list(const list_t *h);` <br>
>- Return: the number of nodes <br>
>- Format: see example <br>
>- If `str` is `NULL`, print `[0] (nil)` <br>
>- You are allowed to use `printf` <br></details>

## Task 1: [List Length](https://github.com/michaellgans/holbertonschool-low_level_programming/blob/main/singly_linked_lists/1-list_len.c)
<details><summary> Task Requirements</summary>

>Write a function that returns the number of elements in a linked `list_t` list.
>
>- Prototype: `size_t list_len(const list_t *h);`<br></details>

## Task 2: [Add Node](https://github.com/michaellgans/holbertonschool-low_level_programming/blob/main/singly_linked_lists/2-add_node.c)
<details><summary>Task Requirements</summary>

>Write a function that adds a new node at the begining of a `list_t` list.
>
>- Prototype: `list_t *add_node(list_t **head, const char *str);` <br>
>- Return: the address of the new element, or `NULL` if it failed <br>
>- `str` needs to be duplicated <br>
>- You are allowed to use `strdup` <br></details>

## Task 3: [Add Node at the End](https://github.com/michaellgans/holbertonschool-low_level_programming/blob/main/singly_linked_lists/3-add_node_end.c)
<details><summary>Task Requirements</summary>

>Write a function that adds a new node at the end of a `list_t` list.
>
>- Prototype: `list_t *add_node_end(list_t **head, const char *str);` <br>
>- Return: the address of the new element, or `NULL` if it failed <br>
>- `str` needs to be duplicated <br>
>- You are allowed to use `strdup` <br></details>

## Task 4: [Free List](https://github.com/michaellgans/holbertonschool-low_level_programming/blob/main/singly_linked_lists/4-free_list.c)
<details><summary>Task Requirements</summary>

>Write a function that frees a `list_t` list.
>
>- Prototype: `void free_list(list_t *head);` <br></details>
