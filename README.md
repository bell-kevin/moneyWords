# moneyWords

This project converts integers into words, for example to print out on a check. If the number is 25, for example, the words are "twenty five". The project asks the user for the input number and displays the words, in a loop until the user types the sentinel of -1 to end the loop. Here is an example of the project output:

Ch 11 Money Words

Validate that the input is in the range of 0 to 9999. If the number is less than 0, end the program. If the number is greater than 9999, display an error message and ask the user for another number.

Consider the algorithm to determine the words for the numbers. If the number is 1000, it should print "one" and "thousand". If the number is 2000, it should print "two" and "thousand". If the number is 1200, it should print the "one", "thousand", and add "two" and "hundred". How do you find out how many thousands or hundreds are in the number? If you divide the number by 1000 (integer division), the result will be the number of "thousands" in the number. If you do modulus division by 1000, the result is everything that is left over after dividing by 1000 -- everything less than 1000. Dividing 1200 by 1000 gives 1 (the number of thousands) and modulus division of 1200 by 1000 gives 200 (the remainder, the value still needing to be translated into words). It takes both divisions to do this work. Once you know how many thousands and hundreds there are, you can look up those integers in an array -- if there is 1 thousand, then look up the word in an array at index 1; if there are 2 thousands, look up the word in an array at index 2; and so on. Once you have figured out the number of thousands and hundreds, you can look at the tens. The word names for the numbers from 11 to 19 are unique and don't match the pattern of the rest of the numbers up to 99. Instead of an array with the words for 0 to 9, make it an array with the words for 0 to 20. Once you have figured out the hundreds, check if the remaining number is less than or equal to 20 and if so, then look up the word. If it's more than 20, then you need to do the divisions by 10 to complete the work. You need a separate array for the words for tens, like "thirty" or "forty".

Create a class that contains the functionality for printing words for numbers. It needs several constant static strings for those words, like "thousand" and "hundred". Create an array of strings for the numbers 0 to 20, and another one for the tens numbers (0, 10, 20, 30, etc.). These should all be constant static variables. In this class, create a print method that does all the work with the divisions and printing out the number words. 

In the main method, in a loop, ask the user for a number. Use -1 as the sentinel that ends the loop; otherwise, ask the user for another number and display the words for that number. 

Run the project once and enter values that test all four digits, three digits, two digits, and one digit, as shown in the image. Be sure to include an invalid entry. Take a screenshot of the results.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.
