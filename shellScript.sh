#!/bin/bash

# Compile the C program
gcc -o copyfile copyfile.c

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful"
    
    # Run the C program to copy the contents of file1.txt to file2.txt
    ./copyfile file1.txt file2.txt
    
    # Check if the copy was successful
    if [ $? -eq 0 ]; then
        echo "Copy successful"
    else
        echo "Copy failed"
    fi
else
    echo "Compilation failed"
fi