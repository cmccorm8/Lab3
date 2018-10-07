Chance McCormick
# Lab3
Detecting for overflow of various data types. Example of comparisons of different data types.

1 and 2. 
To detect for overflow for shorts and longs simply test for when the return value is negative. 
The sum up to 256 causes an overflow.  

3. 
The sum up to 65536 causes an overflow

4.
To detect for overflow for floats and doubles simply test for when the return value is infinite
or inf.
The product up to 35 causes an overflow

5.
The product up to 171 causes an overflow

6.
The value of the function regardless of the value of n should be 0.  When the storage
values of the function are changed to float or doubles the function retruns a decimal number.
This happens due to integer division.  floats and doubles are both data types that store
values with a high number of precision.  This has the effect of changing the function value 
from a 0 to a decimal.

7.
The error occurs when i becomes 4.4. the argument i < 4.4 should not be true and the for 
loop should stop.  It does not stop and couts a value for i that is 4.4.  This happens
because of the comparison between different data types that have a different level of precision
and is the result of a rounding error.  Because of the rounding error the compiler sees that 
the float value of i is still less than the double value of 4.4 and cout the value of 4.4 for i.

8.
Changing the data type of i to a double fixes the issue because the for loop is now comparing 
a double to a double. As a result no rounding error occurs and the for loop does not cout a value
of 4.4 for i. Instead the for loop correctly stops at 4.2.


