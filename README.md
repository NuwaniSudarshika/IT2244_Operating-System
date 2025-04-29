# IT2244_Operating-System![Screenshot (102)](https://github.com/user-attachments/assets/8458859b-1f71-4c87-a107-a6b83f9346fa)
# Linux Command Line Practice

This repository contains a collection of common Linux shell commands with detailed descriptions, purposes, and usage examples. It’s designed as a learning tool for beginners getting familiar with the Linux terminal environment.

---

## 📌 Commands Overview

### 1. `awk`

- **Description:** `awk` is a powerful programming language designed for pattern scanning and text processing.
- **Purpose:** To extract and process specific fields or patterns in a file or stream.
- **Usage:**

```bash
# Example: Print only the first column (username) from /etc/passwd
awk -F: '{ print $1 }' /etc/passwd

# Example: Sum values in the first column
awk '{ sum += $1 } END { print sum }' numbers.txt

![Screenshot (103)](https://github.com/user-attachments/assets/9842da02-fb81-4107-8b4a-fc851d04ec06)
# Replace all occurrences of 'foo' with 'bar' in a file
sed 's/foo/bar/g' file.txt

# Delete line 2 from a file
sed '2d' file.txt

# Print only lines that match a pattern
sed -n '/pattern/p' file.txt

# Find all hidden files in the current directory
find . -name ".*"

# Find all `.txt` files
find . -type f -name "*.txt"

# Find files modified in the last 7 days
find . -type f -mtime -7

![Screenshot (104)](https://github.com/user-attachments/assets/cf0666ca-be84-4d79-a52a-8b992cc1b8ae)
# List all files including hidden ones
ls -a

# List files in long format with timestamps
ls -l

# List by modification time, newest last
ls -ltr

# Go to the home directory
cd

# Go to the parent directory
cd ..

# Go to a specific directory
cd /path/to/directory

# Create a new directory
mkdir my_folder

# Create nested directories
mkdir -p parent/child
