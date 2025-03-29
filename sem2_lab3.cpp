#include <iostream>

using namespace std;

class Circle {
protected:
	float rad1;
public:
	Circle(float rad1) {
		this->rad1 = rad1;
	}
	virtual void print() {
		cout << "radius 1 = " << rad1 << endl;
	}
};

class ellipse : public Circle {
protected:
	float rad2;
public:
	ellipse(float rad1, float rad2) :
		Circle(rad1) {
			this->rad2 = rad2;
		}

	void print() {
		Circle::print();
		cout << "radius 2 = " << rad2 << endl;
	}
};

int main()
{
	Circle cir(10);
	ellipse el(14, 15);
	Circle* c;
	c = &cir;
	c->print(); //dynamic polymorphic print
	cout << endl;
	c = &el;
	c->print(); //dynamic polymorphic print
	cout << endl;
	cir.print(); //static polymorphic print
	cout << endl;
	el.print(); //static polymorphic print
	cout << endl;

}
