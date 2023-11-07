

// https://www.learncpp.com/
// 21.1


/*
    MAIN
        Name: 
			main.cpp
		Description:
			Main of project 
		Author:
			COD3M4ST3R
		Date:
			27.09.2023

    LOG
        27.09.2023:
            COD3M4ST3R -> File has been initialized	
*/



// SYSTEM INCLUDES
#include <iostream>
#include <cassert>
#include <cmath>
#include <string_view>
#include <memory>
#include <compare>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
#include <ctime>
#include <iomanip>

// INTERNAL INCLUDES
#include "static/MyLibrary.hpp"
#include "dynamic/Sort.hpp"
#include "headerOnly/MyLibrary3.hpp"

// EXTERNAL INCLUDES
//#include <opencv2/core.hpp>
//#include <boost/algorithm/algorithm.hpp>


class Polymorphism
{
    public:
        /* FUNCTION OVERLOADING
        Advantages:
            Type Safety -> Ensures strict type matching by defining separate overloads for different argument types.
            Readability -> Clear function names reflect the expected paramter types, enhancing code readability.
            Compile-Time Checking -> Type-related errors are caught at compile time, leading to robust code.
            Maintanence -> Easier to maintain and understand in larger codebases.
        
        Disadvantages:
            Code Duplication -> May result in code duplication when implementing similiar functionality for different types.
            Limited Flexibility -> Requires explicity defined overloads for each supported type.
        */
        int add(int val, int val2)
        {
            return(val + val2);
        }

        double add(double val, double val2)
        {
            return(val + val2);
        }


        /* TEMPLATES
        Advantages:
            Type Flexibility -> Enables code that works with multiple types while preserving strong compile-time type checking.
            Generic Code -> Ideal for creating generic algorithms, data structures and functions.
            Reduces Code Bloat -> Generates code at compile time, reducing binary size when used with many types.
            Conciseness -> Can lead to more concise and expressive code in generic contexts.

        Disadvantages:
            Complexity -> Template code can be complex, expecially in metaprogramming scenarios.
            Template Errors -> Template errors can be challenging to decipher, making debugging difficult.
            Compilation Time -> Heavy use of templates can increase compilation times significantly.
        */
        template <typename T, typename U>
        auto max(T x, U y) // auto keyword here, solves the 'narrowing conversion' issue
        {
            return (x < y) ? y : x; // if condition is true then process after '?', if not then process ':'
        }

        /* AUTO FUNCTION
        Advantages:
            Flexibility -> Allows functions to work with a wide range of argument types, promoting generic and flexible code.
            Conciseness -> Simpifies code when the type is evident from the initializer.
            Reduced Code Duplication -> Reduces code duplication when implementing similiar operations for various types.
        
        Disadvantages:
            Loss of Type Safety -> Gives up some compile time safety as any type can be passed
            Ambiguity -> May introduce ambiguity if the function can accept multiple argument types.
            Readability -> Can make code less self documenting; may require additional comments.
            Maintainability -> In larger codebases, code may be harder to maintain without explicit type information.
            API Design -> May lead to less intuitive or user friendly APIs when used in public interfaces.
            Runtime Errors -> Type related issues may only be discovered at runtime, potentially causing unexpected behavior or crashes.
        */
        /*
        auto add(auto val, auto val2)
        {
            return(val + val2);
        } 
        */
};


