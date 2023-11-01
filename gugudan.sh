#!/bin/bash

echo -n "Input Num : "
read num

for ((i = 1; i<= $num; i++))
do
	echo "Step $i\n"
	for((j = 1; j <= 9; j++))
	do
		let "result = $i * $j"
		echo "$i x $j = $result"
	done
	echo ""
done
