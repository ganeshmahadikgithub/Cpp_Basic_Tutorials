// Namespace_Alias_Typedef.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

// Namespace declarations for demonstration
namespace NamespaceA
{
    void DisplayMessage()
    {
        std::cout << "Message from NamespaceA" << std::endl;
    }
}

namespace NamespaceB
{
    void DisplayMessage()
    {
        std::cout << "Message from NamespaceB" << std::endl;
    }
}

// Alias for NamespaceA
namespace AliasA = NamespaceA;

// Typedef for a custom type
typedef std::string StringAlias;

int main()
{
    // GOOD PRACTICE: Use namespace alias to simplify access to NamespaceA
    AliasA::DisplayMessage(); // Calls DisplayMessage from NamespaceA

    // GOOD PRACTICE: Use explicit namespace to avoid ambiguity
    NamespaceB::DisplayMessage(); // Calls DisplayMessage from NamespaceB

    // GOOD PRACTICE: Use typedef for better readability
    StringAlias message = "This is a typedef alias for std::string.";
    std::cout << message << std::endl;

    return 0;
}

/*
========================
SUMMARY OF GOOD PRACTICES
========================
1. **Namespace Aliases**:
   - Use namespace aliases to simplify access to long or frequently used namespaces.
   - Example: `namespace AliasA = NamespaceA;`

2. **Explicit Namespace Usage**:
   - Use explicit namespace qualifiers to avoid ambiguity when multiple namespaces have similar functions.
   - Example: `NamespaceB::DisplayMessage();`

3. **Typedefs**:
   - Use typedefs to create aliases for complex or frequently used types.
   - Example: `typedef std::string StringAlias;`

========================
SUMMARY OF BAD PRACTICES
========================
1. **Global Namespace Pollution**:
   - Avoid using `using namespace` at the global scope, as it can lead to name conflicts.

2. **Overuse of Typedefs**:
   - Avoid overusing typedefs for simple types, as it can reduce code clarity.

3. **Lack of Comments**:
   - Always document the purpose of namespace aliases and typedefs to improve code readability and maintainability.
*/