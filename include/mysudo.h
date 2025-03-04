/*
** EPITECH PROJECT, 2024
** B-PSU-100-LIL-1-1-mysudo-gabriel.sericola
** File description:
** mysudo.h
*/

#ifndef MYSUDO_H_
    #define MYSUDO_H_

typedef struct arguments {
    char *user;
    char *group;
    int shell_mode;
    int list_mode;
    int version_mode;
} arguments_t;

int handle_user(const char *next_arg, arguments_t *args, int *index);
int handle_group(const char *next_arg, arguments_t *args, int *index);
int handle_simple_flag(const char *arg, arguments_t *args);
int handle_argument(const char *arg, const char *next_arg, arguments_t *args,
    int *index);
int parse_arguments(int argc, char const *argv[], arguments_t *args);

#endif