/*
class SimpleClassUsesStack // Does not require RAII - manual memory management. Since it is a simple class and does not use resources that would require
// destructor such as db connection, file handling or other external resources.
{
    private: // any element under private can not be reachable only from within the class itself.
        std::string m_id;
    
    protected: // any element under protected can be only reachable from within the class itself and subclasses
        std::string m_address;

    public: // can be reachable from anywhere, usually used for to provide an interface.
        // Default constructor
        explicit SimpleClassUsesStack(
           const std::string& p_address = "NaN",
           const std::string& p_id = "NaN") // Elements of default constructor that has a default values, must be initialized at the end.
           :
           m_address(p_address),
           m_id(p_id){
        }

        void set_id(const std::string& p_id)
        {
            m_id = p_id;
        }

        const std::string& get_id() const // const: with that, returned element can not be modified. Promises to not to modify. Can be only usable by member functions
        {
            return m_id;
        }
};

class ComplexClassUsesHeap
{
    private:
        int *m_data;
        size_t m_dataSize;

    public:
        static const std::string m_description; // static variable inside the class means that this variable can be reachable from
        // outside of the class without requiring an object. e.g: ComplexClassUsesHeap::m_description

        explicit ComplexClassUsesHeap(
            size_t p_size)
            :
            m_data(new int[p_size]),
            m_dataSize(p_size){
                std::cout << "ComplexClassUsesHeap has been created." << std::endl;
            }
        
        ~ComplexClassUsesHeap()
        {
            delete []m_data;
            std::cout << "ComplexClassUsesHeap has been destroyed." << std::endl;
        }
};

class MemoryAndVariables
{
    public:
        void printByValue(int param)
        {
            std::cout << param << std::endl;
        }

        void printByReference(int& param) // Any changes has been made to reference, will also change the original element. To prevent this. To prevent this: void printByReference(const std::string &param) can be usable.
        // There can not be a reference of an array
        // References can not be null
        // References can not be reassigned
        // References don't allow you to manage memory allocated from the heap
        {
            std::cout << param << std::endl;
        }

        // Pointers can get reassigned while references are cannot while pointers can cause of a memory leak. Pointers are more effective but they need to be used with more caution than references
        void printByAddress(int* param) // Receives the address of the reference.
        {
            std::cout << *param << std::endl; // Uses dereferencing to reach the vaue.
        }
};
*/


/*
class Human
{
    private:
        std::string_view name;
        
    public:
        explicit Human(
            const std::string_view& p_name) :
            name(p_name)
            {
                std::cout << "Default Constructor" << std::endl;
            }
        
        Human(Human&& other) noexcept : name(std::move(other.name))
        {
            std::cout << "Move Constructor" << std::endl;
        }
    
        void set_name(const std::string_view& name)
        {
            //(*this).name = name;
            this->name = name;
        }
        
        const std::string_view& get_name() const 
        {
            return name;
        }
};
*/

/* 
    When you use protected like this: class Me : protected Human, 
    all public members of the base class (Human) become protected members 
    in the derived class (Me). This means that you can access these members 
    from within the derived class, but they are no longer directly accessible 
    from objects of the derived class.
*/
/*
class Me : private Human
{
    private:
        short int age;
        std::string_view department;
        
    public:
        Me(
            const short int& p_age,
            const std::string_view& p_department,
            const std::string_view& p_name) :
            Human(p_name),
            age(p_age),
            department(p_department)
            {
                std::cout << "Default Constructor" << std::endl;    
            }
            
        Me(Me&& other) noexcept : 
            Human(std::move(other.get_name())),
            age(std::move(other.age)),
            department(std::move(other.department))
            {
                std::cout << "Move Constructor" << std::endl;
            }
};
*/


