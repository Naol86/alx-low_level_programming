import subprocess

def compile_c_file():
    # Ask for the file name from the user
    x = input("Enter the name of the C file (including the extension): ").split()

    # Check if the file has the correct extension (.c)
    count =0
    for filename in x:
        count+=1
        if not filename.endswith(".c"):
            print("Invalid file extension. Please provide a C file (.c).")
            return

        # Generate the output file name
        output_file = filename[:-2] + ".o"

        # Run the gcc command to compile the C file
        command = f"gcc -c {filename} -o {output_file}"

        try:
            # Run the command using subprocess
            subprocess.run(command, shell=True, check=True)
            print(f"Compilation successful. Output file: {output_file}",count)
        except subprocess.CalledProcessError as e:
            print(f"Error occurred: {e}")

if __name__ == "__main__":
    compile_c_file()
