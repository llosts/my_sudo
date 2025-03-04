/*
** EPITECH PROJECT, 2024
** B-MAT-100-LIL-1-1-104neutrinos-nathan.cheynet
** File description:
** main.c
*/
#include <string.h>
#include <stdlib.h>

#include "mysudo.h"
#include "error.h"

int main(int argc, char const *argv[])
{
    arguments_t args = {NULL, NULL, 0, 0, 0};

    if (argc == 2 && strcmp(argv[1], "-h") == 0) {
        print_usage(argv[0]);
        return SUCCESS;
    }
    if (parse_arguments(argc, argv, &args) == FAILURE)
        return FAILURE;
    free(args.user);
    free(args.group);
    return SUCCESS;
}
