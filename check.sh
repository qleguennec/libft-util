# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    check.sh                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moka <moka@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 19:08:36 by moka              #+#    #+#              #
#    Updated: 2015/11/26 19:09:27 by moka             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

source util/env.sh

FILES=(
	"memset"
	"bzero"
	"memcpy"
	"memccpy"
	"memmove"
	"memchr"
	"memcmp"
	"strlen"
	"strdup"
	"strcpy"
	"strncpy"
	"strcat"
	"strncat"
	"strchr"
	"strrchr"
	"strstr"
	"strcmp"
	"strncmp"
	"atoi"
	"isalpha"
	"isdigit"
	"isascii"
	"isprint"
	"toupper"
	"tolower"
	"memalloc"
	"memdel"
	"strnew"
	"strdel"
	"strclr"
	"striter"
	"striteri"
	"strmap"
	"strmapi"
	"strequ"
	"strnequ"
	"strsub"
	"strjoin"
	"strtrim"
	"strsplit"
	"itoa"
	"putchar"
	"putstr"
	"putendl"
	"putnbr"
	"putchar_fd"
	"putendl_fd"
	"putnbr_fd"
)

for i in "${FILES[@]}"; do
	if [ ! -f "$SRC/ft_$i.c" ]; then
		echo "missing: $i.c"
	fi 
done