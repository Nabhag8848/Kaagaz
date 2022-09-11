#! usr/bin/bash

echo "Number of lines in introduction: "
grep -n -o -E -i ["\n"] intro.txt | wc -l
