# Notes for C++

## 2017-09-20
### (cppreference)[cppreference.com]

### Pass-by-reference
```c++
int advance(int a, double b)
{ // pass by value
    a += 2; // no effect
}

int advance(int& a, double b)
{ // pass by reference
    a+= 2; // it will look back to the previous value of a and changes the value for it.
}
```

Note:
```c++
struct SIR
{
    // stuff
};

double evaluate(SIR& sir);
// this can be changed to
double evaluate(const SIR& sir);
```
### User-defined Type

basically similar to `int`
it's usually better than class.

```c++
struct Apple
{
    double mass;
    double diameter;
}; 
```

Now, you can use Apple like any other types.
```c++
int a;

Apple b;
b.mass = 5;
b.diameter = 18;
std::cout << b.mass; \\ prints out "5"

\\ This can also be initialized as
Apple b {5,18};
```

### Implementation of User-defined types and pass-by-reference
```c++
void advance(Object& object, double time)
{
    object.position += object.velocity * time;
}
```

### Inheritance
```c++
struct Torpedo{
    Object obj;
    double timer;
};

Torpedo torp;
torp.obj.position = 5;
```