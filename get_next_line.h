/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: matheme <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 17:43:53 by matheme      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 15:58:06 by matheme     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 57
# include <sys/types.h>
# include <sys/uio.h>
# include "libft/includes/libft.h"

typedef struct		s_glist
{
	int				fd;
	char			*line;
	struct s_glist	*next;
}					t_glist;

int					get_next_line(const int fd, char **line);
#endif
