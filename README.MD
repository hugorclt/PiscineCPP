## 42 C++ Piscine September 2022

### Summary

A group of subject designed to **learn CPP** through differents **exercices**, here are some explanation about the specification of every modules. 

___

### Table of contents

1. [CPP00: Strings and I/O Manipulation](#cpp00)
2. [CPP01: New, class, constructor, ... : basics](#cpp01)
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
##### New, class, constructor, ... : basics

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

___
### CPP03:
##### Inheritance : basics

___
### CPP04:
##### Polymorphism

___
### CPP05:
##### Exception, Try, Catch

___
### CPP06:
##### cast, convert...

___
### CPP07:
##### Template

___
### CPP08:
##### Containers


