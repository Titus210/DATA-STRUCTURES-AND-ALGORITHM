#   Data Structures and Algorithm
***
## Introduction
Data structures is structural representation of logical relationships between elements of data. <br/>
It  can also be described as group of data elements which provide efficient way of sharing and organizing data in computer to be effectively used.
### Terminologies related to data structures
1. __Data__: This is elementary value or collection of values.
2. __Record__: Collection of various data items.
3. __File__: Collection of various records of one entity.
4. __Entity__: Is the class of certain object and attribute.
5. __Field__: Is a single elementary unit of information representing attribute of entity.

##  Need for data structures
1. Processor Speed
2. Data search
3. Multiple request

>    Data structure = organization + representation


## Programming Methodologies
This deals with different methods of designing programming. <br/>
Data is basic entity for calculation and manipulation progress, t can be single unit or set. <br/>
There are two types of data:
   - Numerical: float, integer
   - Alphabet: string
Representation of particular D.S id called __storage structure__.
Data structure should be represented in a way utilize maximum efficiency. <br/>
Storage structure represented in auxillary memory is called __file structure__ <br/>

To solve real life problem, we define the problem, then design the algorithm.

### Stepwise Refinement
This is when problem is refined(converted) stepwise to a program.

Approaches to algorithm design
1. Top-Down
2. Bottom-Up

### Stepwise Refinement technique
This is technique used in algorithm and data structure to design and develop a solution incrementally by breaking down problem to small sub problems and solving eah separated then building final solution gradually 
through series of intermediate stages.
#### Benefits
- Makes solution development problem manageable by dividing, conquer and combine.
- Makes solution understandable
- Makes easier to debug and refine solution as each stage is tested.
- Minimizes error and oversites as solution is developed incrementally.

### Modular Programming
This is procedural way of programming that focuses on writhing code as functions. <br/> It involves breaking down large complex programs to smaller, manageable modules/ components which 
perform single well defined function and minimal interactions.<br/>
Discourages use of control variables and falgs as paramerers which indicates caller function needs to know much about how functionis implemented.<br/>
Encourage splitting functions to two types:
1. Master: which controls program flow.
2. Slave: which handles low level detailed i.e moving data between structures.

#### Features of modular programming
1. __Abstraction__: Hide detailes expose essential features.
2. __Encapsulation__: internal implementation of internal data structures is holder from other modules making it flexibe preventing unintended interactions.
3. __Reusability__: reduce code 
4. __Separation of Concerns__
5. __Interfaces__: defines output, inputs and its operations.
6. __Cohesion__
7. __Couping__: Minimizes couping making program flexible.

We can implement using top-down and bottom-up.

### Top-Down Design