#ifndef BASICSHAPE
#define BASICSHAPE
using namespace std;

class BasicShape 
{
protected:
	double area;

public:
	double getArea() 
	{
		return area;
	}

	virtual void calcArea() = 0;
};

#endif // !BASICSHAPE
