#include <iostream>
#include "std_lib_facilities.h"

double arithmetic(char op, double op1, double op2){

	if(op == '-'){//subtraction
		 return op1 - op2;
	}
	else if(op == '*'){//multiplication
		 return op1 * op2;
	}
	else if(op == '+'){//addition
		 return op1 + op2;
	}
	else if(op == '/'){//division
		 return op1 / op2;
	}
	else
	{
		return -1;//because program states it cant be another thing here, this is here just so program does not yell at me 
	}
}

int main() {
	char operation[1];
	double op1;
	double op2;
	cin >> operation; 
	cin >> op1;
	cin >> op2;
	double result = arithmetic(operation[0], op1,op2);


	cout << result;//prints result
}