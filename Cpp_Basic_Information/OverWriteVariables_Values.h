#pragma once
#include <iostream>

namespace OverWriteVariablesValues
{
	// Function to demonstrate overwriting variable values
	void printNumber();
	
	// Function to demonstrate good coding practices
	void GoodPractice();

	// Function to demonstrate bad coding practices
	void BadPractice();
}

/*
Good Coding Practices
1.	Use of #pragma once:
•	Ensures the header file is included only once during compilation, preventing multiple inclusion issues.
•	Cleaner and more modern than traditional include guards (#ifndef, #define).
2.	Scoped Initialization:
•	The variable l_number is initialized using curly braces {}. This is a modern C++ practice (uniform initialization) that avoids unintended type conversions.
3.	Use of std::cout with std::endl:
•	Explicitly using std:: namespace for cout and endl ensures clarity and avoids ambiguity.
4.	Clear Problem Statement in Comments:
•	The problem statement is well-documented, making the code easier to understand and maintain.
5.	Minimal and Focused Code:
•	The code is concise and directly addresses the problem statement without unnecessary complexity.
---
Bad Coding Practices
1.	Using using namespace std;:
•	While convenient, it can lead to namespace pollution and potential conflicts in larger projects. Prefer explicitly qualifying names (e.g., std::cout).
2.	Including a Header File for Implementation:
•	Header files (.h) are typically used for declarations, not implementations. The main() function should be in a .cpp file.
3.	Lack of Input Validation:
•	Although not required for this specific task, robust programs should validate inputs or handle edge cases.
4.	Hardcoding Values:
•	Directly assigning 5000 and 1000 to l_number is fine for this example, but in real-world scenarios, constants or configuration files should be used.
5.	No Separation of Concerns:
•	The code mixes logic and output in the same function. For larger projects, separating logic into functions or classes improves maintainability.
---

*/