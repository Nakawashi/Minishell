/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:16:07 by nakawashi         #+#    #+#             */
/*   Updated: 2022/07/18 15:41:53 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/minishell.h"

int	main(int argc, char **argv, char **envp)
{
	(void)	argc;
	(void)	argv;
	(void)	envp;
	char	*input;

	int i = 0;
	input = NULL;
	printf("%s\n", input);
	while (i < 5){
		input = readline("Minishell 🥥 % ");
		add_history(input);
		printf("%s\n", input);
		++i;
	}
	free(input);
	return (0);
}
