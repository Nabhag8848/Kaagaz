#! usr/bin/bash

echo "The number of characters in introduction: "
grep -n -o -E -i [a-z] intro.txt | wc -l
