#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
    Integer int
    Character char
    Boolean bool
    Floating Point float
    Double Floating Point double
    Valueless or Void Voic
    Wide Character whar_t

 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
        int x = 1;
        int myInt = 5;
        int B = 10;
        char myChar = 'd';
        char myGrade = 'A';
        char str = 'a';
        bool isMusicFun = true;
        bool isHotToday = true;
        bool amIYoung = false;
        double myDouble = 7.88;
        double newDouble = 18.66;
        double myDoubleNum = 1.88;
        float myFloat = 0.1f
        float hisFloat = 9.6f
        float theirFloat = 55.55f
        ignoreunused(x, myInt, B, myChar, myGrade, str, isMusicFun, isHotToday, amIYoung, myDouble, newDouble, myDoubleNum, myFloat, hisFloat, theirFloat)


3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
    int setVolume(int A, int B){ ignoreUnused( ); }
    void getAge(int firstDigit, int secondDigit){ ignoreUnused( ); }
    float setThreshold(int upper, int lower){ ignoreUnused( ); }
    double setFiltFreq(double freqHz){ ignoreUnused( ); }
    bool isFilt2Active(bool onFilt){ ignoreUnused( ); }
    int getLfoRate(int a = 80, int b = 90){ ignoreUnused( ); }
    char setFiltType(char BP, char LP, char HP){ ignoreUnused( ); }
    double getLfoFreq(double lfo1 double lfo2 ){ ignoreUnused( ); }
    void val1(bool a, bool b) { ignoreUnused( ); }

4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    int setVolume(int A, int B){ ignoreUnused( ); }
    void getAge(int firstDigit = 4, int secondDigit = 9 ){ ignoreUnused( ); }
    float setThreshold(int upper = 10.0f, int lower = 1.0f){ ignoreUnused( ); }
    double setFiltFreq(double freqHz = 333.5 ){ ignoreUnused( ); }
    bool isFilt2Active(bool onFilt = true){ ignoreUnused( ); }
    int getLfoRate(int a = 80, int b = 90){ ignoreUnused( ); }
    char setFiltType(char BP = 'B', char LP = 'L', char HP = 'H'){ ignoreUnused( ); }
    double getLfoFreq(double lfo1 = 1.0 double lfo2 = 1.0) ){ ignoreUnused( ); }
    void val1(bool a = true, bool b = false) { ignoreUnused( ); }

    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

    
    
   
    
    
    
/*
    1)i
 */
    int setVolume(int db)
    {
         ignoreUnused(db); 
         return {};
    }
/*
 2)
 */
    void getAge(int firstDigit, int secondDigit)
    {
        ignoreUnused(firstDigit, secondDigit);
        
     }
/*
 3)
 */
    float setThreshold(int upper, int lower)
    { 
        ignoreUnused(upper, lower );
        return {}; 
    }
/*
 4)
 */
    double setFiltFreq(double freqHz)
    {
         ignoreUnused(freqHz);
         return {};  
    }
/*
 5)
 */
    bool isFilt2Active(bool onFilt)
    {
         ignoreUnused(onFilt); 
         return {}; 
    }
/*
 6)
 */
    int getLfoRate(int a = 80, int b = 90)
    {
         ignoreUnused(a, b); 
         return {}; 
    }
/*
 7)
 */
    char setFiltType(char BP, char LP, char HP)
    {
         ignoreUnused(BP, LP, HP); 
         return {}; 
    }
    
/*
 8)
 */
    double getLfoDepth(double lfo1, double lfo2 )
    {
         ignoreUnused(lfo1, lfo2); 
         return {}; 
    }
    
/*
 9)
 */
    void val1(bool a, bool b) 
    {
         ignoreUnused(a, b); 
          
    }
/*
 10)
 */
    char signal1(int signA = 1, bool clear = false)
    {
         ignoreUnused(signA, clear); 
         return {}; 
    }
int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    setVolume(8);
    //2)
    getAge(4, 9);
    //3)
    auto getCompression = setThreshold(2, 9);
    //4)
    setFiltFreq(333.33);
    //5)
    isFilt2Active(true);
    //6)
    getLfoRate();
    //7)
    setFiltType('b', 'l', 'h');
    //8)
    getLfoDepth(3.5, 6.2);
    //9)
    val1(true, true) ;
    //10)
    signal1(2,true);
    ignoreUnused(setVolume, getAge, getCompression, setThreshold, setFiltFreq, isFilt2Active, getLfoRate, setFiltType, getLfoDepth, val1, signal1);
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
