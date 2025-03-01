#include<iostream>
using namespace std;
class people {
public:
	static int a;
	int b;
	virture people() {} = 0;
	virture ~people() {} = 0;

};
class peoson :people {
	person(int a, int b) :a(a), b(b) {}
	int* p;
	peoson(const peoson& p) {
		this->a = p.a;
		this->b = p.b;
		this->p = new int(*p.p);
	}

};
int main() {
	cout << "²âÊÔ³É¹¦" << endl;
	return 0;
}