/*
enum class EmergencyLevel
{
    Low,
    Medium,
    High,
    Critical,
    Fatal
};

struct Coordinates
{
    double x;
    double y;
    double z;
    time_t timestamp;
};

class Message
{
private:
    int64_t hash;
    short int channel;
    std::string_view header;
    std::string_view payload;
    Coordinates coordinates;

public:
    explicit Message(const int64_t& p_hash,
                     const short int& p_channel,
                     const std::string_view& p_header,
                     const std::string_view& p_payload,
                     const Coordinates& p_coordinates) :
        hash(p_hash),
        channel(p_channel),
        header(p_header),
        payload(p_payload),
        coordinates(p_coordinates) {}

    // Move Constructor
    Message(Message&& other) noexcept :
        hash(std::move(other.hash)),
        channel(std::move(other.channel)),
        header(std::move(other.header)),
        payload(std::move(other.payload)),
        coordinates(std::move(other.coordinates)) {}

    virtual void display() const
    {
        std::cout << "--- INCOMING MESSAGE! ---" << std::endl << std::endl;
        displayCoordinates();
        displayDetails();
        displayMessageContents();
        std::cout << "xxx END MESSAGE xxx" << std::endl;
    }

    void set_hash(const int64_t& hash)
    {
        this->hash = hash;
    }

    const int64_t& get_hash() const
    {
        return hash;
    }

    void set_channel(const short int& channel)
    {
        this->channel = channel;
    }

    const short int& get_channel() const
    {
        return channel;
    }

    void set_header(const std::string_view& header)
    {
        this->header = header;
    }

    const std::string_view& get_header() const
    {
        return header;
    }

    void set_payload(const std::string_view& payload)
    {
        this->payload = payload;
    }

    const std::string_view& get_payload() const
    {
        return payload;
    }

    void set_coordinates(const Coordinates& coordinates)
    {
        this->coordinates = coordinates;
    }

    const Coordinates& get_coordinates() const
    {
        return coordinates;
    }

    void displayCoordinates() const
    {
        std::cout << "Coordinates" << std::endl;
        std::cout << "-----------------------------------------------------" << std::endl;
        std::cout << std::left << std::setw(15) << "Timestamp" << std::setw(15) << "x" << std::setw(15) << "y" << std::setw(15) << "z" << std::endl;
        std::cout << std::left << std::setw(15) << coordinates.timestamp << std::setw(15) << coordinates.x << std::setw(15) << coordinates.y << std::setw(15) << coordinates.z << std::endl;
        std::cout << std::endl;
    }

    void displayDetails() const
    {
        std::cout << "Details" << std::endl;
        std::cout << "-----------------------------------------------------" << std::endl;
        std::cout << std::left << std::setw(30) << "Hash" << std::setw(15) << "Channel" << std::endl;
        std::cout << std::left << std::setw(30) << get_hash() << std::setw(15) << get_channel() << std::endl;
        std::cout << std::endl;
    }

    void displayMessageContents() const
    {
        std::cout << "Message" << std::endl;
        std::cout << "-----------------------------------------------------" << std::endl;
        std::cout << get_header() << std::endl;
        std::cout << ">>>" << std::endl;
        std::cout << get_payload() << std::endl;
    }
};

class EmergencyMessage : private Message
{
private:
    EmergencyLevel emergencyLevel;

public:
    explicit EmergencyMessage(const EmergencyLevel& p_emergencyLevel,
                             const int64_t& p_hash,
                             const std::string_view& p_header,
                             const std::string_view& p_payload,
                             const Coordinates& p_coordinates,
                             const short int& p_channel = 0) :
        emergencyLevel(p_emergencyLevel),
        Message(p_hash, p_channel, p_header, p_payload, p_coordinates) {}

    EmergencyMessage(EmergencyMessage&& other) noexcept :
        emergencyLevel(std::move(other.emergencyLevel)),
        Message(std::move(other)) {}

    void display() const override
    {
        std::cout << "--- INCOMING EMERGENCY MESSAGE! ---" << std::endl << std::endl;
        displayCoordinates();
        displayDetails();
        displayMessageContents();
        std::cout << "Emergency Level: " << static_cast<std::underlying_type_t<EmergencyLevel>>(get_emergencyLevel()) << std::endl;
        std::cout << "xxx END MESSAGE xxx" << std::endl;
    }

    void set_emergencyLevel(const EmergencyLevel& emergencyLevel)
    {
        this->emergencyLevel = emergencyLevel;
    }

    const EmergencyLevel& get_emergencyLevel() const
    {
        return emergencyLevel;
    }
};

template<typename T>
inline void displayMessage(const T& message)
{
    message.display();
}
*/



/* STRUCT WITH ANOTHER STRUCT AS ALIAS
template <typename T>
struct Pair
{
    T first;
    T second;
};

template <typename T>
using Coord = Pair<T>;

template <typename T> 
void print(const Coord<T> &coord)
{
    std::cout << coord.first << std::endl;
}
*/



/* STRUCT WITH TEMPLATE AND SMART POINTERS*/
/*
template <typename T>
struct MyStruct
{
    T first;
    T second;
};

template <typename T>
void printData(const std::unique_ptr<MyStruct<T>> &mypointer) 
{
    std::cout << "First: " << (*mypointer).first << std::endl;
    std::cout << "Second: " << mypointer->second << std::endl;
}
*/



