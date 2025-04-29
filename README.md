Command: touch abc.tsv
Description: Creates a new empty file named abc.tsv.
Usage: touch abc.tsv

Command: vi abc.tsv
Description: Opens the file abc.tsv using the vi text editor.
Usage: vi abc.tsv

Command: more abc.tsv
Description: Displays the contents of the file one screen at a time.
Usage: more abc.tsv

Command: cut -d$'\t' -f1 abc.tsv
Description: Extracts the first column from a tab-separated file.
Usage: cut -d$'\t' -f1 abc.tsv

Command: cut -d " " -f3 abc.tsv
Description: Extracts the third column assuming space is the delimiter.
Usage: cut -d " " -f3 abc.tsv

Command: head -n2 abc.tsv
Description: Displays the first 2 lines of the file.
Usage: head -n2 abc.tsv

Command: tail -n2 abc.tsv
Description: Displays the last 2 lines of the file.
Usage: tail -n2 abc.tsv

Command: cut -d ' ' -f1 abc.tsv
Description: Extracts the first space-separated field from the file.
Usage: cut -d ' ' -f1 abc.tsv

Command: cut -d ' ' -f2 abc.tsv
Description: Extracts the second space-separated field from the file.
Usage: cut -d ' ' -f2 abc.tsv

Command: head abc.tsv
Description: Displays the first 10 lines of the file.
Usage: head abc.tsv

Command: head -8 abc.tsv
Description: Displays the first 8 lines of the file.
Usage: head -8 abc.tsv

Command: head -1 abc.tsv
Description: Displays the first line of the file.
Usage: head -1 abc.tsv

Command: tail -1 abc.tsv
Description: Displays the last line of the file.
Usage: tail -1 abc.tsv

Command: head -100 abc.tsv
Description: Displays the first 100 lines of the file.
Usage: head -100 abc.tsv

Command: head -n8 abc.tsv | tail -n1
Description: Extracts the 8th line of the file.
Usage: head -n8 abc.tsv | tail -n1

Command: awk '{print NF; exit}' abc.tsv
Description: Prints the number of columns using space as delimiter.
Usage: awk '{print NF; exit}' abc.tsv

Command: awk -F'\t' '{print NF; exit}' abc.tsv
Description: Prints the number of tab-separated columns.
Usage: awk -F'\t' '{print NF; exit}' abc.tsv

Command: awk '{print $3}' abc.tsv
Description: Prints the third column (space-separated).
Usage: awk '{print $3}' abc.tsv

Command: wc -l abc.tsv
Description: Counts the number of lines in the file.
Usage: wc -l abc.tsv

Command: head -n10 abc.tsv | grep 'dd'
Description: Extracts first 10 lines and searches for 'dd' in them.
Usage: head -n10 abc.tsv | grep 'dd'

Command: head -n7 abc.tsv | grep '56'
Description: Extracts first 7 lines and searches for '56' in them.
Usage: head -n7 abc.tsv | grep '56'# IT2244_Operating-System
