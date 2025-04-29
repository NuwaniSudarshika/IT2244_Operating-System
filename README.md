
Shell Script Exercises - Basic Linux Shell Tasks

This file includes basic shell script tasks done in a Linux environment using bash. Each question covers key scripting concepts like input, conditions, and math operations.

------------------------------------------------------
Q1) Get the Calendar and Date

Command:
date +%d

Output:
Displays the current day of the month.
------------------------------------------------------

Q2) Get Student Name and Marks for 3 Subjects

Script:
echo "Enter the name: "
read name
echo "Enter mark for subject1: "
read x
echo "Enter mark for subject2: "
read y
echo "Enter mark for subject3: "
read z

Purpose:
Reads student name and marks for three subjects.

------------------------------------------------------

Q3) Basic Calculator with Arithmetic Operators

Script:
echo "Enter the first number: "
read x
echo "Enter the second number: "
read y
sum=$(($x+$y))
sub=$(($x-$y))
div=$(($x/$y))
mul=$(($x*$y))
echo "Summation: $sum"
echo "Substraction: $sub"
echo "Division: $div"
echo "Multiplication: $mul"

Purpose:
Performs arithmetic operations.

------------------------------------------------------

Q4) Get Day Name Based on User Input (1–7)

Script:
echo "Enter the number: "
read x
case $x in
1) echo "Monday" ;;
2) echo "Tuesday" ;;
3) echo "Wednesday" ;;
4) echo "Thursday" ;;
5) echo "Friday" ;;
6) echo "Saturday" ;;
7) echo "Sunday" ;;
*) echo "Invalid Number" ;;
esac

Purpose:
Displays day name for given number.

------------------------------------------------------

Q5) Verify Username

Script:
echo "Enter the username: "
read name
if [[ "$name" == "Mino" ]]; then
  echo "User name is correct"
else
  echo "User name is incorrect"
fi

Purpose:
Checks if username is "Mino".

------------------------------------------------------

Q6) Compare Two Numbers

Script:
echo "Enter the two number: "
read x y
if [[ $x -gt $y ]]; then
  echo "$x is greater than $y"
elif [[ $x -lt $y ]]; then
  echo "$x is less than $y"
fi

Purpose:
Compares two numbers.

------------------------------------------------------

Q7) Simple Calculator Using 'expr'

Script:
echo "Enter the first number: "
read x
echo "Enter the second number: "
read y

sum=$(expr $x + $y)
sub=$(expr $x - $y)
div=$(expr $x / $y)
mul=$(expr $x \* $y)

echo "Summation: $sum"
echo "Subtraction: $sub"
echo "Division: $div"
echo "Multiplication: $mul"

Purpose:
Performs arithmetic using expr.

