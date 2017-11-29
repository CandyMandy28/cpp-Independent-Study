# 2017-11-29

# Homework (make a Super Smash character using inheritance)

<br>
# Polymorphism

**Side note: **
`->` dereferences and then does the function.
```c++
number.multiply();
Num* [] arrnum;
arrnum->multiply();
```

## Example (Shape { Cylinder and Sphere })
You have shape, and you have Cylinder and Sphere which are types of shapes.

You have the function: `getVolume()`

```c++
class Shape // abstract base class b/c it has a pure virtual function
{
	public:
		virtual double getVolume() = 0; // "a pure virtual function" or an "abstract function"
}

class Cylinder : public Shape
{
	public:
		double getVolume() override // you should add `override` b/c it'll add your 
		{
			return pi * rad * rad * height;
		}
}

class Sphere : public Shape
{
	public:
		double getVolume() override
		{
			return pi * rad * rad * rad * 4/3;
		}
}

// ...

double totalVolume = 0;
Shape* [] shapes;
for(auto sh : shapes)
{
	totalVolume += sh->getVolume();
}
```


Because Shape is now an abstract base class, you can't do:
```c++
Shape myShape; // ERROR
```

Shape could only be called by references and pointers. So Arrays, yes.


# Pikachu example
If you have the function `punch()` for player, but you want a different effect for punch for Pikachu.
You can do polymorphism to make it different.

```c++
class Pikachu: public Player
{
//...
	void punch() override
	{
		Player::punch();
		addShock();
	}
//...
}
```

```c++
class Vector
{
//...
	vector();
	vector(int size);
	vector(int size, T element);
	vector(std::initializer_list);
};

class CheckVec: public Vector
{
	using vector::vector;
}
```
<br>
# Casting

Casting is when you change the type of an object.

```c++
double cow;
int fish = (int) cow;

string* cow; // :) no thank you
int fish = (int*) cow; // NOOOOO plssss
```

Cast Operators:
* static_cast
* dynamic_cast
* reinterpret_cost (Experts Only)
	* changes from Pikachu to a Cylinder.
	* *very very very* rare use.
* const_cast
	* last resort
	* removes const

Example:
```c++
int one = 1;
int three = 3
double onethird = one / third; // returns 0

double onethirdRight = static_cast<double> (one)/three; // returns 0.333333...
```
<br>
Upcasting:

```c++
Cylinder cyl;
Shape sh = static_cast<Shape>(cyl);
```

Example of Downcasting:
```c++
void bolt(Player* pl)
{
	pl->thunderbolt(); //NOOOOO
	Pikachu* pk = dynamic_cast<Pikachu*>(pl);
	
	if(pk) // pls check otherwise it might crash.
	{
		pk->thunderbolt();
	}
}
```

Dynamic cast checks if it works. If it works, it'll return a Pikachu.
If fails, it returns null pointer.

# A new word
**KLUDGE** (kloodj)
*n.* a term referring to code written intentionally badly.

Put this term above a KLUDGEd section. (sometimes you're too lazy or didn't have time to code correctly)

When looking back on your code, you should fix these first.


