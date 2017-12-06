# 2017-12-06

# Homework
having many overriden functions and you want some of the functions to have certain function performed w/i it.

`final`


```c++
class Puncher : public Fighter
{
public:
	using Fighert::Fighter;
	
	int moveAttack() override;
protected:
	int virtual realMoveAttack()=0;
}

int Puncher::moveAttack()
{
	punch();
	return realMoveAttack();
}

class Mario : public Fighter
```

# Template


The inefficient way to do it:
```c++
inline double square(double val)
{
	return val * val;
}

int a = sqare(4); //error

inline int square(int val)
{
	return val * val;
}
// and so on...
```

What you want to do:
```c++
template <typename T>
inline T square(T val)
{
	return val * val;
}

//...
square(4); // instantiate the function (generate the code when you call it)
```

The SmartArray is able to be used for any type.
```c++
template<typename T>
class SmartArray
```

# Template Specialization

*NOTE: notation might be wrong*

This could be placed anywhere as long as it's after the original template function.
```c++
template <>
inline complex square(complex val)
{
	return val * val.conjugate;
}
```

Pow function:
```c++
int power(int base, int exp)
{

}

template <unsigned N> //unsigned int. it'll take numbers and types
int pow(int base)
{
	return pow<N-1>(base)*base; // recursive
}

template <0> // if the exponent == 0
int pow(int base)
{
	return 1;
}

// return pow<N/2> * pow<N/2> * pow<N%2>;
```

# Other Notes

* Use `inline` for only in-class or local functions
* `vector<bool>`: very compact boolean, uses little space.
* Hashmap: `map<string, int> mymap;`
* Tuple: `tuple<int,string,char*,Fish> t`
* Template errors are fun :)
* MUST BE PART OF THE HEADER FILE, not the source file.
