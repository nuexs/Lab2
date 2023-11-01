#!/bin/bash

for find_file in *
do
	if test -f $find_file
	then
		echo $find_file
	fi
done