/*
void greet(std::string *name = nullptr)
{
    std::cout << "Hello ";
    std::cout <<(name ? *name : "guest") << std::endl;
}
*/



/* Passing an array with a reference
template <typename T, auto N>
void passByRef(const std::array<T, N> &myarray)
{
    std::cout << myarray[0] << std::endl;
}
*/



/* PASSING AN ARRAY OR VECTOR TO FUNCTIONS
pointer usage
*/
/*
void modifyArrayWithPointer(const short int (*const mypointer))
{
    // TODO NotImplementedYet
    std::cout << mypointer[1] << std::endl;
}
*/



/* smart pointer usage
void modifyArrayWithPointer(std::unique_ptr<std::vector<short int>> &mypointer)
{
    std::cout << mypointer->at(1) << std::endl;
}
*/



/* A GREAT EXAMPLE OF TEMPLATES, SMART POINTERS AND ITERATORS
*/
/*
template <typename T>
inline void data_displayer(std::unique_ptr<std::vector<T>> &dataContainer) // takes the reference of the smart pointer that points the type T vector
{   // inline is a keyword for functions. When it is explicitly defined, translator puts the code to caller block instead of creating a function call so performance can be increased.
    // This is automatically done by compiler generally
    // inline is only makes sense when you use it for the function that completes a relatively trivial tasks
    for(const T &data : *dataContainer) // reference data here prevents creating a copy for each element in the dataContainer, * there before dataContainer is dereferencing to reach the element which pointer points.
    {
        std::cout << data << std::endl;
    }    
}
*/



/* STRUCT EXAMPLE
*/
/*
struct Person
{
    std::string_view name;
    int age;

    Person(const std::string_view p_name,
           const int p_age)
           :
           name(p_name),
           age(p_age){}
};
*/


/* STD::FUNCTION 

std::function is a C++ feature that provides a type-erased, polymorphic function wrapper, 
allowing you to store and invoke callable objects with different types and signatures.
*/
/*
class GameEvent
{
    public:
        using CallbackFunction = std::function<void()>; // created new type as 'CallbackFunction' as a type of std::function<void()>

        void RegisterCallback(const std::string &eventName, CallbackFunction callback) // callback here is a function that we defined it's type already
        {
            callbacks[eventName].push_back(callback);
        }

        void TriggerEvent(const std::string &eventName)
        {
            if(callbacks.contains(eventName))
            {
                std::cout << "Event Occured: " << eventName << std::endl;
                for(const auto &callback : callbacks[eventName])
                {
                    callback();
                }
            }
            else
            {
                std::cout << "Event Not Found!" << std::endl;
            }
        }

    private:
        std::map<std::string, std::vector<CallbackFunction>> callbacks; // this is a map that holds the 'eventNames' and 'CallbackFunctions' inside of a vector named as 'callbacks'
};

void OnPlayerPickedUpItem()
{
    std::cout << "Player picked up an item." << std::endl;
}

void OnPlayerDamaged() 
{
    std::cout << "Player has been damaged." << std::endl;
}
*/

/*
template <typename T, typename K>
static const auto max(const T &operand1, const K &operand2) 
{
    return (operand1 > operand2) ? operand1 : operand2;
}
*/


/* MOVE SEMANTICS
*/
/*
class MyClass
{
    public:
        // Default Constructor
        explicit MyClass(std::string_view p_data) : m_data(p_data)
        {
            std::cout << "Constructor: " << m_data << std::endl;
        }

        // Move Constructor
        MyClass(MyClass&& other) noexcept : m_data(std::move(other.m_data))
        {
            std::cout << "Move Constructor: " << m_data << std::endl;
        } 

        const std::string_view& getData() const 
        {
            return m_data;
        }

    private:
        std::string_view m_data;
};
*/

