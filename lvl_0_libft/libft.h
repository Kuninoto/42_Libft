//void    ft_putchar_fd(char c, int fd);
#ifndef libft

#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

#define libft
#endif