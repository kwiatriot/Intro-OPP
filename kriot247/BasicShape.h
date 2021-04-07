#ifndef BASICSHAPE
#define BASICSHAPE
using namespace std;

class BasicShape 
{
private:
	double area;

public:
	double getArea() 
	{
		return area;
	}

	virtual double calcArea = 0;
};

#endif // !BASICSHAPE
