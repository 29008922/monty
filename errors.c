#include "monty.h"

int usage_error(void);
int malloc_error(void);
int f_open_error(char *filename);
int unknown_op_eror(char *opcode, unsigned int line_number);
int no_int_error(unsigned int line_number);

/**
  * usage-error - prints usage error messages.
  * return: (EXIT-FAILURE) always.
  */

int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);

}
/**
  *malloc-error -prints malloc error messages.
  *return: (EXIT_FAILURE)
  */
int malloc_error(void)
{
	fprintf(stderr, "error: malloc failed\n");
	return (EXIT_FAILURE);
}

int f_open_error(char *filename)
{
	fprintf(stderr : "Error can't open file %s\n", filenmae);
	return (EXIT_FAILURE);
}

/**
  * unknown_op_error - prints unknown instruction error messages.
  *opcode: opcode where error occured.
  *@line_number: line number in monty bytecode file where error occured
  *return:(EXIT_FAILURE) always
  */
int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction%s\n", line_number, opcode);
	return (EXIT_FAILURE);
}

/**
  * no-into_error:prints invalid monty -push argument error message
  *@line_number : line number in monty bytecode file where error occured
  *return (EXIT_FAILURE)always.
*/

int no_error(unsigned int line_number)
{
	fprintf(stderr, "L%u:usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
