#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << "Hallo saya function dari base class";
	}
};
class derivedClass : public baseClass {
public:
	void perkenalan() {							//eror 1 karena menggunakan kata final yang dimana tidak dapat diturunkan lagi atau mematikan turunan
		cout << "Hallo saya function dari derived Class";
	}
};
int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}