// TODO: More Semantic Example . . .
/*
class MyClass
{
    public:
        // Default Constructor
        explicit MyClass(const std::string& p_data) : m_data(p_data)
        {
            std::cout << "Default Constructor: " << m_data << std::endl;
        }

        // Move Constructor
        MyClass(MyClass&& other) noexcept : m_data(std::move(other.m_data))
        {
            std::cout << "Move Constructor. " << other.m_data << std::endl;
        }

        // Setters & Getters
        void set_m_data(const std::string &p_data)
        {
            m_data = p_data;
        }

        const std::string& get_m_data() const 
        {
            return m_data;
        }

    private:
        std::string m_data;
};
*/



/*
    ABSTRACT AND INTERFACE
*/
/*
    - A pure abstract class is typically an abstract base class that contains
    one or more pure virtual functions. (functions with '=0' in their declarations)

    - It may also include non-virtual member functions, member variables and constructors.

    - You can have a mix of virtual and non-virtual member functions in pure abstract class.

    - Pure abstract classes are often used when you want to provide some common functionality,
      and enforce certain methods in derived classes.
*/
/*
class AbstractClass
{
    public:
        virtual void pureVirtualFunction() = 0;

        void nonVirtualFunction()
        {

        }
};
*/

/*
    - An interface class is a class that contains only pure virtual functions (no member variables
      or non-virtual member functions).

    - It defines a strict contract for derived classes, ensuring that they provide implementations
      for all the methods specified in the interface.

    - Interface classes are often use when you want to define a pure interface with no common
      implementation.
*/
/*
class InterfaceClass
{
    public:
        virtual void method1() = 0;
        virtual void method2() = 0;
};
*/



/*  STATIC VS DYNAMIC CASTING

    static_cast is a compile-time cast, meaning it performs the cast at compile time without
    runtime checks.
    dynamic_cast is a run-time cast, that performs type checking and is safer in situations
    where you are not certain about the actual type of the object.

    - Type Safety:
        static_cast does not provide runtime type checking.
        dynamic_cast does check type. It is especially created for polymorphism where safety is
        important.
    
    - Performance:  
        static_cast is faster than dynamic_cast.
*/



