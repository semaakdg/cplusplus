// NOTLAR.cpp : Bu dosya 'main' iþlevi içeriyor. Program yürütme orada baþlayýp biter.
//


/*#include <iostream>// c++ standart librarysi
#include <string>

using namespace std;

int a, b = 5;

int main()
{
	bool my_flag;
	a = 7;
	my_flag = false;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "flag" << my_flag << endl;
	my_flag = true;
	cout << "flag=" << my_flag << endl;
	cout << "a+b=" << a + b << endl;
	cout << "b-a=" << b - a << endl;
	unsigned int positive;
	positive = b - a;
	cout << "b-a(unsigned)=" << positive << endl;

	return(0);

}*/




/*                type inference with auto

#include<iostream>;
#include<typeinfo>;

using namespace std;
auto a = 8;  //int
auto b = 12345678901;  //__int64
auto c = 3.14f;  //float
auto d = 3.14;   //double
auto e = true;   //bool
auto f = 'd';    //char

int main()
{
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;
	cout << typeid(e).name() << endl; 
	cout << typeid(f).name() << endl;
	return(0);


}*/




/*    Integers
* signed or unsigned
* int (implementationn dependent) usually it's 32 bits, but it's sometimes 16 bits.
* char(8bits)
* 
*      
*      Floating-Point Numbers
* Floating-point numbers represent real numbers
* 3.14159, 1.3333, 0.5, -12.44
* IEEE 754 binary floating point
* float, double, long double
* 
*     
*       The Boolean Type
* bool/ Unlike C, C++ supports a Boolean type to represent true and false. The key word for this type is lowercase bool.
* {true, false}/In the language, the lowercase true and false keyword are defined, so you may assign either of these to a bool variable.
* Anything other than 0 is true//Also in the language, anything other than zero means true, and zero means false
* 
* 
*        The String Class
* Strings are not natively supported by the language
* However, they are supported in the standard library as a class
* <string> provides the string class with lost of functions
* 
* 
*       Pointers
* Special data type for a memory addresses
* Pointers act as references to variables
* The same pointer may be used to access many different variables sequentially
*  
* 
*       Variables
* Temporary data storage units
* They must be declared prior to being used
* The declaration must specify a type and a name
* the declaration may contain an initialization
* 
* 
*/



/*       Expressions
* Asymbolic representation of a calculation(like algebra)
* May contain variable, canstants, and operators
* Must produce a value
* 
* 
*        Assignments
* A line Of code that assigns a value tý a variable
* Must  contain a left-hand side and a right-hand side expression
* The left-hand side expression must be ableto hold a value
* The expression data types must match
* 
* 
*       Popular Operations
* Arithmetic: + = for addition
*             - = for subtraction
*             * = for multiplication
*             / = for integer division
*             % = for the modulo, or remainder of a division
* Bitwise: & = for bitwise and
*          | = for bitwise or
*          ~ = for bitwise not
*          ^ = for bitwise xor (!these are bitwise operations, not logical!)
* Logical: && = for and
*          || = for or
*           ! = for not (!Logical operators are the ones you probably want to use in an if statement's condition.!)
* Relational: == __ for equality (Double == sign for equality. Be careful with this one. A common mistake is to use the single equal sign in a conditional, and the problem is that this is valid, because it returns the assigned value
*             != __ for not equal
*              > __ greater than
*              < __ less than
*             >= __ greater or equal
*             <= __ less or equal
*           ""We have relation operators to compare values"" 
* Pointer: * = for indirection
*          & = for the address of operator,
*         -> = which gives you access to members of classes or structures from a pointer.
* 
*/




/*         Preprocessor Directives (önniþlemci yönergeleri)
* Your code is preprocessed prior to compiling
* Directives tell the preprocessor what to add or remove in the code
* Useful for libraries, constants, selectingcode block, etc.
* 
* You watch and search about this section in turkish and english, again and againg!!!1
* 
*/



