#ifndef CAL_H
#define CAL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct op - strunt op
 *
 * @op: The operator to be use
 * @f: The function assoicated with the operator
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#end /* CAL_H */