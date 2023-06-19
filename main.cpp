#include <iostream>

template <typename... T> 
void ignoreUnused(T &&...) {}

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free
functions. This will be the first project where the code you write will be
compiled and you will be responsible for making sure it compiles before
submitting it for review.


 1) Write down the names of the 6 major primitive types available in C++  here:


1. int
2. float
3. double
4. bool
5. unsigned
6. char


2) for each primitive type, write out 3 variable declarations inside the
variableDeclaration() function on line 59. a) give each variable declaration an
initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type
'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of
type 'void'. b) at the end of the function, call ignoreUnused once and pass all
of your variables to it. see line 71 for an example

3) Declare 10 free functions
    each declaration should have a random number of parameters in the function
parameter list. When naming your parameters, choose names that are relevant to
the task implied by the function's name. remember: Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing
semicolon 5) pass each of your function parameters to the ignoreUnused function
like you did in b) 6) if your function returns something other than void, add
'return { };' at the end of it. 7) provide default values for an arbitrary
number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the
formatting of your 10 functions.  At this point, you might have something that
looks like this: float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar );
return { }; } This does not conform with the coding standard for this course
(check the Readme.MD) and needs to be corrected

9) in the main function at the end:
    for each of those functions declared,
        a) write out how the function would look if called with correct
arguments b) if the function returned anything, store it in a local variable via
the 'auto' keyword. c) pass the local variables to ignoreUnused() as you did in
2b) see main() for an example of this.

10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

// 2)
void variableDeclarations() 
{
    // example:
    int number =
            2; // declaration of a variable named "number", that uses the primitive
    // type 'int', and the variable's initial value is '2'
    int num1{1};
    int num2{2};
    int num3{3};
    float floatA{1.00f};
    float floatB{2.00f};
    float floatC{3.00f};
    double double1{1.0};
    double double2{2.0};
    double double3{3.0};
    char char1{'1'};
    char char2{'2'};
    char char3{'3'};
    bool bool1{true};
    bool bool2{false};
    bool bool3{true};
    unsigned unsigned1{1000001U};
    unsigned unsigned2{1000002U};
    unsigned unsigned3{1000003U};

    ignoreUnused(num1, num2, num3, floatA, floatB, floatC, double1, double2,
                 double3, char1, char2, char3, bool1, bool2, bool3, unsigned1,
                 unsigned2, unsigned3);
    ignoreUnused(
            number); // passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
// function declaration with random number of arguments, arbitrary number of arguments have default value
bool rentACar(int rentalDuration, int carType = 0) 
{
    ignoreUnused(rentalDuration, carType); // passing each function parameter to
    // the ignoreUnused() function
    return {}; // if your function returns something other than void, add 'return
    // {};' at the end of it.
}

/*
 1)
 */
int executeInstructions(int numInstructions = 0) 
{
    ignoreUnused(numInstructions);
    return {};
}
/*
 2)
 */
int maxElement(int elem1, int elem2, int elem3 = 5) 
{
    ignoreUnused(elem1, elem2, elem3);
    return {};
}
/*
 3)
 */
bool validColor(float red, float green, float blue, float alpha = 1.0f) 
{
    ignoreUnused(red, green, blue, alpha);
    return {};
}
/*
 4)
 */
bool isValid(int x, int y) 
{
    ignoreUnused(x, y);
    return {};
}

/*
 5) void functions should have side effects or they do nothing.
 */
void wasteTime(unsigned milliseconds) 
{ 
    ignoreUnused(milliseconds);
}

/*
 6)
 */
char convertToUppercase(char letter = 'a') 
{
    ignoreUnused(letter);
    return {};
}

/*
 7)
 */
bool greater(int a, int b) 
{
    ignoreUnused(a, b);
    return {};
}

/*
 8)
 */
void movePlayer(int xOffset = 0, int yOffset = 0) 
{
    ignoreUnused(xOffset, yOffset);
}

/*
 9)
 */
void appendToSomeList(int elem = 0) 
{ 
    ignoreUnused(elem); 
}

/*
 10)
 */
double addFive(double a = 0.0) 
{
    ignoreUnused(a);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main() {
    // example of calling that function, storing the value, and passing it to
    // ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2);

    // 1)
    auto cycles = executeInstructions(1);
    // 2)
    auto max = maxElement(1, 2, 3);
    // 3)
    auto canSelectColor = validColor(123.f, 123.f, 122.f);
    // 4)
    auto canPlaceHere = isValid(3, 4);
    // 5)
    wasteTime(388U);
    // 6)
    auto uppercaseLetter = convertToUppercase('b');
    // 7)
    auto isGreater = greater(3, 5);
    // 8)
    movePlayer(16, 32);
    // 9)
    appendToSomeList(31);
    // 10)
    auto sum = addFive(3.3);

    ignoreUnused(carRented, cycles, max, canSelectColor, canPlaceHere,
                 uppercaseLetter, isGreater, sum);
    std::cout << "good to go" << std::endl;
    return 0;
}