/*        Constans 
* Identifiers with values that will not change during execution
* Useful as parameters in your code
* May be implemented with directive or as variables
* 
* 
* The #define directive schedules a find-and-replace operation
* #define ROOMS 4
* The use of #define is sometimes discouraged
* 
*       On the one hand, we may create constants with pre-processor directives. 
*The '#defined' directive schedules a find-and-replace operation, so that the code that is sent to the compiler has all the instances of the #define symbol replaced by its value.
*These '#define' symbols are known as macros. An example would be to '#define' the number of rooms in the house as 4.
*Now, you should be aware that the use of '#define' is sometimes discouraged, and considered a bad practice.
*That's because macros don't have a context, and there's no compiler enforcement for basic features like types and syntax correctness for macros.
*Besides, there's a better alternative. 
* 
* 
*        The Const Qualifier
* Used in a regular declaration
* Declarations specify a type
* Scope encapsulation is enforced
* !!The const is not the same in C and C++ //The const qualifier is not exactly the same in C and C++. 
*The C version only means that a variable cannot change, but it lacks most of the features implemented in C++.
*That's one of the reasons why macros are more common in C than C++.
* 
* 
*/



/*          Arrays               //constans=sabit
* Collections of data
* Homogeneous
* Fixed size
* Contiguous in memory. That means that the whole array is a sequential block of memory addresses.
* 

#include <iostream>

using namespace std;

#define AGE_LENGTH 4

int age[AGE_LENGTH];
float temparature[] = { 31.5, 32.7, 38.9 };

int main()
{
	age[0] = 25;
	age[1] = 20;
	age[2] = 19;
	age[3] = 19;

	cout << "The Age array has " << AGE_LENGTH <<" elements" << endl;
	cout << "Age[0]=" << age[0] << endl;
	cout << "Age[1]=" << age[1] << endl;
	cout << "Age[2]=" << age[2] << endl;
	cout << "Age[3]=" << age[3] << endl;

	cout << endl;
	cout << "Temp[0]=" << temparature[0] << endl;
	cout << "Temp[1]=" << temparature[1] << endl;
	cout << "Temp[2]=" << temparature[2] << endl;

	return(0);

}
*/



/*        String
* Not a native type in the language
* In C, strings are of characters(char)
* The std::string class comes with the C++ standard library

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int LENGTH1 = 25;

char array_str1[LENGTH1] = "Hey guys! ";
char array_str2[] = "What's up? ";

string std_str1 = "Hi everybody! ";
string std_str2 = "How's the going? ";

int main()
{
	strcat_s(array_str1, LENGTH1, array_str2);
	cout << array_str1 << endl;
	cout << std_str1 + std_str2 << endl;
	
	
	return(0);
}
*/



