#include <stdint.h>
#include <stdlib.h>

/* We are going to be working with (ordered) binary search trees. */

typedef struct _tree {
  uint8_t value;
  struct _tree *left;
  struct _tree *right;
} tree;

/* 1. Consider the two find functions.  Does the choice of which to
 * use effect the run-time of the prover?  If so, why?
 */

tree * find1 (tree *t, uint8_t v) {
  if (t == NULL) {
    return NULL;

  } else {

    if ((v < t->value) && (t->left != NULL)) {
      return find1(t->left, v);

    } else if ((v > t->value) && (t->right != NULL)) {
      return find1(t->right, v);

    } else {
      return t;

    }
  }
} 

tree * find2 (tree *t, uint8_t v) {
  if (t == NULL) {
    return NULL;

  } else {
    tree *recValue;

    if ((v < t->value) && (t->left != NULL)) {
      recValue = t->left;

    } else if ((v > t->value) && (t->right != NULL)) {
      recValue = t->right;

    } else {
      return t;

    }

    return find2(recValue,v);
  }
}


/* 2. Write an insert method for the tree and prove that a fixed
 * number of insertions gives an ordered binary search tree.
 */


/* 3. Write a lookup method for the tree and prove (for trees up to a
 * fixed size) that lookup only returns true when the number is
 * contained in the tree.
 */

