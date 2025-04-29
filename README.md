Shell Commands and CSV File Operations
Purpose
This section contains a series of shell commands and their output examples for processing and manipulating a CSV file. The file, day05.csv, contains employee data with fields like ID, Name, Age, Salary, and Department. These commands demonstrate how to extract specific columns, sort data, and manipulate CSV files using common shell utilities.

Commands Used:
awk
awk -F, '{print $1}' day05.csv: Extracts the first column (ID) from the CSV file.

awk -F, '{print $3}' day05.csv: Extracts the third column (Age) from the CSV file.

awk -F, '{print $4}' day05.csv: Extracts the fourth column (Salary) from the CSV file.

awk -F, '{print $2,$3}' day05.csv: Extracts and prints Name and Age columns.

cut
cut -d, -f3 day05.csv: Extracts the Age column from the CSV file.

head & tail
head -n7 day05.csv|tail -n1: Extracts the 7th row of the file.

head -n8 day05.csv|tail -n1: Extracts the 8th row of the file.

sort
sort -t',' -k4,4n day05.csv: Sorts the file based on the Salary column (4th column) in ascending order.

sort -t',' -k3,3nr day05.csv: Sorts the file based on Age column (3rd column) in descending order.

wc
wc -l day05.csv: Counts the number of lines in the file.

more
more day05.csv: Displays the contents of the day05.csv file in a paginated manner.

Redirecting Output
head -3 day05.csv >> newday05.csv: Appends the first three lines of day05.csv to a new file newday05.csv.
