#!/bin/bash
# Script to create a static library from all .c files in the current directory

# Compile all .c files into .o files
gcc -c *.c

# Create the static library named liball.a
ar rcs liball.a *.o

# Print success message
echo "✅ Static library liball.a created successfully."

