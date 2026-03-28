*This project has been created as part of the 42 curriculum by netheloo.*

---

## Description

**Libft** is a foundational 42 project in which you reimplement a set of standard C library functions from scratch, then expand it with additional utility functions and a linked list library.

The goal is to deeply understand how low-level C functions work — memory manipulation, string operations, type conversions — and to build a personal library that will be a useful tool throughout your C assignments.

---

## Instructions

### Compilation

Clone your repository and run `make` at its root:

```sh
make        # Builds libft.a
make clean  # Removes object files
make fclean # Removes object files and libft.a
make re     # Full rebuild
```

All source files are compiled with:
```
cc -Wall -Wextra -Werror
```


### Usage

Include the header in your source files:

```c
#include "libft.h"
```
Create a test file and compile it against `libft.a`:

```sh
cc -Wall -Wextra -Werror test.c -L. -lft -o test && ./test
```

A minimal example:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("%zu\n", ft_strlen("hello"));   // expected: 5
    printf("%s\n", ft_strdup("world"));    // expected: world
    return (0);
}
```

## Library Description

### Part 1 — Libc Reimplementations

These functions replicate their standard libc counterparts with the `ft_` prefix. They do not rely on any external functions.

| Function | Prototype | Description |
|---|---|---|
| `ft_isalpha` | `int ft_isalpha(int c)` | Returns 1 if `c` is alphabetic, 0 otherwise |
| `ft_isdigit` | `int ft_isdigit(int c)` | Returns 1 if `c` is a digit, 0 otherwise |
| `ft_isalnum` | `int ft_isalnum(int c)` | Returns 1 if `c` is alphanumeric, 0 otherwise |
| `ft_isascii` | `int ft_isascii(int c)` | Returns 1 if `c` is a valid ASCII character, 0 otherwise |
| `ft_isprint` | `int ft_isprint(int c)` | Returns 1 if `c` is printable, 0 otherwise |
| `ft_strlen` | `size_t ft_strlen(const char *s)` | Returns the length of the string `s` |
| `ft_memset` | `void *ft_memset(void *b, int c, size_t len)` | Fills `len` bytes of memory starting at `b` with value `c` |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | Zeroes out `n` bytes starting at `s` |
| `ft_memcpy` | `void *ft_memcpy(void *dst, const void *src, size_t n)` | Copies `n` bytes from `src` to `dst` |
| `ft_memmove` | `void *ft_memmove(void *dst, const void *src, size_t len)` | Copies `len` bytes from `src` to `dst`, handles overlap |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)` | Copies up to `dstsize - 1` chars from `src` to `dst` |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t dstsize)` | Appends `src` to `dst`, size-bounded |
| `ft_toupper` | `int ft_toupper(int c)` | Converts lowercase letter to uppercase |
| `ft_tolower` | `int ft_tolower(int c)` | Converts uppercase letter to lowercase |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | Returns pointer to first occurrence of `c` in `s` |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | Returns pointer to last occurrence of `c` in `s` |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares up to `n` chars of `s1` and `s2` |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | Finds first occurrence of `c` in first `n` bytes of `s` |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares first `n` bytes of `s1` and `s2` |
| `ft_strnstr` | `char *ft_strnstr(const char *haystack, const char *needle, size_t len)` | Finds `needle` in `haystack` within `len` bytes |
| `ft_atoi` | `int ft_atoi(const char *str)` | Converts string to integer |
| `ft_calloc` | `void *ft_calloc(size_t nmemb, size_t size)` | Allocates zero-initialised memory for `nmemb` elements |
| `ft_strdup` | `char *ft_strdup(const char *s1)` | Returns a malloc'd duplicate of string `s1` |

---

### Part 2 — Additional Functions

These functions are either absent from the libc or behave differently from their standard versions.

| Function | Prototype | Description |
|---|---|---|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Returns a malloc'd substring of `s` starting at `start`, max length `len` |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Returns a malloc'd string: concatenation of `s1` and `s2` |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Returns a malloc'd copy of `s1` with `set` characters trimmed from both ends |
| `ft_split` | `char **ft_split(char const *s, char c)` | Returns a NULL-terminated array of strings split from `s` by delimiter `c` |
| `ft_itoa` | `char *ft_itoa(int n)` | Returns a malloc'd string representation of integer `n` (handles negatives) |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies `f` to each character of `s` (with index), returns the resulting malloc'd string |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char*))` | Applies `f` to each character of `s` in-place, passing its index |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Outputs character `c` to file descriptor `fd` |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Outputs string `s` to file descriptor `fd` |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Outputs string `s` followed by a newline to file descriptor `fd` |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Outputs integer `n` to file descriptor `fd` |

---

### Part 3 — Linked List

Uses the following node structure (declared in `libft.h`):

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
} t_list;
```

| Function | Prototype | Description |
|---|---|---|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | Creates and returns a new node with `content`; `next` is set to NULL |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | Adds `new` node at the beginning of the list |
| `ft_lstsize` | `int ft_lstsize(t_list *lst)` | Returns the number of nodes in the list |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | Returns the last node of the list |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | Adds `new` node at the end of the list |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Frees the content of `lst` using `del`, then frees the node (not its successor) |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Deletes and frees a node and all its successors; sets the pointer to NULL |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applies `f` to the content of every node in the list |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Creates a new list by applying `f` to each node's content; uses `del` on failure |

---

## Resources

### References

- [C Standard Library — man pages (man7.org)](https://man7.org/linux/man-pages/)
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- [Understanding linked lists in C](https://en.wikipedia.org/wiki/Linked_list)
- (https://www.w3schools.com/c/)
- (https://www.geeksforgeeks.org/c/)


### AI Usage

During the developmentof this project,AI tools were used as a learning aid only.
specically:

- To clarify concepts related to C programmng 
- To understand edge cases and expected behaviour of standered libray functions


---

## Conclusion

Building Libft is one of the most instructive early exercises in C programming. By reimplementing functions that most developers take for granted — `strlen`, `memcpy`, `split`, linked list manipulation — you are forced to understand exactly what happens at the memory level.

The key takeaways from this project:

- **Memory management**: every allocation must be tracked and freed correctly. No shortcuts.
- **Pointer arithmetic**: working with `void *`, `char *`, and function pointers directly sharpens your understanding of how C handles data.
- **Modular thinking**: breaking complex behaviour (like `ft_split` or `ft_lstmap`) into small, testable steps is a skill that carries into every future project.

Libft becomes the foundation you build on — the better you understand it now, the more confidently you will use and extend it later.
