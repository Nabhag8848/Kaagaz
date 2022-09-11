#! usr/bin/bash

echo "Enter the file name you want to check if it Exist: "
read file

if [ -f $file ]
then
	echo "File Found"
else 
	echo "File not Found"
fi

