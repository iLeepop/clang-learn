// bool
// cahr
// int
// float
// double
// void
// wchar_t
// typedef short int wchar_t;

int i = 10;
float f = static_cast<float>(i);

class Base {};
class Derived : public Base {};
Base* b = new Derived;
Derived* b = dynamic_cast<Derived*>(b);

const int ii = 10;
int& r = const_cast<int&>(ii);