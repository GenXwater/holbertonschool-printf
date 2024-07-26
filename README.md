```markdown
# Projet _printf

Ce projet est une implémentation personnalisée de la fonction `printf` en langage C. Il permet d'afficher des chaînes de caractères formatées sur la sortie standard.

## Table des matières

- [Introduction](#introduction)
- [Description du projet et de la fonction `printf`](#description-du-projet-et-de-la-fonction-printf)
- [Commande de compilation](#commande-de-compilation)
- [Prérequis](#prérequis)
- [Exemples d'utilisation](#exemples-dutilisation)
- [Man Page](#man-page)
- [Testing](#testing)

## Introduction

Ce projet vise à recréer la fonction `printf` de la bibliothèque standard C. Il prend en charge plusieurs spécificateurs de format et permet d'afficher des chaînes de caractères formatées.

## Description du projet et de la fonction `printf`

Le but de ce projet est de créer une version personnalisée de la fonction `printf` en langage C. La fonction `printf` permet d'afficher des chaînes de caractères formatées sur la sortie standard. Elle prend une chaîne de format et un nombre variable d'arguments, et affiche la sortie formatée selon les spécificateurs de format présents dans la chaîne de format.

## Commande de compilation

Pour compiler le programme, utilisez la commande suivante :

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf
```

## Prérequis

- Ubuntu 20.04 ou une version plus récente
- GCC (GNU Compiler Collection)
- Git

## Exemples d'utilisation

Voici quelques exemples d'utilisation de la fonction `_printf` :

```c
#include "main.h"

int main(void)
{
    int len;
    int number = 2;
    char character = 'C';
    char *string = "péripatéticienne";

    // Afficher une phrase avec un nombre
    len = _printf("Il y a %d péripatéticiennes dans mon jardin.\n", number);

    // Afficher une phrase avec un caractère
    len = _printf("La première lettre de mon prénom est %c.\n", character);

    // Afficher une phrase avec une chaîne de caractères
    len = _printf("J'ai vu une %s dans la forêt.\n", string);

    // Afficher une phrase avec un pourcentage
    len = _printf("Le symbole pour cent est %%.\n");

    return (0);
}
```

## Testing

Pour tester le code, nous avons utilisé Valgrind pour vérifier les fuites de mémoire et les erreurs de segmentation. Voici la commande utilisée pour tester avec Valgrind :

```sh
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt ./_printf
```

Nous avons également effectué des tests manuels pour vérifier que la sortie de la fonction `_printf` correspondait aux attentes.
