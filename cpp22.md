---
title: Programming in C++
layout: "page"
icon: fa-microchip
order: 4
---

## goto:
- [General](#general)
- [Deadlines](#deadlines)
- [Large homeworks](#large-homeworks)
- [Software project](#software-project)
- [Labs](#labs)

## General
- email: `tomas.faltin@matfyz.cuni.cz`
- lecture: [link](https://www.ksi.mff.cuni.cz/teaching/nprg041-web/)

## Deadlines
- <span style="color:red">27/11/2022: Software project - topic must be approved</span>
- 18/12/2022: Software project - POC (proof of concept)
- <span style="color:red">5/12/2022: 1st large homework - Data aggregation</span>
- 3/1/2022: Labs - Last exercise
- 2/4/2023: Software project - first submission
- 28/5/2023: Software project - final submission

## Large homeworks
### Data aggregation (**deadline: Monday 5/12/2022 23:59**)
- in ReCodex: [link](https://recodex.mff.cuni.cz/app/assignment/83765225-323c-41a0-828c-e5d1b621b9ef)
- 10+5 points
    - -5 points down per each started week

### 2nd large homework
- TBD
- 25 points

## Labs
- Tuesday 12:20 in SW2
- Mattermost: `nprg041-cpp-faltin`
    - Invite link in [SIS/Notice-board](https://is.cuni.cz/studium/eng/nastenka/x_listek.php?id=2bf546c95871bdf31cd29eec4eeaf107&tid=&moje=2&id_listku=45020)
- Gitlab: [link](https://gitlab.mff.cuni.cz/)
- ReCodex: [link](https://recodex.mff.cuni.cz/)

### 7th lab (15/11/2022)
- slides: [pptx](data/2022-23/cpp/ex07.pptx), [pdf](data/2022-23/cpp/ex07.pdf)
    - Pointers, Observers, Owners
    - Dynamic allocation
    - [Large homework assignment](#data-aggregation-deadline-monday-5122022-2359)
- examples:
    - [pointers_example.cpp](data/2022-23/cpp/code/pointers_example.cpp)
- homework:
    1. Linked list
        - [dictionary_api.hpp](data/2022-23/cpp/code/dictionary_api.hpp)
    2. int vector

### 6th lab (8/11/2022)
- slides: [pptx](data/2022-23/cpp/ex06.pptx), [pdf](data/2022-23/cpp/ex06.pdf)
    - Returning a (const) reference
    - Containers overview
- examples:
    - [summing_program.cpp](data/2022-23/cpp/code/summing_program.cpp)
- homework:
    1. Dictionary
        - [dictionary_api.hpp](data/2022-23/cpp/code/dictionary_api.hpp)
    2. Simple People Database
        - in [ReCodex](https://recodex.mff.cuni.cz/)

### 5th lab (1/11/2022)
- slides: [pptx](data/2022-23/cpp/ex05.pptx), [pdf](data/2022-23/cpp/ex05.pdf)
    - Declaration and definition
- examples:
    - [implement_class_c.cpp](data/2022-23/cpp/code/implement_class_c.cpp)
- homework:
    1. Implement summing program
        - [summing_program.cpp](data/2022-23/cpp/code/summing_program_assignment.cpp)
    2. Piškvorky for 2 players

### 4th lab (25/10/2022)
- slides: [pptx](data/2022-23/cpp/ex04.pptx), [pdf](data/2022-23/cpp/ex04.pdf)
    - R-value reference arguments
    - special class methods
    - `static` methods/attributes
- examples:
    - [verbose_class.cpp](data/2022-23/cpp/code/verbose_class.cpp)
    - [couting_class.cpp](data/2022-23/cpp/code/couting_class.cpp)
- homework:
    1. Implement class C
    2. 3D Matrix with special methods

### 3rd lab (18/10/2022)
- slides: [pptx](data/2022-23/cpp/ex03.pptx), [pdf](data/2022-23/cpp/ex03.pdf)
- homework: 3D Matrix

### 2nd lab (11/10/2022)
- slides: [pptx](data/2022-23/cpp/ex02.pptx), [pdf](data/2022-23/cpp/ex02.pdf)
- coding example: [Calculator](data/2022-23/cpp/code/du1.cpp)
- homework: 3D matrix

### 1st lab (04/10/2022)
- slides: [pptx](data/2022-23/cpp/ex01.pptx), [pdf](data/2022-23/cpp/ex01.pdf)
- homework: A simple calculator

### 8th lab (22/11/2022)
	
### 9th lab (29/11/2022)

### 10th lab (6/12/2022)

### 11th lab (13/12/2022)

### 12th lab (20/12/2022)

### 13th lab (03/01/2023) - last exercise

## Software project
### Deadlines
- 27/11/2022: topic must be approved
- 18/12/2022: POC (proof of concept)
    - show non-trivial working piece of code (~30%)
    - to test the choosen approach is working
- 2/4/2023: first submission
    - full blown version of the program with potential undiscovered bugs
- 28/5/2023: final submission
    - all found bug and other problems fixed

### Requirements
- a working program without bugs
    - submit into a repository, e.g., MFF Gitlab, ...
- tests
    - include test files 
        - integration tests for the whole program and/or unit tests for different components
    - descibe all use-cases that were tested manually
- documentation, e.g., `README.md` and well documented code is enough
    - general explanation
        - what does your program do, what is not supported, ...
    - how to build your program
        - ideally build-script/solution and/or thorough description
    - user-documentation
        - how to use it, how does it work, ...
    - documented code
        - readable and self-explaning code
        - document complex parts of the code (hacks, algorithms, ...)


### Examples Ideas
- 2D physics engine
- 3D RPQ UnrealEngine shooter
- Adventure guild manager
- Voice analyzer
- Cars
- Automatic solver
- Backend for a library
- Background Backuper
- Bang!
- Bioinformatic methods - proteins
- Starcraft bot
- Cached upload server
- Cardmaster
- Chaos in the old world
- Chips challenge game
- DHT-like P2P
- Collision detection
- Dots and Boxes (P2P, AI)
- Duna 2 (strat game)
- Rescue robot emulator
- EnergyLogger
- Keyword document extraction
- File manager
- Nature generator
- GeoSol the embedded GPS problem solver
- Graph editor
- Graph library
- Graph analysis
- Graph matching
- Hanabi AI (game)
- Audio/Video/Music player
- Instant messaging
- Interpret Forth
- Interpret Scheme
- Keyword analysis
- Compiler 
- Magic: The Gathering engine
- Map-Reduce Engine
- Parser/serializer JSON, API
- Particle engine
- Ping Pong Delay
- MNK-game with different topologies
- Calender
- Pokemon online
- Real-time strategy
- Rescue robots
- Rpg
- Fast photo batch-processing 
- Social desktop client
- Stack Attack
- Star wars
- Sudoku constraint-propagation solver
- Tanks 3D
- Virtual processor
- Train
- World of Warcraft bot