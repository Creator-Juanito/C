# UNIT CONVERTER

### Introduction
In this activity a functional, useful and practical program (code) will be carried out, using the different learning, information, knowledge and skills learned during the semester, this activity being our PIA, in my case as a project I made a calculator of "unit converter ”. In this report, we will explain the functions that this program can have, its characteristics and its structure.
***Link to the program execution video: https://youtu.be/6qcZ2ekmYEE***

### Function
The system of units helps us measure the various physical quantities, such as force, mass, time, area, speed, volume, length, temperature, among others.
In the everyday world, different metric and unit measurement systems are used, the importance of unit conversion is that we can all understand the physical quantities being expressed in our system of units or in the system that we need and require. So it is very important. We, who are students and aspiring engineers, will carry out many exercises and calculations in which we will need to make a conversion of a unit, so I think that this program, for all people but especially for us, this program will be of good use, it is simple, easy and simple to use.

### Characteristic
It will have a simple and easy-to-understand menu that shows the magnitudes and units that the calculator counts.
If we carry out the program well, at the end it will show us the different conversions in the different units that the calculator contains that are of the same physical characteristic, for example, we choose the magnitude "x", and we choose the unit "y", the amount of the unit “y” will be converted to equivalent quantities but different in the different units of the magnitude “x” that the calculator contains.
The three magnitudes it has are:
1. Speed
2. Length
3. Time

The magnitude "velocity" has the following units:
- Unit: Kilometer per hour (km / h)
- Unit: Meter per second (m / s)
- Unit: Mile per hour (mi / h)
- Unit: Foot per second (ft / s)

The quantity "length" has the following units:
- Unit: Kilometer (km)
- Unit: Meter (m)
- Unit: Centimeter (cm)
- Unit: Mile (mi)
- Unit: Yard (yd)
- Unit: Foot (feet)
- Unit: Inch (inches)

The magnitude "time" has the following units:
- Unit: Day (day)
- Unit: Hour (h)
- Unit: Minute (m)
- Unit: Second (s)
- Unit: Millisecond (ms)

### Structure
The process that my program takes is simple, it only takes a few steps to achieve the conversions:
1. First we choose the magnitude of the unit that we want to convert
2. Then we choose the required unit to convert
3. Then we write the quantity of the unit
4. And finally, it will automatically generate the conversions in the different units.

The code used "switch case", "void" and headers. All the information about where I get information from them are below.

The "switch case" was used to create different conditions, depending on the options that the user takes, different cases will be executed.
It was done as follows:


switch(option) /* Depending on the option chosen, a case is executed */
{

        case value1: /* Instruction block 1 */
        
        break;
        
        case value2: /* Instruction block 2 */
        
        break;
        
        default: /* Default statement block */
        
}

The "void" was used to return a value when a certain function is called.
The following form was used:

nameFunction(); /* Call the function */

int nameFunction(void) { /* Function instructions */

}

For the headers, it was used for the different #includes and voids. **The name of the header file I used is _"header.h"_, while the executions were in _"main.c"_. If you intend to use this program, be sure to correctly name the files.**

## References
fresh2refresh. (n.d.). What is void in C? | C Interview Questions | Fresh2Refresh.com. Fresh2refresh.Com. Retrieved May 19, 2021, from https://fresh2refresh.com/c-programming/c-interview-questions-answers/what-is-void-in-c/#:%7E:text=Void%20is%20an%%2020empty%%2020data,%20value%%2020to%%2020the%%2020calling%%2020function

González, J. D. M. (2021, January 3). Conditional switch. Schedule NOW. https://www.programarya.com/Ccursos/C++/Condicionales/Conditional-switch

## Autoevaluation
1. Complexity 1, the truth is not very complicated
2. Functionality 3, works correctly
3. Code 3, it is clean and easy to understand
4. Storage 2, the storage is not too great
5. Documentation 3, the documentation and the video is not a big deal but it works

CF: 12pts

### Made by: JuanitoNito7
