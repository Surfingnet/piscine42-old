# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghazari <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/07 19:20:27 by mghazari          #+#    #+#              #
#    Updated: 2016/09/07 22:44:04 by mghazari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

for i in *.c; do
	gcc -c "$i"
done
compilator="ar rc libft.a"
for i in *.o; do
	compilator="$compilator $i"
done
eval $compilator
for i in *.o; do
	rm "$i"
done
