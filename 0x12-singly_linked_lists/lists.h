#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_s - single linked list
 * @str: string - (malloc stored string)
 * @len: string length
 * @next: next node pointer
 *
 * Description:Holberton project single linked list node structure
 */

#include <stddef.h>
typedef struct list_s {
  char *str;
  unsigned int len;
  struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t list_len(const list_t *h);

#endif
