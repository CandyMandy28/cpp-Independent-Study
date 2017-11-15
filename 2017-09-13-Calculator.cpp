// dankness calculus
// Amanda Wang
// 2017-09-13

/*
Write a simple program that works as a calculator.  Here are the basic parameters:

Read a stream in from the standard input one character at a time.  (The one-character rule is a requirement.)  You can do that like this:

	std::cout << "Write the string you wish to calculate:\n";
	while (char nextChar = std::cin.get())
	{
		std::cout << nextChar << std::endl;
	}
You may not use any C++ standard library functions besides these (from the iostream header).  You may use the std::atoi() function from the cstdlib header.
Here are the parameters:
- You may only read the standard input one character at at time.
- Ignore any white space in the input string
- Implement add, subtract, multiply, and divide
- For simplicity, you can ignore order of operations, unless you want an extra challenge
- For another challenge, you can try to implement parentheses
- To keep things simple, do only positive integers.  Follow C's rules for integer division.
- Print out an answer when you see an equals sign.  Otherwise, keep calculating.
- For example, the string "2 + 5-3    *  2/2  =" should return 4
*/
#include <iostream>
using namespace std;

int main()
{
	std::cout << "Write the string you wish to calculate:\n";
	int result = 0;
	// list<int> numList = new list<int>;
	int count = 0;
	bool ad = false;
	bool su = false;
	bool mu = false;
	bool di = false;
	bool mo = false;
	while (char nextChar = std::cin.get())
	{
		std::cout << nextChar << std::endl;
		switch(nextChar)
		{
			case '0':
				// numList.push_back(0);
				if (count == 0)
				{
					result = 0;
				}
				if(mu)
				{
					result *= 0;
				}
				if(mo)
				{
					std::cout<<"MODULE BY ZERO.\nAnswer undefined.";
					return 0;
				}
				if(di)
				{
					std::cout<<"DIVIDE BY ZERO.\nAnswer undefined.";
					return 0;
				}
				break;
			case '1':
				// numList.push_back(1);
				if (count == 0)
				{
					result = 1;
				}
				if(ad)
				{
					result += 1;
					ad = false;
				}
				if(su)
				{
					result -= 1;
					su = false;
				}
				if(mu)
				{
					mu = false;
				}
				if(di)
				{
					di = false;
				}
				if(mo)
				{
					mo = false;
				}
				break;
			case '2':
				// numList.push_back(2);
				if (count == 0)
				{
					result = 2;
				}
				if(ad)
				{
					result += 2;
					ad = false;
				}
				if(su)
				{
					result -= 2;
					su = false;
				}
				if(mu)
				{
					result *= 2;
					mu = false;
				}
				if(di)
				{
					result /= 2;
					di = false;
				}
				if(mo)
				{
					result %= 2;
					mo = false;
				}
				break;
			case '3':
				// numList.push_back(3);
				if (count == 0)
				{
					result = 3;
				}
				if(ad)
				{
					result += 3;
					ad = false;
				}
				if(su)
				{
					result -= 3;
					su = false;
				}
				if(mu)
				{
					result *= 3;
					mu = false;
				}
				if(di)
				{
					result /= 3;
					di = false;
				}
				if(mo)
				{
					result %= 3;
					mo = false;
				}
				break;
			case '4':
				// numList.push_back(4);
				if (count == 0)
				{
					result = 4;
				}
				if(ad)
				{
					result += 4;
					ad = false;
				}
				if(su)
				{
					result -= 4;
					su = false;
				}
				if(mu)
				{
					result *= 4;
					mu = false;
				}
				if(di)
				{
					result /= 4;
					di = false;
				}
				if(mo)
				{
					result %= 4;
					mo = false;
				}
				break;
			case '5':
				// numList.push_back(5);
				if (count == 0)
				{
					result = 5;
				}
				if(ad)
				{
					result += 5;
					ad = false;
				}
				if(su)
				{
					result -= 5;
					su = false;
				}
				if(mu)
				{
					result *= 5;
					mu = false;
				}
				if(di)
				{
					result /= 5;
					di = false;
				}
				if(mo)
				{
					result %= 5;
					mo = false;
				}
				break;
			case '6':
				// numList.push_back(6);
				if (count == 0)
				{
					result = 6;
				}
				if(ad)
				{
					result += 6;
					ad = false;
				}
				if(su)
				{
					result -= 6;
					su = false;
				}
				if(mu)
				{
					result *= 6;
					mu = false;
				}
				if(di)
				{
					result /= 6;
					di = false;
				}
				if(mo)
				{
					result %= 6;
					mo = false;
				}
				break;
			case '7':
				// numList.push_back(7);
				if (count == 0)
				{
					result = 7;
				}
				if(ad)
				{
					result += 7;
					ad = false;
				}
				if(su)
				{
					result -= 7;
					su = false;
				}
				if(mu)
				{
					result *= 7;
					mu = false;
				}
				if(di)
				{
					result /= 7;
					di = false;
				}
				if(mo)
				{
					result %= 7;
					mo = false;
				}
				break;
			case '8':
				// numList.push_back(8);
				if (count == 0)
				{
					result = 8;
				}
				if(ad)
				{
					result += 8;
					ad = false;
				}
				if(su)
				{
					result -= 8;
					su = false;
				}
				if(mu)
				{
					result *= 8;
					mu = false;
				}
				if(di)
				{
					result /= 8;
					di = false;
				}
				if(mo)
				{
					result %= 8;
					mo = false;
				}
				break;
			case '9':
				// numList.push_back(9);
				if (count == 0)
				{
					result = 9;
				}
				if(ad)
				{
					result += 9;
					ad = false;
				}
				if(su)
				{
					result -= 9;
					su = false;
				}
				if(mu)
				{
					result *= 9;
					mu = false;
				}
				if(di)
				{
					result /= 9;
					di = false;
				}
				if(mo)
				{
					result %= 9;
					mo = false;
				}
				break;
			case '+':
				ad = true;
				break;
			case '-':
				su = true;
				break;
			case '*':
				mu = true;
				break;
			case '/':
				di = true;
				break;
			case '%':
				mo = true;
				break;
		}
		if(nextChar=='=')
		{
			std::cout <<"The answer is: " <<result<<"\n";
			break;
		}
		count++;
	}
	return 0;
}