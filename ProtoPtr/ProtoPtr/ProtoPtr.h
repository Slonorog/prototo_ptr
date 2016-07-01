#pragma once
#include <iostream>
//template <class T>
class test {
	double* mass;
public:
	test() :mass(new double[30]) {

	}
	~test() {
		delete[] mass;
	}
};
class proto_ptr {
public:
	proto_ptr():ptr(nullptr) {}
	proto_ptr(test * ptr):ptr(ptr) {}
	proto_ptr& operator=(const proto_ptr& Right) = delete;
	test operator *()
	{
		return *ptr;
	}
	test* get() { return ptr; }
	test* realese() {
		test * temp = ptr;
		reset();
		return temp;
	}
	void reset() {
		 ptr= nullptr;
	}
	void swap(proto_ptr& foo) {
		test* temp = ptr;
		ptr = foo.ptr;
		foo.ptr = temp;
	}
	~proto_ptr() {
		delete ptr;
	}

private:
	test * ptr;
};
