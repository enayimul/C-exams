/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:29:03 by enayimul          #+#    #+#             */
/*   Updated: 2019/11/27 15:29:14 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int len;
        
        len = 0;
        while (argv[argc - 1][len])
            len++;
        write(1, argv[argc - 1], len);
    }
    write(1, "\n", 1);
}
