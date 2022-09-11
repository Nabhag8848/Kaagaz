#! usr/bin/bash

read n

function factorial {
	result=1

	for (( i=n ; i>1; i-- ));
	do
		result=$(($result*$i))		
	done

	echo "$result"
}

result=$(factorial)
echo "factorial of $n is $result"


