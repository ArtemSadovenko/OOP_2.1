#include "IntPower.h"

int main() {
	IntPower a;
	IntPower b(2,3);
	IntPower c(b);
	cout << "c " << c;
	cout << "b " << b;

	cout << "++c" << ++c;
	b++;
	cout << "b++" << b;
	cout << "--c" << --c;
	b--;
	cout << "b--" << b;
}
