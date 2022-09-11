#! usr/bin/bash

function asterisksLine {
	echo "*********************************"
}

echo "Username:" $(echo $USER)
asterisksLine
echo "Time & Date:" $(date)
asterisksLine
echo "Currently loggedin:"; who
asterisksLine
	
