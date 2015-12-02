# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/25 20:27:44 by qle-guen          #+#    #+#              #
#    Updated: 2015/11/25 11:59:17 by moka             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

source util/env.sh

if [ ! -d $TESTTMP ]; then
	mkdir $TESTTMP
else
	rm -rf $TESTTMP/*
fi

case "$1" in
	"core")
		G="+"
		echo "testing core functions"
		;;
	"bonus")
		G="*"
		echo "testing bonus functions"
		;;
	"others")
		G="-"
		echo "testing other functions"
		;;
esac

for i in $(cat $TLIST | grep "$G"); do
	echo "$G"
	i=$(echo $i | tr -d "$G")
	gcc -Wall -Wextra -Werror -o "$TESTTMP/$i.test" "$TESTS/test.c" "$TESTS/test_functions.c" "$TESTS/$i.c" -L . -lft -I"$INCLUDE"
	$TESTTMP/$i.test
done
