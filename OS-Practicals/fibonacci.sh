#! usr/bin/bash

echo "Enter value of N:" 
read n
prev=0
current=1

fibonacci() {
	if [ $n -le 2 -a $n -gt -1 ]
	then    
		result=$(($n - 1))
		echo "$result"
	else
		for (( i=3 ; i<=$n ; i++ )); 
		do 	
			result=$(($prev+$current))
			prev=$current
			current=$result
		done

		echo "$result"
	fi
}

result=$(fibonacci)
echo "$n th fibonacci number is: $result"
