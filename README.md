🧠 Explanation of Each Step
Step 1: Navigate to Desktop and Create Folders
cd %userprofile%\Desktop: Opens the Desktop folder.

mkdir CSC2244 Marks Exam: Creates three folders.

Step 2: Create Subdirectories in CSC2244
cd CSC2244: Enters the CSC2244 folder.

mkdir practical theory "exam papers": Creates three subfolders.

Step 3: Create Files in Each Subfolder
In each subfolder (practical, theory, exam papers):

echo "..." > file.txt: Creates a text file.

echo "..." > file.docx: Creates a Word document.

echo "..." > file.pptx: Creates a PowerPoint file.

Step 4: Create Excel Files on the Desktop
echo "ICAE Marks Content" > "Icae Marks.xlsx": Creates Excel file with content.

echo "Final Exam Marks Content" > "Final Exam Marks.xlsx": Creates another Excel file.

Step 5: Move Excel Files to Marks Folder
move "Icae Marks.xlsx" "Marks\": Moves the first file.

move "Final Exam Marks.xlsx" "Marks\": Moves the second file.

Step 6: Copy Marks Folder into Exam
xcopy /E /I Marks "Exam\Marks": Copies everything from Marks to Exam\Marks.

Step 7: Hide the Exam Folder
attrib +h Exam: Hides the folder so it’s not visible by default.

🛠️ Summary of Commands
Action ----------------------------	Command
Go to Desktop	--------------------- cd %userprofile%\Desktop
Create folders --------------------	mkdir
Create files ----------------------	echo ... > filename
Move files ------------------------	move
Copy folders ----------------------	xcopy /E /I
Hide folders ----------------------	attrib +h

![Screenshot (164)](https://github.com/user-attachments/assets/c61ad345-cbfc-4e50-a297-b7b7135cf36b)

🎯 Task:
Using a data.csv file, perform the following:

Filter students whose GPA is greater than 3.5

Calculate the average GPA of all students

✅ Command 1: Filter rows with GPA > 3.5

awk: A powerful text processing tool.
-F,: Sets the field separator to comma (,).
NR==1: Selects the first line (header).
$4 > 3.5: Selects rows where the 4th column (GPA) is greater than 3.5.
✅ This displays the header and only those students with GPA > 3.5.

✅ Command 2: Calculate Average GPA

NR>1: Skips the header row.
sum+=$4: Adds the GPA (4th column) to the total sum.
count++: Increments the count of students.
END: After reading all lines, prints the average using sum/count.
✅ This calculates and displays the average GPA of all students.


![Screenshot (165)](https://github.com/user-attachments/assets/a978080a-00d6-4d10-b81d-45bca8c856b7)

🎯 Task:
1).Read two strings from the user.
2).Compare their character lengths.
3).Print which string is longer or if both are equal.

read -p: Prompts the user to enter a value and stores it in a variable.
${#str}: Calculates the length of the string.
if, elif, else: Compares the lengths and prints the result.


