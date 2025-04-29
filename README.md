
Shell Script Exercises - Advanced Practice (Qu1 - Qu4)

------------------------------------------------------
Qu1) Astrology Based on Life Path Number

Script:
echo "Enter the date of birth: "
read date
a=$(($date % 10))
b=$(($date / 10))
c=$(($a + $b))

case $c in
1) echo "Lucky" ;;
2) echo "Carefully do your work" ;;
3) echo "Stronger" ;;
4) echo "Happy" ;;
5) echo "Can get help" ;;
6) echo "Doubt" ;;
7) echo "Sad" ;;
8) echo "Like" ;;
9) echo "Courage" ;;
*) echo "Invalid" ;;
esac

Purpose:
Calculates life path number and shows an astrology prediction.

------------------------------------------------------
Qu2) Summation and Multiplication of List of Numbers

Script:
sum=0
mul=1
echo "Enter numbers separated by space: "
read -a numbers
for num in "${numbers[@]}"
do
  sum=$(($sum + num))
  mul=$(($mul * num))
done
echo "Summation: $sum"
echo "Multiplication: $mul"

Purpose:
Takes a list of numbers and outputs their sum and product.

------------------------------------------------------
Qu3) Print Integers from 1 to 10 Using While Loop

Script:
let x=1
while [ $x -le 10 ]
do
  echo $x
  x=$(($x + 1))
done

Purpose:
Prints numbers from 1 to 10.

------------------------------------------------------
Qu4) Pattern Printing Using Nested Loops

i) Left-Aligned Triangle of Stars:
echo "Enter the number: "
read rows
for ((x=1; x<=rows; x++))
do
  for ((y=1; y<=x; y++))
  do
    echo -n "*"
  done
  echo ""
done

ii) Inverted Left-Aligned Triangle of Stars:
echo "Enter the number of rows: "
read rows
for ((i=rows; i>=1; i--))
do
  for ((j=1; j<=i; j++))
  do
    echo -n "*"
  done
  echo ""
done

iii) Incrementing Numbers Triangle:
echo "Enter the rows: "
read rows
for ((i=1; i<=rows; i++))
do
  for ((j=1; j<=i; j++))
  do
    echo -n $j
  done
  echo ""
done

iv) Repeating Numbers Triangle:
echo "Enter the number of rows: "
read rows
for ((i=1; i<=rows; i++))
do
  for ((j=1; j<=i; j++))
  do
    echo -n $i
  done
  echo ""
done

v) Center-Aligned Pyramid of Stars:
# This pattern is not yet implemented in the code above but here is the concept
# for ((i=1; i<=rows; i++))
# do
#   for ((j=i; j<rows; j++))
#   do
#     echo -n " "
#   done
#   for ((k=1; k<=(2*i-1); k++))
#   do
#     echo -n "*"
#   done
#   echo ""
# done

Purpose:
Practices pattern output using nested loops.
