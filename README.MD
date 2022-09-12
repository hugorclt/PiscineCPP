## 42 C++ Piscine September 2022
### Summary

A group of subject designed to **learn CPP** through differents **exercices**, here are some explanation about the specification of every modules. 

___

### Table of contents

1. [CPP00: Strings and I/O Manipulation](#cpp00)
2. [CPP01: New, class, ...: basics](#cpp01)
3. [CPP02: Operator overload](#cpp02)
4. [CPP03: Inheritance : basics](#cpp03)
5. [CPP04: Polymorphism](#cpp04)
6. [CPP05: Exception, Try, Catch](#cpp05)
7. [CPP06: cast, convert...](#cpp06)
8. [CPP07: Template](#cpp07)
9. [CPP08: Containers](#cpp08)

___
### CPP00:
##### Strings and I/O Manipulation

To write some text on **STDOUT** we use the **'<<'** operator to _push_  a string into it.
```cpp
std::cout << "Hello World!" << std::endl;
```
In **`C++`** we have the class **`string`**, this class is defined in **`<string>`**.
```cpp
#include <string>
#include <iostream>

int	main()
{
	std::string name;

	std::getline(std::cin, name);
	std::cout << "My name is: " << name << std::endl;
}
```
We can use **`std::cin`** to communicate through **STDIN** and write information to our code for example _above_ with the function **getline**

___
### CPP01:
##### New, class, ... : basics

Sometimes we want to use an object outside of the function that created it:
```cpp

Cat	createCat(void)
{
	Cat	albert;

	return (albert);
}

int	main()
{
	Cat albert = createCat();
}
```
For example we **can't** do something like that because albert is destroyed when the function createCat() end, so we have to use the keyword **`new`** to create our Cat on the **heap** and not on the **stack**

```cpp

Cat	*createCat(void)
{
	Cat	*albert = new Cat();

	return (albert);
}

int	main()
{
	Cat *albert = createCat();

	delete albert;
}
```
**Never** forget that you have to destroy **every** object _instanciated_ with the keyword **`new`** by using **`delete`**

```cpp

Cat	*createCat(void)
{
	Cat	*groupsOfCats = new Cat[10];

	return (groupsOfCats);
}

int	main()
{
	Cat *groupsOfCats = createCat();

	delete []groupsOfCats;
}
```
Use **`delete[]`** to destroy entire array of object without having to **iterate** through it

___
### CPP02:
##### Operator overload

in **`C++`** you can overload all the operator, for example i want a new class MyInt, it have one attribute **`int`** number and i want to change the comportement of the **`+`** operator

```cpp
class MyInt 
{
	private:
		int number;

	public:
		MyInt	operator+(const &rhs)
		{
			return (this->number - rhs.number);
		}
};

int main()
{
	MyInt int1(3);
	MyInt int2(2);

	std::cout << int1 + int2 << std::endl
}
```
now the **`+`** operator acts like the **`-`** operator. You can define in your class all the operator (**`>`**, **`<`**, **`<=`**, **`>=`**, **`!=`**, **`==`**, **`>>`**, **`<<`**, **`=`**, **`[]`**, **`*`**, ...)

___
### CPP03:
##### Inheritance : basics

A class can inherit from another and share the same function and the same attributes
```cpp
class Animals 
{
	protected:
		int		numOfLegs;
	
	public:
		void	getNumOfLegs() const;
		void	walk();
};

class Cat : public Animals 
{
	public:
		void	meow();

}
int main()
{
	Cat	felix();
	Animals	thing();

	felix.walk(); //Works!
	felix.getNumOfLegs(); //Works!
	thing.meow(); //Don't works!
}
```

___
### CPP04:
##### Polymorphism

if a base class have a virtual function, this function can be overriden in the derived class
```cpp
class Animals 
{
	protected:
		int		numOfLegs;
	
	public:
		void	getNumOfLegs() const;
		virtual void	walk() {
			std::cout << "i'm walking!" << std::endl;
		};
};

class Cat : public Animals 
{
	public:
		virtual void	walk() {
			std::cout << "i'm meowing" << std::endl;
		};
};

int main()
{
	Cat	felix();
	Animals	thing();

	felix.walk(); //"i'm walking!"
	felix.getNumOfLegs(); //Works!
	thing.walk(); //"i'm meowing"
}
```

if a class have a virtual methods **equals to zero**, this class is an **interface**, it can't be instanciated, it's just useful for **inheritance**

```cpp
class Animals 
{
	protected:
		int		numOfLegs;
	
	public:
		void	getNumOfLegs() const;
		virtual void	walk() = 0;
};

class Cat : public Animals
{
	public:
		virtual void	walk()
		{
			std::cout << "i'm meowing" << std::endl;
		};
};

int main()
{
	Cat	felix();
	Animals	thing(); //DON'T WORK

}
```
Sometimes it's necessary to have the **destructor** in **virtual** if you delete an instance from a derived class through a pointer of a base class

```cpp
class Base 
{
    // some virtual methods
};

class Derived : public Base
{
    ~Derived()
    {
        // Do some important cleanup
    }
};

int main() 
{
	Base *b = new Derived();
	// use b
	delete b; // Here's the problem! (undefined behavior)
}
```
Since Base's destructor is not virtual and b is a Base* pointing to a Derived object, delete b has **undefined behaviour**
___
### CPP05:
##### Exception, Try, Catch
The **`try`** and **`catch`** keyword are very useful to **spot** and **display** error messages, here a little piece of code to explain the methods.

**Nested class** are an important part in creating exception, you define a nested class inheriting **`std::exception`** in order to throw error in your code.

```cpp
class Test {
	public:
	//here is a nested class
		class ProblemsHere : public std::exception {
			public:
				virtual const char *what() const throw {
					return ("the custom message u want");
				}
		}

		void	doThing(std::string things);
}

void	Test::doThing(std::string things) {
	if (!things)
		throw ProblemsHere(); //throw an error, the name of the nested class
		//with parenthesis
	else
		return (things);
}


int main() {
	Test	obj;

	try {
		obj.doThing();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	//the execution continue here
}
```

with the keyword try we **execute** an instruction, if the instruction **fail**, we catch an std::exception &e and use the function what to display the custome message we want.

The executions of your code continue after the try and catch block.
___
### CPP06:
##### cast, convert...
___
### CPP07:
##### Template
___
### CPP08:
##### Containers


