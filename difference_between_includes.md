The difference between `include<>` and `include""

1. `<header>` (angle brackets):
   This syntax is used for including system or standard library header files. The preprocessor searches for the header file in the standard system directories. These directories are specified by the compiler's configuration. For example, if you want to include the `<iostream>` header, you would use `<iostream>`.

2. `"header"` (double quotes):
   This syntax is used for including user-defined header files or files located in the current project directory. The preprocessor searches for the header file in the current directory first and then in the system directories if it is not found in the current directory. For example, if you have a header file named "myheader.h" in the current directory, you would use `"myheader.h"`.

In summary, the difference between `include<>` and `include""` is that angle brackets (`< >`) are used for standard library headers, while double quotes (`" "`) are used for user-defined or project-specific headers.
