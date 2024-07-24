#include "main.h"

/**
 * Tableau de structure pour mapper les spécificateurs de format
 * aux fonctions de gestion correspondantes
 */

int print_typeformats(const char spec, va_list args)


{
type_t type_spec[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent};
	{NULL, NULL}
};

int i = 0;

while (type_spec[i].format)
{
	if (type_spec[i].format == spec)
	{
		type_spec[i].f(args);
		return (0);
	}
	i++;

	/** test */
	return (1);
}
