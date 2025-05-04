📜 Script Explanation: quiz1.sh
This Bash script prompts the user to input three numbers (a, b, and c) and calculates:

The Least Common Multiple (LCM) of the first two numbers (a and b)

The Greatest Common Divisor (GCD) of the second and third numbers (b and c)

🔧 How It Works:
User Input:

The script asks for three numbers using read.

GCD Function:
gcd() {
    local x=$1
    local y=$2
    while [ $y -ne 0 ]; do
        temp=$y
        y=$((x % y))
        x=$temp
    done
    echo $x
}
This function uses the Euclidean Algorithm to compute the GCD of two numbers.

LCM Function:

lcm() {
    local x=$1
    local y=$2
    local gcd_value=$(gcd $x $y)
    echo $(( (x * y) / gcd_value ))
}
This calculates the LCM using the formula:

LCM
(
𝑥
,
𝑦
)
=
𝑥
×
𝑦
GCD
(
𝑥
,
𝑦
)
LCM(x,y)= 
GCD(x,y)
x×y
​
 
Output:

Displays the LCM of a and b

Displays the GCD of b and c

🖥️ Example Run:
Enter the first number (a) : 6
Enter the second number(b) : 4
Enter the third number(c) : 2
LCM of 6 and 4 is 12
GCD of 4 and 2 is 2


