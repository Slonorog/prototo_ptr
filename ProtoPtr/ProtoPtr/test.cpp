#include "ProtoPtr.h"
#include <memory>
int main() {
	int b = 1024;
	int bc = 332;
	int * k = &b;
	std::unique_ptr<int> a(&b);// = std::make_unique<int*>(k);
	std::unique_ptr<int> boo(&bc);
	k = a.release();
	std::cout<<a.get()<<std::endl;
	a.swap(boo);
	std::cout << a.get() << std::endl;

	std::cin.get();

	return 0;
}