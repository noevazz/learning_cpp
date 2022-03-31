#include <iostream>

using namespace std;

int main(void) {
   cout << " HEllO C++ WORLD!\n";
   return 0;
}

/*
Line 1:
    • This line is called preprocessor directive.
    As the name suggest, it is a separate part of the compiler
    who task is to pre-read the text of the program (iostream
    in this case) and make some modifications in it.

    • These operations are performed before (pre) the full
    processing (compilation) takes place.

    • The changes made by the preprocessor never modify the
    content of your source file in any way

    • iostream has already-made blocks (as an analaogy to
    construction) to write something on the screen. That block
    is called "cout"

    • Where is iostream located?, that's not our problem. The
    preprocessor where it is.

Line 3:
    • In programming, we cannot have variables, functions, etc
    with the same name. So to avoid those conflicts we use
    namespaces.
    For one namespace we can have one unique name and that same
    name can also be used in another namespace.
    (You can create namespaces)

    • “using namespace std” means we use the namespace named std.
    “std” is an abbreviation for standard. That means we use all
    the things with in “std” namespace.
    If we don’t want to use this line of code, we can use the
    things in this namespace like this. std::cout, std::endl.

    • If we try to use cout, endl in our code without specifying
    the namespace it will throw an error, because these are
    defined in the std namespace in the iostream.h file.

    • In the C++ language, all elements of the standard C++
    library are declared inside the std namespace. 

    More about namespaces: https://medium.com/breaktheloop/why-using-namespace-std-is-used-after-including-iostream-dc5ae45db652

Line 5 and Line 8
    • These two lines define the scope of a function called main.
    
    • All C++ must have a main function, it will be executed when
    you start the program
    
    • This function will return an integer (int) value at the
    end of its execution.
    
    • Protoype of a function:
        <return_type> name_of_the_func(arguments){return <value>}

    • This main function doesn't recieve arguments (void)

 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
| Firstly, note the semicolon at the end of the line. Each     |
| instruction (more precisely, each statement) in C++ must end |
| with a semicolon without it the program will be incorrect.   |
| You can split one statement into several lines, but bear in  |
| mind that readability (for humans) is a very important factor|
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

Line 6
    • cout block is used to write text to the screen (as indicated
    by the << digraph, which specifies the direction in which
    the text is sent).

    • Text is a sequece of characters (or digits) that are enclosed
    in parenthesis. Digits enclosed in parenthesis will be treat
    as text, you cannot do math operations with text.

    • endl is used to insert a new line (it also do something called
    flush but for now we only care about inserting a new line)

Line 7
    • return causes the end of function execution. If you perform
    return somewhere inside a function, this function immediately
    interrupts its execution.

    • The zero after the word return is a result of your function
    main. This is how your program tells the operating system the
    following: I did what I had to do, nothing prevented me from
    doing this, and everything is okay.

    • return 1;
        this would mean that something had gone wrong, it did not
        allow your program to be performed successfully and the
        operating system could use that information to react
        appropriately.   

*/