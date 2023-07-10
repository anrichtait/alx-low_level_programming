#!/bin/bash

echo "Enter the number of files to create:"
read num_files

for ((i = 0; i < num_files; i++))
do
    filename="$i-main.c"
    touch "$filename"
    echo "Created file: $filename"
done
