#include "pch.h"
#include "Set.h"

Set::Set(char* input){
	for (int i = 0; i < 256; i++) {
		char_array[i] = '0';
	}
	if(input != NULL)
		while (*input != '\0') {
			char_array[(int)*input] = '1';
			input++;
		}
}	

ostream& operator<<(ostream& os, Set& s)  // overload ¡§<<"
{
	for (int i = 0; i < 256; i++) {
		if (s.char_array[i] == '1') {
			char aChar = i;
			os << aChar;
		}
	}
	
	return os;
}


Set Set::operator+(Set& s) {
	Set temp({0});
	for (int i = 0; i < 256; i++) {
		if (this->char_array[i] == '1' || s.char_array[i] == '1') {
			temp.char_array[i] = '1';
		}
	}
	return temp;
}


Set Set::operator*(Set& s) {
	Set temp({ 0 });
	for (int i = 0; i < 256; i++) {
		if (this->char_array[i] == '1' && s.char_array[i] == '1') {
			temp.char_array[i] = '1';
		}
	}
	return temp;
}

Set Set::operator-(Set& s) {
	Set temp({ 0 });
	for (int i = 0; i < 256; i++) {
		if (this->char_array[i] == '1' && s.char_array[i] == '0') {
			temp.char_array[i] = '1';
		}
	}
	return temp;
}

const char* Set::operator>=(Set& s) {
	Set temp = *this*s;
	for (int i = 0; i < 256; i++) {
		if (temp.char_array[i] !=  s.char_array[i] ) {
			return "does not contain";
		}
	}
	return "contains";
}

const char* Set::in(char& x) {
	if (this->char_array[(int)x] == '1') {
		return "is in";
	}
	else {
		return "is not in";
	}
}
