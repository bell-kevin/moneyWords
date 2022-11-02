#include <iostream>
using namespace std;

class MoneyWords {
public:
	static const string ones[21];
	static const string tens[10];
	static const string hundred;
	static const string thousand;
	
	static void print(int num) {
		if (num == 0) {
			cout << "zero";
			return;
		}
		if (num < 0) {
			cout << "minus ";
			num = -num;
		}
		if (num >= 1000) {
			print(num / 1000);
			cout << " " << thousand;
			num %= 1000;
			if (num > 0) {
				cout << " ";
			}
		}
		if (num >= 100) {
			print(num / 100);
			cout << " " << hundred;
			num %= 100;
			if (num > 0) {
				cout << " ";
			}
		}
		if (num >= 20) {
			cout << tens[num / 10];
			num %= 10;
			if (num > 0) {
				cout << "-";
			}
		}
		if (num > 0) {
			cout << ones[num];
		}
	} // print() method
}; // class MoneyWords

const string MoneyWords::ones[21] = {
	"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
	"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
};

const string MoneyWords::tens[10] = {
	"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
};

const string MoneyWords::hundred = "hundred";
const string MoneyWords::thousand = "thousand";

int main()
{
    cout << "Chapter 11 Money Words by Kevin Bell\n\n";
	cout << "This program translates whole dollar amounts into words for writing on checks.\n";
	cout << "Enter a negative number to quit.\n";
	cout << "Enter an amount to be translated into words: ";
	int amount;
	cin >> amount;
	//if amount greater than 9999 or less than 0 end program, but if -1 then end program
	while (amount > 9999 || amount < -1) {
		cout << "Please enter a number between 0 and 9999: ";
		cin >> amount;
	}
	while (amount != -1) {
		MoneyWords::print(amount);
		cout << endl;
		cout << "Enter an amount to be translated into words: ";
		cin >> amount;
		//if amount greater than 9999 or less than 0 end program, but if -1 then end program
		while (amount > 9999 || amount < -1) {
			cout << "Please enter a number between 0 and 9999: ";
			cin >> amount;
		} 
	} // while loop
	system("pause");
	return 0;
}
