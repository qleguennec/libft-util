# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    src_all.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/25 17:47:57 by qle-guen          #+#    #+#              #
#    Updated: 2015/09/25 20:15:12 by qle-guen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

source util/env.sh

cat /dev/null > $CLIST

for i in $(ls $SRC); do
	if [[ $i == *.c  ]]; then
		echo $i | cut -d"." -f 1 >> $CLIST
	fi
done
