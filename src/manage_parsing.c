/*
** EPITECH PROJECT, 2024
** B-PSU-100-LIL-1-1-mysudo-gabriel.sericola
** File description:
** manage_parsing.c
*/

#include <string.h>

#include "error.h"
#include "mysudo.h"

int handle_user(const char *next_arg, arguments_t *args, int *index)
{
    if (!next_arg) {
        print_error("Error: Missing value for -u argument.\n");
        return FAILURE;
    }
    args->user = strdup(next_arg);
    (*index)++;
    return SUCCESS;
}

int handle_group(const char *next_arg, arguments_t *args, int *index)
{
    if (!next_arg) {
        print_error("Error: Missing value for -g argument.\n");
        return FAILURE;
    }
    args->group = strdup(next_arg);
    (*index)++;
    return SUCCESS;
}

int handle_simple_flag(const char *arg, arguments_t *args)
{
    if (strcmp(arg, "-s") == 0) {
        args->shell_mode = 1;
        return SUCCESS;
    }
    if (strcmp(arg, "-l") == 0 || strcmp(arg, "--list") == 0) {
        args->list_mode = 1;
        return SUCCESS;
    }
    if (strcmp(arg, "--version") == 0) {
        args->version_mode = 1;
        return SUCCESS;
    }
    print_error("Error: Invalid argument. Use -h for usage.\n");
    return FAILURE;
}

int handle_argument(const char *arg, const char *next_arg, arguments_t *args,
    int *index)
{
    if (strcmp(arg, "-u") == 0)
        return handle_user(next_arg, args, index);
    if (strcmp(arg, "-g") == 0)
        return handle_group(next_arg, args, index);
    return handle_simple_flag(arg, args);
}

int parse_arguments(int argc, char const *argv[], arguments_t *args)
{
    const char *next_arg;

    for (int i = 1; i < argc; i++) {
        next_arg = (i + 1 < argc) ? argv[i + 1] : NULL;
        if (handle_argument(argv[i], next_arg, args, &i) == FAILURE) {
            return FAILURE;
        }
    }
    return SUCCESS;
}
