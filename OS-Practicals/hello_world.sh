#! usr/bin/bash
var1=2
var2="this is var2"
echo "Hello World!" $var1 $var2
read -p "Enter num1: " a
read -p "Enter num2: " b
echo $((a+b))

read x
read y

if [ $x -gt $y ]
then
echo X is greater than Y
elif [ $x -lt $y ]; then
echo X is less than Y
elif [ $x -eq $y ]
then
echo X is equal to Y
fi


for i in {1..5}
do
    echo $i
done
