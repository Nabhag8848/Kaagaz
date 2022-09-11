#! usr/bin/bash

echo "The number of symbols: "
grep -n -o  -E -i [".$**!"] intro.txt | wc -l
