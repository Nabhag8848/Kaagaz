#! usr/bin/bash

echo "The number of vowels in introduction: "
grep -n -o -E -i [aeiou] intro.txt | wc -l
