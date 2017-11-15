# 2017-11-15

# Homework Overview

Overall, throwing exceptions is more of a kind of method that doesn't have a direct answer.

## SmartArray:
* Bad size: out of bounds or 0
	* 
* size <= 0
	* throw an exception
	* include it in constructor
* []
	* index <= 0
	* index >= size
	* `throw std::out_of_range("Invalid index passed to SmartArray");`
		* slower ?
		* there are unchecked ones so that they're fast.
* he has a const version for []
* try block
	* do it if you think something will go wrong
	* do this (catch) if something wrong does happen
* always catch by reference &
* `...` is sometimes safer depending on context
	
## Vector
* Divided by 0

* check your inputs
	* throw exception when it's bad
* as you build up more, more error handlers when you need it.

# Program Design
Program design is how to structure everything so that it's easy to understand and easy to edit:
* classes
* methods
* variables


Example: Vehicle

```c++
class Wheel
{
	// ...
};


class Vehicle
{
public:
	void accelerate(double acc);
	Vehicle(double weight);
private:
	Wheel[4] wheels; // array of 4 wheels
protected:
	Wheel& getFrontWheel(); // only children (classes) could call and edit wheel.
							// You decided to give them access to edit the wheel.
};


// inheritance
// ':' = "is a"
// everything in vehicle is also in car.
// car has no access to vehicle's private variables
class Car : public Vehicle
{
public:
	void openTrunk();
	Car(double weight, int doors)
private:
	// Vehicle vehicle; // No, it's not true
	int ndoors;
};

class Truck : public Vehicle
{
	// ...
};
```

Main file stuff:
```c++
Vehicle v;
v.accelerate(.1);

Car c;
c.accelerate(.1);
// this works

c.openTrunk();
v.openTrunk(); // DOESN'T WORK
```


Vehicle:
* an array of 4 wheels

Car:
* has the vehicle stuff
* also has car seat member

## On Private members
You can't directly access private members, but you don't want everyone to access it.

Therefore, you use `protected`.

ALL DATA MUST BE PRIVATE. YOUR DATA HAS TO BE PROTECTED.

## On Constructors

```c++
Car::Car(double weight, int doors):
	Vehicle(weight),
	ndoors(doors)		// YOU HAVE TO DO THIS otherwise error unless default constructor
{
}

Hybrid::Hybrid():
	Car(20,4)
{}
```

This stuff is very fast.

YOU MUST DO THE CONSTRUCTOR FOR BASE CLASS

Destructors, you start from the children class and go down.

* If you have `accelerate(double acc);` in vehicle too, it's called overloading or hiding.
	* you shouldn't use this too much b/c it's sometimes bad.
	* they still derive from more recent one.

To fix this problem, you can do:
```c++
void Car::accelerate(double acc)
{
	vroom();
	Vehicle::accelerate(acc);
}
```

You will want to connect everything, but then you get abstract base object. NOT GOOD.

You can do drawable objects, but make sure that it has meaning to it.

```c++
class Motorcycle : private Vehicles
```
Everything in Vehicle becomes private for Motorcycle.


```c++
void drive(Vehicle v);
void removeCarSeat(Car c);

// WORKS
drive(c);
drive(v);

// DOESN'T WORK
removeCarSeat(v);
```