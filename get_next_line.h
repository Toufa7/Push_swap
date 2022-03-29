/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:45:50 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/21 22:08:54 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFFER_SIZE 10

size_t	ft_strlen(const char *s);
size_t	ft_find_len(char *str, char what);
char	*ft_strchar(char *str, char what);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_substr(char *str, size_t start, size_t how);
char	*cutting_until_newline(char *str);
char	*keeping_what_after_newline(char *str);
char	*read_and_join(int fd, char *save);
char	*get_next_line(int fd);

#endif
