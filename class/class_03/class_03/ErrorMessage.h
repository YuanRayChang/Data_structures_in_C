#pragma once

#ifndef ERRORMESSAGE_H
#define ERRORMESSAGE_H

class ErrorMessage
{
	public:
		ErrorMessage(const char* pText = "Error"); // constructor
		~ErrorMessage(); // deconstructor
		void resetMessage(); // change the message
		ErrorMessage& operator=(const ErrorMessage& Message); // assignment operator
		char* what() const { return pMessage; } // display the message
	private:
		char* pMessage;
};

#endif