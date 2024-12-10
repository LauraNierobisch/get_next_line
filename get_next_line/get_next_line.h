/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnierobi <lnierobi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:01:30 by lnierobi          #+#    #+#             */
/*   Updated: 2024/05/25 16:26:14 by lnierobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
// # include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5000
# endif

void	*ft_memset(void *b, int c, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*create_workstring(int fd, char **workstring, int *bytecount,
			char *buffer);
char	*extract_line_befor_newline(char *workstring);
char	*line_delete_newline_keep(char *workstring);
char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);

#endif