/*         Type Casting
* Specifying how to interpret a piece of data
* Useful for converting data types
* For example: int32_t or float
* Syntax: (uint32_t) (expression)


#include<iostream>
#include<cstdint>

using namespace std;

float flt = -7.44f;  // the f means that it's a float canstant, not a doubla
int32_t sgn;  // named sgn, as in sýgned 
uint32_t unsgn;  // named unsgn, as in unsigned

int main()
{
	sgn = flt;
	unsgn = sgn;

	cout << "float:" << flt<<endl;
	cout << " int32:" << sgn << endl;
	cout << "uint32:" << unsgn << endl;

	int fahrenheit = 100;
	int celsius;
	                                                  // öçncesinde burada "(5 / 9) * (fahrenheit - 32)" yazýyordu. Bunu neden deðiþtirdiðim aþaðýda yazýyor..
	celsius = ((float) 5 / 9.0) * (fahrenheit - 32);  //The problem is that the expression 5 / 9 is a so-called constant expression, 
	cout << endl;                                     //which the compiler takes care of. It doesn't make it to the code that will be executed by the processor. 
	cout << "Fahrenheit:" << fahrenheit << endl;      //Moreover, since both operands of that division are integer constants, the operator calculates the integer division, the quotient. 
	cout << "Celsius:" << celsius << endl;            //So the quotient of 5 / 9 is 0. As you can see, visual studio is showing just that. To get the correct conversion coefficient, we need a floating-point division.
													  //We may do that by converting either of those numbers to a float or double. That's because expressions always convert the types of their values to the largest type present. 
											    	  //So here I may explicitly cast the five to float, or alternatively, I could enter the constants as floats or doubles. Here I'll do both. 
	float weight = 10.99;							  //Five will be explicitly cast to float, and I'll rewrite the nine as 9.0. 

	cout << endl;
	cout << "Float          :" << weight << endl;
	cout << "Integer pa     :" << (int)weight << endl;
	cout << "Fractional part:" << (int)((weight - (int)weight) * 10000) << endl; // fractional part0 kesirli kýsým
	                                                                             //I'll need to get rid of the integer part and then shift the decimal digits left to get an 
	                                                                             //integer of as many decimal places I want to show. So, to get rid of the integer part. I can subtract the same integer part from the floating-point number. 
		                                                                         //This partial expression should contain 0.99. So now I'll multiply this number 
	                                                                             //by a power of 10 so that the integer part of the result contains all the decimal places I want to show.
	                                                                             //Since I want four decimal places, I'll use four zeros, or 10,000
	
	***Shouldn't this be 9900? Well, yes, but remember that we are using floating-point numbers, which are approximations with a small error. 
	Now this is not a limitation of C++ or its libraries, it's a limitation of the floating-point number representation. 
	You'll get the same result if you try this in Python or Java. These are the real numbers you use in your computers and smartphones every day.
	you'll get a better approximation with doubles, maybe enough to show 9900 in the fractional part***

	return(0);
}
*/


                                             
/*

                                             TASK
						 * calculate the average in an array of five integers
						 * just add the values and divide by five
						 * store your result in a float variable
						 * print the average on the screen 
						 * start with the code in the exercise files
											 


#include <iostream>

using namespace std;

int main()
{
	int nums[5] = { 1,23,32,24,337 };
	float result;
	result = nums[0] + nums[1] + nums[2] + nums[3] + nums[4];
	result /= 5;
	cout << "The average is " << result << endl;
	return(0);

}                        * I have created an array of five integers named nums, and I have initialized it with some numbers.
                         * Next, I declared a float named result. 
                         * I didn't need to cast the elements of nums or there are sum to float because I'm assigning this sum to a float anyway.Then I'm dividing the sum by five.
                         * Notice that I'm using the shorthand operator for dividing result by five and updating its value.
                         * Finally, I print out the result.
	*/




                                             /*QUESTÝONS
				 * What does this part of a main.cpp file do?      #include "library.h"

                   Causes the replacement of the #include directive by the entire contents of the source file library.h.
				   This is similar to a Copy-Paste operation of library.h into main.cpp


                 * Why is it important to specify the data type when declaring a variable?
                    Because the compiler needs to know how to interpret the data, and its width in bytes.

				 * When is type casting useful?
                    When an operation needs to be performed on specific data types like float or int

				 * What is the assumed type of a constant represented in the source code as 0.44?
				    Double

				 * What is type casting?
				    Explicitly specifying the data type of an expression.

				 * What does the auto type specifier do in this line of code? (since C++11) auto x = 40000.22;
				    Specifies that the type of x will be deduced from the initializer. In this case, double.

				 * Which of the following is not a built-in operator of the C++ programming language?  // Bitwise XOR, Logical OR, Bitwise OR are built-in operator the C++ 
				    Logical XOR

				 * What's a disadvantage of defining constants as macros?
				   They may lead to syntax errors.
 
                 * Suppose you want to have several lines of code that print data out for debugging purposes,
				   but you don't want those lines to make it to the final application, for efficiency reasons. 
				   Which of the following achieves the desired behavior by using preprocessor directives?

				   // comment the following line for the final application
                      #define DEBUGGING

                   // copy and customize this for every debugging line
                      #ifdef DEBUGGING
                      cout<<"Var1 = "<<var1<<endl;
                      #endif

				 * What is a variable of type double?
				    a floating point number
 
                 * How does the string data type work in C++?
				    Strings are implemented as the string class in the string header file.

				 * What's a correct way of accessing the third element in the following array? int array[10];
				    array[2]

											 */