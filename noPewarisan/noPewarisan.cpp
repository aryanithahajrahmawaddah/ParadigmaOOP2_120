#include <iostream>
using namespace std;

class baseClass final {
public:
	virtual void perkenalan() {
		cout << "Hallo saya function dari base class";
	}
};
class derivedClass : public baseClass {					//eror 1 karena menggunakan kata final yang dimana tidak dapat diturunkan lagi atau mematikan turunan
public:
	void perkenalan() {
		cout << "Hallo saya function dari derived class";
	}
};
int main() {
	derivedClass a;
	a.perkenalan();

	return;
}