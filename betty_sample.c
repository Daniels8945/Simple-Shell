#include "main.h"
/**
   * main - Entry point of th function.
   * @ac: Argument count.
   * @arg: Argument list.
   *
   * Return: 0 on success.
*/

int main(int ac, char *arg[])
{
	if (ac < 2)
		printf("The executable file is %s, Please enter a valid argument\n", arg[0]);

	return (0);
}
