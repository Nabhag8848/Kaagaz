#! usr/bin/bash

echo "Enter file1: "
read file1

echo "Enter file2: "
read file2


if cmp $file1 $file2
then
	rm $file2
	echo "removed: $file2"
else
	cat $file1 $file2 > concat.txt
	echo "Merged file"
	cat concat.txt
fi
