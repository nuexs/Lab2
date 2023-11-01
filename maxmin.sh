#!/bin/sh

#Init First Argument

min=$1
max=$1

for num in $*
do
	if [ $max -ge $num ]
	then 
		if [ $min -ge $num ]
		then min=$num
		fi
	else
		max=$num
	fi
done

echo "max : $max"
echo "min : $min"
