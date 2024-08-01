/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:25:34 by meid              #+#    #+#             */
/*   Updated: 2024/07/31 13:40:31 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# ifndef MAX_FD
#  define MAX_FD OPEN_MAX
# endif

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		ft_strlen(char *str);
char	*ft_strchr_allocation(char *line, int len);
char	*ft_strchar_rev(char *line, int c);
char	*ft_strjoin(char *line, char *buffer);
char	*ft_strchr(char *line, int c);
char	*ready_for_next(char *line);
char	*read_line(char *line, int fd);
char	*clean_line(char *line);
char	*ready_for_next(char *line);

#endif