#include <iostream>
using namespace std;
class B {
public:
	void fun1() {
		cout << "base-1\n";
	}
	virtual void fun2() {
		cout << "base-2\n";
	}
	virtual void fun3() {
		cout << "base-3\n";
	}
	virtual void fun4() {
		cout << "base-4\n";
	}
};
class D : public B {
public:
	void fun1() {
		cout << "derived-1\n";
	}
	void fun2() {
		cout << "derived-2\n";
	}
	void fun4(int x) {
		cout << "derived-4\n";
	}
};

int main() {
	B* p; D obj1; p = &obj1;
	p->fun1();
	p->fun2();
	p->fun3();
	p->fun4();
	//p->fun4(5);
	//obj1.fun4(5);
}