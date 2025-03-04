/*
** EPITECH PROJECT, 2024
** B-MAT-100-LIL-1-1-104neutrinos-nathan.cheynet
** File description:
** print_functions.c
*/

#include <string.h>
#include <stdio.h>
#include <unistd.h>

void print_usage(char const *exec)
{
    printf("usage: %s -h\n", exec);
    printf("usage: %s [-ugEs] [command [args ...]]\n", exec);
}

void print_error(char const *message)
{
    write(2, message, strlen(message));
}