int main(int argc, char* argv[])
{   
    std::cout << ". . ." << std::endl;


    /* CMAKE
    // Static Library
    MyLibrary::MyClass myObject;
    myObject.MyFunction();

    // Dynamic Library
    Sort::Algorithms sortAlgorithms;
    sortAlgorithms.Quick();

    // HeaderOnly Library
    MyLibrary3::MyClass myObject3;
    myObject3.MyFunction();



    // Compile Flags
    #ifndef EX
        std::cout << "Compile Flag EX" << std::endl;
    #endif

    #ifndef EX2
        std::cout << "Compile Flag EX2" << std::endl;
    #endif
    */
   


    /* LAMBDA EXPRESSIONS
    Concise, inline and anonymous functions that can be defined an sed on the spot for specific tasks
    */
    /*

    short int age = 23;
    auto add = [&age](const int operand1, const int operand2) -> int
    {
        return (operand1 + operand2 + age);
    };
    */



    /*
    std::unique_ptr<Me> me = std::make_unique<Me>(
        "Male",
        "Frankfurt, GERMANY", 
        "Nadir Suhan ILTER",
        "suhan.website", 
        "Computer Engineer", 
        std::vector<std::string>{"Deep Learning", "Rockets", "Back-End", "Algorithms"}, 
        std::vector<std::string>{"Everything, just understand that people can learn; when they know what they need to learn."},
        std::vector<std::string>{"C", "C++", "C#", "Java", "Python", "BashScript", "R"}
    );
    */



    /* STD::FUNCTIONS USAGE
    */
    /*
    GameEvent gameEvent;
    // Register callback functions for game events
    gameEvent.RegisterCallback("PickedUpItem", OnPlayerPickedUpItem);
    gameEvent.RegisterCallback("PlayerDamaged", OnPlayerDamaged);
    // Simulate game events
    gameEvent.TriggerEvent("PickedUpItem");
    gameEvent.TriggerEvent("PlayerDamaged");
    /*





    /* A GREAT EXAMPLE OF TEMPLATES, SMART POINTERS AND ITERATORS*/
    /*
    std::unique_ptr<std::vector<short int>> mydataContainer = std::make_unique<std::vector<short int>>();
    std::unique_ptr<std::vector<std::string_view>> mydataContainer2 = std::make_unique<std::vector<std::string_view>>();
    (*mydataContainer).push_back(120);
    mydataContainer->push_back(100);
    (*mydataContainer2).push_back("This is first string view.");
    mydataContainer2->push_back("This is second string view.");
    data_displayer(mydataContainer);
    data_displayer(mydataContainer2);
    */



    /* REFERENCE WRAPPERS
    It provides a way to create objects that behave like references but are copyable and
    can be used in contexts where standart references T& can not. Cost performance and makes
    things bit more complicated but makes you able to copy references.
    */
    /*
    std::vector<Person> people = {
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 35},
        {"David", 40}
    };
    
    std::vector<std::reference_wrapper<int>> ages; // std::vector<int> ages;
    for(Person& person : people)
    {
        ages.push_back(std::ref(person.age));
    }

    auto youngestAge = *std::min_element(ages.begin(), ages.end());
    youngestAge += 1;

    for (const Person& person : people) {
        std::cout << person.name << " is " << person.age << " years old." << std::endl;
    }
    */



    /* PASSING AN ARRAY OR VECTOR TO FUNCTIONS
    */
    /* Using Pointer
    const short int myarray[5] = { 0, 1, 2, 3, 4 };
    const short int (*const mypointer) = myarray;
    modifyArrayWithPointer(mypointer);
    */ 



    /* Smart pointer for vector
    std::unique_ptr<std::vector<short int>> mypointer = std::make_unique<std::vector<short int>>();
    mypointer->push_back(1);
    mypointer->push_back(2);
    modifyArrayWithPointer(mypointer);
    */



    /* PASSING POINTER OF STRUCT TO FUNCTION*/
    /*
    std::unique_ptr<MyStruct<std::string>> mypointer = std::make_unique<MyStruct<std::string>>("this is first", "this is second");
    printData(mypointer);
    */
    


    /*
    const MyStruct<std::string> mystruct = { "this is first", "this is second" };
    const MyStruct<std::string> *ptr = &mystruct;
    print(ptr);
    std::cout << Max(34.5, 384.3434) << std::endl;
    Me me("this is an address", "53x9432");
    std::cout << me.get_id() << std::endl;
    std::cout << max<int>(1, 2) << '\n';    // instantiates and calls function max<int>(int, int)
    std::cout << max<int>(4, 3) << '\n';    // calls already instantiated function max<int>(int, int)
    std::cout << max<double>(1, 2) << '\n'; // instantiates and calls function max<double>(double, double)
    ComplexClassUsesHeap complexClassUsesHeap(100);
    */


    // CPP
    /* TYPEDEF
        You can define or redefine the type that already has been
        defined.
    */
    // typedef int mydef; // Define 'mydef' as an integer definition here.
    // mydef var = 5; // test is a type of 'mydef' which is defined as 'int'.



    /* AUTO
        Automatically gets its type that you don't have to define. Prevents
        narrowing conversion problem. 
    */
    // int var = 12;
    // float var2 = 5.65;
    // auto result = var + var2;



    /* MOVE SEMANTICS USAGE
    */
    /*
    MyClass source("Greetings");
    MyClass destination(std::move(source));

    MyClass src = MyClass("Greetings");
    MyClass dst = MyClass(std::move(src));

    std::cout << "Source: " << source.getData() << std::endl;
    std::cout << "Destination: " << destination.getData() << std::endl;
    */



    /* REFERENCES (Light-weight purposes)
        Use references when you want lightweight access to an object without ownership management.

            - Reaching and Displaying Elements
                When you want to access and display the value of an element, using references for reac-only access is efficient.

            - Function Parameters
                Passing parameters to functions is a common use case for references. You can use 'const' references to avoid
                unnecessary copies when passing.
            
            - Iteration
                When you need to iterate over elements in a container and don't want to modify them, references provide efficient,
                read-only access.
            
            - Aliasing
                Creating an alias for an object, where multiple names refer to the same data. This can be useful for convenience and
                readability.

            - Short-Lived Access
                When the lifetime of the accessed data is well-defined and does not exceed the lifetime of the reference.
    */
    /*
    int var = 10;
    int &ref = var;
    std::cout << ref << std::endl;
    */

    /* SMART POINTERS (Mid-weight purposes)
        Use smart pointers when you need ownership management and resource cleanup.

            - Dynamic Memory Allocation
                When you allocate objects on the heap and need to ensure their proper deallocation, use 'std::shared_ptr' for shared ownership or
                'std::unique_ptr' for exclusive ownership.
            
            - Resource Management
                Managing resources such as file handles, network connections or custom resources. Smart pointers with custom deleters can help 
                with resource cleanup.

            - Lifetime Extension
                Extending the lifetime of an object beyond the current scope or across multiple parts of your program. 'std::shared_ptr' is useful
                for shared ownership in such cases.

            - Ownership Transfer
                When you need to transfer ownership of an object from one part of your programme to another, smart pointers provides a clean way to do this.

            - Nullability
                If you need to represent the absence of an object, smart pointers ca be configured to represent null.
    */
    /*
    std::unique_ptr<SimpleClassUsesStack> mypointer = std::make_unique<SimpleClassUsesStack>("test", "test");
    std::cout << mypointer -> get_id() << std::endl;    
    */

    /* MOVE SEMANTICS (Heavy-weight purposes)
        Use move semantics when you need to transfer ownership or resources efficiently. Move Constructor have to be defined. Move operator(&&) takes
        the casted element into process. std::move casts 'l-value' to 'r-value', therefore we can move the ownership of the object without copying it
        all over again. l-value(locator value): left side of the assignment, r-value(pure right value): right side of the assignment.

            - Resource-Intensive Operations
                Operations involving resource-heavy objects like file handling, database connections or large data structures.

            - Avoid Unneccary Copies
                When you want to avoid unnecessary copying of the data, move semantics allow you to transfer ownership instead of copying.

            - Move-Only Types
                For the types that are move-only and don't support copying. Some types, like 'std::unique_ptr' can be only moved.

            - Optimizing Performance
                In situations where copying is expensive and you need to optimize performance, move semantics provide a way to achieve
                this efficiently.

            - Ownership Transfer
                When you want to transfer ownership from one object to another while efficiently managing the resource associated with the
                object.
    */
    /*
    class MyClass
    {
        public:
            explicit MyClass(const std::string_view str) : data(std::move(str))
            {
                std::cout << "Constructor: " << data << std::endl;
            }

            explicit MyClass(Myclass &&other) noexcept : data(std::move(other.data))
            {
                std::cout << "Move Constructor: " << data << std::endl;
            }
    }
    */




    /* POINTER
    */
    // int var = 10;
    // int *ptr = &var;
    // std::cout << *ptr << std::endl;

    // int var = 10;
    // printByValue(var);
    // printByReference(var);
    // printByAddress(&var); // points the address of the reference



    /* PASS BY ADDRESS OPTIONAL ARGUMENTS
    */
    /*
    greet();
    std::string name = "Suhan";
    greet(&name);
    */



    /* ENUMURATIONS
    enum class Day
    {
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday  
    };

    Day today = Day::Wednesday;

    if(today == Day::Wednesday)
    {
        std::cout << "today is Wednesday" << std::endl;
    }
    */



    /* STRUCTS
    */
    /*
    struct Employee
    {
        int id;
        int age;
        double wage;
    };

    Employee suhan;
    suhan.age = 12;
    Employee meng = {1, 12, 180000.00};
    std::cout << meng.wage << std::endl;
    */



    /* STRING VIEW
    It does not hold any memory unlike std::string. It is much lightweight. It is only read-only so you can not modify
    its values.   
    */
    /*
    // std::string_view mystring = "test";
    // std::cout << mystring << std::endl;
    */



    /* CONST
    const variables values can not be changed after they have been assigned.
    */
    /*
    const int = 5;
    */



    /* CONSTEXPR
    constexpr variables values can not be changed after they have been assigned. Also those values get calculated 
    during compiling instead of run-time.
    */
    /*
    constexpr int num = 5;
    */



    /* SHORT
    Integer but holds and provides less space. Only from -32767 to 32767 with 16 bit = 2 byte
    */
    /*
    short myvariable = 32767;
    */



    /* INT
    Normal integer, 32 bit = 4 bytes. Approximately from -2,147,483,648 to 2,147,483,647
    int myvariable = 2147483647;
    */



    /* LONG
    Integer  32 bit = 4 bytes or 64 bit = 8 byte
    long myvariable = 9223372036854775807;
    */



    /* FIXED INT
    No matter what value you keep, these keywords assures that they hold some certain amount of space in memory
    #include <cstdint>
    int32_t myvariable = 2147483647; // guaranteed 32 bit integer
    int64_t myvariable = 9223372036854775807; // guaranteed 64 bit integer
    */



    /* STATIC CAST
    Explicit type conversion
    */
    /*
    double pi = 3.14159265359;
    int piss = static_cast<int>(pi);
    */



    /* REFERENCE AND POINTER FOR CLASS OBJECT
    */
    /*
    SimpleClassUsesStack simpleClassUsesStack;
    SimpleClassUsesStack *ptr = &simpleClassUsesStack;
    std::cout << ptr -> get_id() << std::endl;
    std::cout << (*ptr).get_id() << std::endl; 
    */



    /* SMART POINTERS
    Automatically manages the memory and the lifespan of the pointer regarding its scope.
    */
    /*
    std::unique_ptr<SimpleClassUsesStack> mypointer = std::make_unique<SimpleClassUsesStack>("test", "test");
    std::cout << mypointer -> get_id() << std::endl;    
    */



    /* INITIALIZER_LIST
    If we have fixed set of values, for the read-only purposed, we can use std::initializer_list instead of std::vector
    to make things more lightweight
    */
    /*
    const std::initializer_list<const short int> mylist = { 0, 1, 2, 3, 4, 5, 6, 7 };

    for(const short int& element : mylist)
    {
        std::cout << element << std::endl;
    }
    */


    /*
    const Coord<std::string> coord = { "first pair", "second pair" };
    print(coord);
    */



    /* SPACESHIP COMPARISION CXX20++
    Well, someone wanted to contribute I guess.
    */
    /*
    int a = 5, b = 12;
    auto result = a <=> b;

    if( result == 0 )
    {
        std::cout << "a is equal to b" << std::endl;
    }

    else if( result < 0 )
    {
        std::cout << "a is smaller than b" << std::endl;
    }

    else
    {
        std::cout << "a is bigger than b" << std::endl;
    }
    */



    /* STATIC KEYWORD
        Static Variables (Inside the Functions): It makes variable persist across from different function calls. Doesn't get
        initialized again, means protects its value even though called from somewhere else at different time

            void myfunction()
            {
                static int mycounter = 0;
                mycounter++; // stays on the last value even though if getting called from somewhere else later.
            }


        Static Variables (Inside the Classes and Structs): Makes variable exist in class level instead of instance level. Means
        that you can reach that variable without using object to reach over it. e.g. ClassName::variable

            class Myclass
            {
                public:
                    static int myvar = 5; // Myclass::myvar
            };


        Static Variables (Outside of Functions and Classes and Structs - Global Scope): Makes it unvisible from translator, so
        it kind of becomes private and unacessible from the other source files. 

            static int myvar = 5;
        

        Static Functions (Inside the Classes and Structs): Makes function callable without requiring an object. But they can not
        reach other class variables or functions unless they are also static too.

            class Myclass
            {
                public:
                   static void myfunc() // Myclass::myfunc()
                    {
                        . . .
                    }
            };
    */


    // SATELLITE MESSAGE
    /*
    Coordinates coordinates;
    coordinates.x = 56.535;
    coordinates.y = 34.343;
    coordinates.z = 17.553;
    coordinates.timestamp = std::time(nullptr);
    
    Message normalMessage(12345, 7, "Normal Message", "This is a normal message.", coordinates);
    EmergencyMessage emergencyMessage(EmergencyLevel::Critical, 54321, "Emergency Message", "This is an emergency message.", coordinates);

    displayMessage(normalMessage);
    displayMessage(emergencyMessage);
    */


    return 0;
}























