#pragma once
#include <exception>

class Iznimka : public std::exception {
private:
	const char* poruka;

public:
	const char* what(){
		return poruka;
	}
};

class NotaNum :public Iznimka
{
public:
	const char*what(){
		return "not a number";

	}
};

class InvalidOperation:public Iznimka
{
public:
	const char* what() {
		return "invalid operation";

	}
};

class divZero:public Iznimka
{
public:
	const char* what() {
		return "divide by zero";

	}
};