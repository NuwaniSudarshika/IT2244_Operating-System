# Shell Commands and Bash Scripts - Summary

This document describes various basic shell commands and simple bash scripts. It is intended to serve as a reference or README file for uploading to GitHub.

## Shell Commands

### pwd
Description: Prints the current working directory.  
Purpose: Helps to identify the absolute path of your present directory.

### ls
Description:Lists files and directories in the current location.  
Purpose:To view the contents of the directory.

### ls -a
Description: Lists all files including hidden files (those starting with `.`).  
Purpose: To see all files including configuration files.

### ls -ltr
Description: Lists files sorted by modification time in reverse order.  
Purpose: Useful for seeing the most recently modified files at the bottom.

### date
Description:Displays the current date and time.  
Purpose:Helpful for time-stamping files or checking system time.

### date +%d
Description: Prints the current day of the month.  
Purpose: To extract just the day from the full date.

### date +%y
Description: Prints the last two digits of the current year.  
Purpose: Useful for date formatting in scripts.

### head -n N
Description:Shows the first N lines of a file.  
Purpose: To preview the beginning of a file.

### tail -n N
Description:Shows the last N lines of a file.  
Purpose: To preview the end of a file.

### cut -d DELIM -fN
Description: Cuts the Nth field using a delimiter DELIM.  
Purpose: To extract specific columns from structured data files.

### awk '{print $N}'
Description:Prints the Nth field from each line using default whitespace delimiter.  
Purpose: Very flexible tool for text processing.

### wc -l
Description: Counts the number of lines in a file.  
Purpose: To determine the number of records/rows in a file.

### grep 'pattern'
Description:Searches for a pattern in a text file.  
Purpose: Used to find specific entries in files or output.

## Bash Scripts

### program1.sh
Purpose: Asks user for name and three numbers, then prints summation and average.

### program2.sh
Purpose: Performs arithmetic operations (+, -, *, /) on two user-supplied numbers.

