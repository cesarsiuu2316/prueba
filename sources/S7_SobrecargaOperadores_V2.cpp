#include <iostream>
using namespace std;
enum  etipo : unsigned int {
	d, m, a, h, min, s // dia (default), mes, anio, hora, minuto, segundo
};
class F {
private:	
	unsigned int d, m, a, h, min, s; // dia, mes, anio, hora, minuto, segundo
public:
	F(int m = 1, int d = 1, int a = 1900, int h = 13, int min = 1, int s = 1) {
		this->m = m;
		this->d = d;
		this->a = a;
		this->h = h;
		this->min = min;
		this->s = s;
	}
	F& operator++(int) { // post incremento	
		d++;
		return *this;
	}
	F operator--() { // pre decremento	
		--d;
		return *this;
	}
	F operator++() { // pre incremento	 
		++d;
		return *this;
	}
	F& operator--(int) { // post decremento
		d--;
		return *this;
	}
private:
	friend int main();
};

int main() {
	F f;
	f++; // post incremento	
	cout << f.d << endl;
	--f; // pre decremento	
	cout << f.d << endl;
	++f; // pre incremento	
	cout << f.d << endl;
	f--; // post decremento	
	cout << f.d << endl;
	return 0;
}