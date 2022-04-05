#include "IntPower.h"

bool IntPower::init(double first) {
	if (first == 0.0) {
		return false;
	}
	else {
		return true;
	}
}

void IntPower::read() {
	do {
		cout << "first = "; cin >> first;
		cout << "second = "; cin >> second;
		if (!(init(first))) {
			cout << "\'first\' is incorrect.\n Enter again:" << endl;
		}
	} while (!init(first));
}

void IntPower::display() {
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
}

double IntPower::power() {
	if (init(first)) {
		return pow(first, second);
	}
	else {
		return -1;
	}
}

IntPower::IntPower()
{
	first = 1;
	second = 0;
}

IntPower::IntPower(double f, int s)
{
	if (f != 0) {
		first = f;
	}
	else {
		first = 1;
	}
	second = s;
}

IntPower::IntPower(IntPower& a)
{
	second = a.second;
	first = a.first;
}

IntPower::~IntPower()
{ }

IntPower& IntPower::operator=(const IntPower& a)
{
	second = a.second;
	first = a.first;
	return *this;
}

IntPower::operator string() const
{
	stringstream ss;
	ss << " first = " << first << endl;
	ss << " second = " << second << endl;
	return ss.str();
}

IntPower& IntPower::operator++()
{
	first++;
	return *this;
	// TODO: вставьте здесь оператор return
}

IntPower& IntPower::operator--()
{
	first--;
	return *this;
	// TODO: вставьте здесь оператор return
}

IntPower IntPower::operator++(int)
{
	IntPower t(*this);
	second++;
	return t;
}

IntPower IntPower::operator--(int)
{
	IntPower t(*this);
	second--;
	return t;
}

ostream& operator<<(ostream& out, const IntPower& a)
{
	out << string(a);
	return out;
	// TODO: вставьте здесь оператор return
}

istream& operator>>(istream& in, IntPower& a)
{
	cout << "first = "; in >> a.first;
	cout << "second = "; in >> a.second;
	cout << endl;
	return in;
	// TODO: вставьте здесь оператор return
}
