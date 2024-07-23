#include "main.h"

/**
 * Tableau de structure pour mapper les spécificateurs de format
 * aux fonctions de gestion correspondantes
 */

int print_typeformats(const char spec, va_list ap)


{
type_t type_spec[] = {
	{'c', print_char},
	{'s', print_string},
	{NULL, NULL}
};

int i = 0;

while (type_spec[i].format
