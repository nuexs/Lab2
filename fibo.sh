#!/bin/sh
#fibo.sh

echo "Input Num : "
read num

first=0
second=1

echo "Fibo $num"
echo $first
echo $second

idx=0

while [ $idx -le `expr $num - 2` ]
do
	sum=`expr $first + $second`
	echo $sum
	first=$second
	second=$sum

	idx=`expr $idx + 1`
done
