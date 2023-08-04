#!/bin/bash

# Collect all the .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile each .c file into an obj file and store it in a temp directory
temp_dir="temp_object_files"
mkdir -p "$temp_dir"

for file in $c_files; do
    gcc -c "$file" -o "$temp_dir/${file%.c}.o"
done

# Create the static library (liball.a) from the object files
ar rc liball.a "$temp_dir"/*.o

ranlib liball.a
# Clean up the temporary directory
rm -rf "$temp_dir"

echo "Static library liball.a created successfully."
