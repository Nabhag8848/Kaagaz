#! usr/bin/bash

echo "The number of blanks in Introduction:"
grep -n -o -E -i [" "] intro.txt | wc -l 
