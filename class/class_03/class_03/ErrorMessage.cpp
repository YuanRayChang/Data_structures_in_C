#include "pch.h"
#include <iostream>
#include <cstring>
#include "ErrorMessage.h"
using namespace std;

// constructor
ErrorMessage::ErrorMessage(const char* pText) {
	pMessage = new char[strlen(pText) + 1];
	strcpy(pMessage, pText);
}


// deconstructor
ErrorMessage::~ErrorMessage() {
	cout << "deconstructor called" << endl;
	delete[] pMessage;
}

// change the message
void ErrorMessage::resetMessage() {
	// replace message text with asterisks(*)
	for (char* temp = pMessage; *temp != '\0'; *(temp++) = '*')
		;
}

// assignment operator
ErrorMessage& ErrorMessage::operator=(const ErrorMessage& message) {
	// compare address, if equal, return left operand
	if (this == &message) {
		return *this;
	}

	delete[] pMessage;
	pMessage = new char[strlen(message.pMessage) + 1]; 
	// Since strcpy copies '\0', +1 is needed.

	// copy right operand string to left operand
	strcpy(this->pMessage, message.pMessage);

	return *this; // return left operand
}