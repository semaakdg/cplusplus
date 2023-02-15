

/*       Structures
* Containers of heterogeneous data members
* Useful for implement,ng s,mple models
* Structures are also C construsts


#include <iostream>
#include <string>

using namespace std;

enum cow_purpose {dairy, meat, hide, pet};

struct cow
{
	string name;
	int age;
	unsigned char purpose;
};


int main()
{	
	cow my_cow;
	my_cow.age = 5;
	my_cow.name = "Betsy";
	my_cow.purpose = dairy;
	cout << my_cow.name << " is a type-" << (int)my_cow.purpose << " cow." << endl;
	cout << my_cow.name << " is " << my_cow.age << " years old." << endl;
	return(0);


}
*/


/*         Classes
* Basic elements of object-oriented programing
* Useful for implemneting models
* Contain data and function members
* The same as Java and Python classes


I want you to see how similar classesand structures can be, so the first thing I'll do, is change the struct keyword to "class". That's almost it.In fact, let's try it. We got some errors. 
The first one reads "member cow age is inaccessible". 
That's because in the main function I'm trying to access the cows members, but by default class members are private.
So with this error, we see that the class is actually doing its job of hiding its members from the outside world. 
Just for you to see how this class may behave, just like the struct we have, let me add the public keyword to all members of the class. You simply type "public" and a colon. 
So there you have it we've converted a structure into a class.Well, actually it's more like I forced a class to be used as a structure.
Classes offer all the elements of object-oriented programming, and we should take advantage of those. 
So let me start by applying a feature of encapsulation, which is hiding the data from the outside world. So I'll explicitly specify all members as private instead of public. 
Now we have to modify our code to be able to access the age, nameand purpose of the cow as they are now private. 
For this, it's important to note that there are two types of data access going on in the main function. 
We are writing and we are reading the data members. When we assign values, we are writing into the data members and when we print their values, we are reading them.
It is always recommended to keep your data private as often as possible.
But remember that classes can have members of two types; data and functions. So a typical means of accessing the data is by defining member functions called setters and getters. 
Setters write into data members and getters return their values. Now, as you may already know, functions are modules of code that perform a task. 
Functions may take in data and return a value. Functions can be called from your code, including other functions. 
So let me define three getter functions; get_name, get_age and get_purpose and they will all be public. Functions must first specify the return type, then the name of the function, 
and then a list of parameters between parentheses. The first one will return a string and it will be called "get_name". 
The body of the function is a code block, so it's in code by curly brackets.Getters are super simple.
They do not receive parametersand they just return a data member with the return keyword.Let me write the rest of the getters.
I guess I don't always use parentheses in the return expression. I'll write the setter functions later, 
but now we'll use a very special public member function known as the constructor. The constructor of a class is called when an object is created.
An implicit constructor is always implemented, which simply creates the object allocating memory for the data members.
However, you can always write additional versions of the constructor by taking a custom set of parameters. 
This is known as overloading a function, and it means defining a function with the same name of an already defined function, but with a different set of parameters.
A classical constructor overload receives initialization values for all the data members. That's what I'll write next, so let's go to line 14.
A constructor is the only kind of function that does not specify a return type and its name must be the same as the name of the class. 
So this will be cow and the parameters will be the same members.I'll use different names for the initializers to avoid ambiguities. 
So I'll receive a "string name_I" for initializer and "int age_I" and an "unsigned char purpose_I" The body of the constructors should contain the initialization code you want for your new objects.
In our case, it's simply assigning the values to the members.
At first, it may appear that setters and getters are taking away the benefit we got from private access in the first place.
But the purpose of having private members is not to make them unavailable to the outside, but simply to restrict their access to code within their class.
If you write a class with elements that are correlated, you don't want the user to tweak the data freely, possibly breaking something.
It's best to have a function written by you, the author of the class, to perform operations that affect the data. Now, our class is functional.
Let me update the main code, replacing the member access expressions with the constructor or the getter functions. So line 35 will be modified to a call to the initializing constructor. 
We do that by writing the name of the new object as if it were a function call, including the arguments as a list between parentheses. 
This call to the constructor we just wrote. So this cow will be called Hildy, she'll be seven years old, and I want her as a pet.Notice that this line also replaces the following three lines. 
Now for the reading access of members, I'll replace the name of the data with the name of the getter function, which is the same, but with "get_" as a prefix.
Don't forget the empty list of arguments.And that's it. Let's try it.Now, we can see that everything went well as Hildy is a type - 3 cow and Hildy is seven years old. 
Now just for completeness, let me write just one setter function for the age in line 28. Remember this must be public and it will not return anything.
This is specified as returning the void type.Now the set age function will do the same as the constructor, 
but only modifying the age.As an exercise, go ahead and try using this setter function, then write the remaining setters for the nameand purpose of the cow.

#include <iostream>
#include <string>

using namespace std;

enum cow_purpose { dairy, meat, hide, pet };

class cow
{
public:
	cow(string name_i, int age_i, unsigned purpose_i)
	{
		name = name_i;
		age = age_i;
		purpose = purpose_i;

	}
	string get_name()
	{
		return name;
	}
	int get_age()
	{
		return age;
	}
	unsigned char get_purpose()
	{
		return purpose;
	}
	void set_age(int new_age)
	{
		age = new_age;
	}
private:
	string name;
	int age;
	unsigned char purpose;
};


int main()
{
	cow my_cow("Hildy",7,pet);
	cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << endl;
	cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
	return(0);
}
*/


/*        Implementation and Header Files
*
               Compiler      >    C++ Source File
*                                      |
               Assembler     >    Assembly File     Assemblly File
*                                      |                |
               Linker        >    Object File       Object File     Object File
			                            \               |               /
			                             \              |              /
			                              \             |             /
			                               \            |            /
                                            \           |           /           
											  Executable BÝnary File
	
* Header files contain class definitions and function declarations
* Implementation files contain executable code
* Implementation files must include their header files
* Your code should only inculude the header files
* Implementation files must be compiled





											*/