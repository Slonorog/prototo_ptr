#include "ProtoPtr.h"
#include <memory>
int main() {
	test a, b;
	
	std::unique_ptr<test> k(&a);// = std::make_unique<int*>(k);
	proto_ptr clon(&b);
	
	std::cin.get();

	return 0;
}