cmake_minimum_required(VERSION 3.21)
project(Libft C)

set(CMAKE_C_STANDARD 11)

add_executable(Libft
        ft_isalnum.c
        ft_isalpha.c
        ft_isascii.c
        ft_isdigit.c
        ft_isprint.c
        ft_memset.c
        ft_strlen.c "Test fonction de base.c" ft_bzero.c ft_memcpy.c ft_memmove.c)
