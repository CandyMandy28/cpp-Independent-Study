// 3D Vector3 Object thing with 
// Amanda Wang
// 2017-11-08

//Write a simple three-dimensional Vector3 class called Vector3.
//(Because two-dimensional Vector3s are so common, it is customary to put the dimension of the Vector3 in the class name.)
//Give it a constructor, accessors, and basic functions and operators.
//Make sure that the operators are defined without duplicate code anywhere.
//I'll let you choose sensible functions to use.
//
//Also, modify your SmartArray class to overload the bracket operator for member adjustment.
//Make sure to make a const version as well.  Modify your source code accordingly to test it.


class Vector3
{
public:

	Vector3 operator/(Vector3 lhs, double scalar)
	{
		return lhs /= scalar;
	}

	//Add
	Vector3 operator+(Vector3 a)
    {
		Vector3 c(xc + a.xc, yc + a.yc, zc + a.zc);
        return c;
    }

	// unary -
	Vector3 operator-()
	{
		Vector3 c(-xc, -yc, -zc);
		return c;
	}

	//subtract
	Vector3 operator-(Vector3 a)
	{
		return this + (-a);
	}

	//multiply
	Vector3 operator*(Vector3 a)
	{
		Vector3 c(xc * a.xc, yc * a.yc, zc * a.zc);
		return c;
	}

	// if equivalent
	Vector3 operator==(Vector3 a)
	{
		return (xc == a.xc & yc == a.yc & zc == a.zc);
	}

	// if not equal
	Vector3 operator!=(Vector3 a)
	{
		return !(this == Vector3 a);
	}

	// +=
	Vector3 operator+=(Vector3 a)
	{
		return ;
	}



private:
    double xc;
    double yc;
	double zc;
};

Vector3::Vector3() :
	x(0),
	y(0),
	z(0)
{}

Vector::Vector3(double ix, double iy, double iz) :
{
	x(ix),
	y(iy),
	z(iz)
}