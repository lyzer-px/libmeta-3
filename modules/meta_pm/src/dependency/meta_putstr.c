/*
** EPITECH PROJECT, 2023
** minishell_meta_string
** File description:
** main.c
*/

#include <unistd.h>
#include "dependency.h"

int meta_putstr(char const *str)
{
    write(1, str, meta_strlen(str));
    return 0;
}
