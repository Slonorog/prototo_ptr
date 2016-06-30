#pragma once
#include <iostream>
//template <class T>
class proto_ptr {
public:
	proto_ptr():ptr(nullptr) {}
	proto_ptr(int * ptr):ptr(ptr) {}
	proto_ptr(const proto_ptr& Right) = delete;
	proto_ptr& operator=(const proto_ptr& Right) = delete;
	int operator *() {return *ptr;}
	int get() { return *ptr; }


private:
	int * ptr;
};