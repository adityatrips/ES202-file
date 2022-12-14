import os

path = "D:\\Programming\\ES202-file"
file_names = []

for file in os.listdir(path):
    if file.endswith('.c'):
        file_names.append(file)

with open('programs.txt', 'w') as f:
    for file in file_names:
        with open(file, 'r') as prog:
            f.write(f"Q. {file.split('.')[0]}\n\n")
            f.write(prog.read())
            f.write("\n\n")
