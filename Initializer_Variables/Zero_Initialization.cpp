#include "Zero_Initialization.h"
#include "Point.h"

// GOOD PRACTICE: Constructor with explicit zero initialization
// Uncomment and use this constructor if initialization with a specific integer value is required
// INITIALIZER::ZERO_INITIALIZATION::CZero_Initialization::CZero_Initialization(const int f_data)
//     : m_cpoint_ptr{}
//     , m_cpoint_ptr1{ nullptr }
//     , m_float_data_member{ 0.0f }
//     , m_int_data_member(f_data) // GOOD: Explicitly initialize with the provided value
// {
// }

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Explicit Initialization**:
   - Always explicitly initialize member variables to avoid undefined behavior.
   - Example: `m_int_data_member(f_data)`

2. **Default Member Initializers**:
   - Use default member initializers in the class definition for clarity and maintainability.
   - Example: `CPoint* m_cpoint_ptr1{ nullptr };`

3. **Commented Code**:
   - Clearly document the purpose of commented-out code and remove it if no longer needed.

========================
SUMMARY OF BAD PRACTICES
========================
1. **Uncommented Code**:
   - Avoid leaving commented-out code without explanation, as it can confuse maintainers.

2. **Uninitialized Variables**:
   - Avoid leaving member variables uninitialized, as it can lead to undefined behavior.

3. **Lack of Comments**:
   - Always document the purpose of constructors and member variables to improve code readability and maintainability.
*/
