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
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Use of `#pragma once`**:
   - Ensures the header file is included only once during compilation, preventing multiple inclusion issues.
   - Cleaner and more modern than traditional include guards (`#ifndef`, `#define`).

2. **Scoped Initialization**:
   - Variables are initialized using curly braces `{}` (uniform initialization), which avoids unintended type conversions.
   - Example: `int l_number{ 100 };`

3. **Explicit Namespace Usage**:
   - Use `std::cout` and `std::endl` explicitly to avoid namespace pollution and ensure clarity.

4. **Clear Problem Statement in Comments**:
   - Well-documented comments make the code easier to understand and maintain.

5. **Minimal and Focused Code**:
   - Code is concise and directly addresses the problem statement without unnecessary complexity.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Using `using namespace std;`**:
   - While convenient, it can lead to namespace pollution and potential conflicts in larger projects.
   - Prefer explicitly qualifying names (e.g., `std::cout`).

2. **Including a Header File for Implementation**:
   - Header files (`.h`) should only contain declarations, not implementations. The `main()` function or logic should be in a `.cpp` file.

3. **Lack of Input Validation**:
   - Programs should validate inputs or handle edge cases, even if not required for simple tasks.

4. **Hardcoding Values**:
   - Avoid directly assigning values like `5000` and `1000` to variables. Use constants or configuration files instead.

5. **No Separation of Concerns**:
   - Mixing logic and output in the same function makes the code harder to maintain.
   - For larger projects, separate logic into functions or classes for better maintainability.
*/