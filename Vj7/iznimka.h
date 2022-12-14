#pragma once
#include <exception>

class Iznimka : public std::exception {
private:
	const char* poruka;

public:
	Iznimka(const char* p) : poruka(p) {}
	const char* what(){
		return poruka;
	}
};