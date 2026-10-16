---
title: "Programming in C++"
collection: teaching
type: "Labs"
permalink: /teaching/26-cpp
venue: "Wednesday 10:40–12:10, SW2, Malá Strana"
date: 2026-01-01
---

---

## :email: Contact
- **Mattermost:** [ulita.ms.mff.cuni.cz/mattermost](https://ulita.ms.mff.cuni.cz/mattermost)
    - Channel: `2627/nprg041-cpp-faltin`
    - DM: `@faltin.tomas`
- **Email:** tomas.faltin@matfyz.cuni.cz

## :information_source: General Information
* [Credit Information](https://teaching.mff.cuni.cz/nprg041-web/zapocet.html)
* [Lecture Webpage](https://teaching.mff.cuni.cz/nprg041-web/index.html)

## Useful Links
* [Gitlab](https://gitlab.mff.cuni.cz/teaching/nprg041/2026-27/faltin)
  * Usage: [Merge Requests](#merge-requests-in-gitlab)
* Online compilers: [Godbolt](https://godbolt.org), [Coliru](https://coliru.stacked-crooked.com)
* Documentation: [cppreference.com](https://en.cppreference.com/w/)
* [AI tools](#ai-usage)
* Package managers: [vcpkg](https://learn.microsoft.com/en-us/vcpkg/), [Conan](https://conan.io/)

## :calendar: Important Dates

:bangbang: *Do not leave this until the last minute! Iteration takes time.*

## :test_tube: Individual Labs
Latest slides: [pdf](https://cunicz-my.sharepoint.com/:b:/g/personal/46734522_cuni_cz/IQBgs57jhuacQbytvqOy3EMhAQVRjy6GsBivKxg1qJVcIyY?e=Q2ymFu), [pptx](https://cunicz-my.sharepoint.com/:p:/g/personal/46734522_cuni_cz/IQCw5MyL6zQsS4Wt-vaCJ1GEAc3kKDKYjseWKWds9smdpxE?e=321bWn)

| Lab     | Date      | Goals | Code  | Homework  |
|---------|-----------|-------|-------|-----------|
| **01** | 30.09. | Organization | --  | -- | 
| **02** | 07.10. | Hello World, compilation, IDEs, `vector`       | -- | [Simple Calculator (deadline 23.10.)](https://gitlab.mff.cuni.cz/teaching/nprg041/2026-27/faltin/shared/-/blob/master/homeworks/hw01/README.md) | 
| **03** | 14.10. | classes, methods, const-correctness, argument passing - ref/val | -- | [Matrix (deadline 30.10.)](https://gitlab.mff.cuni.cz/teaching/nprg041/2026-27/faltin/shared/-/blob/master/homeworks/hw02/README.md) | 
| **04** | 21.10. |       |       |           | 
| :x:    | ~~28.10.~~ | **Holiday**: Den vzniku samostatného československého státu | — | — |
| **05** | 04.11. |       |       |           | 
| **06** | 11.11. |       |       |           |
| **07** | 18.11. |       |       |           |
| **08** | 25.11. |       |       |           |
| **09** | 02.12. |       |       |           | 
| **10** | 09.12. |       |       |           | 
| **11** | 16.12. |       |       |           | 
| **12** | 06.01  |       |       |           |
{: #cpp-labs}


## :white_check_mark: Merge Requests in GitLab
Always submit your solution through a **Merge Request (MR)**. This allows me to review your code and provide comments.

1. Create a separate branch, e.g, *hw1-solution* for your homework: `git checkout -b hw1-solution`
2. Add you solution and push your new branch to Gitlab
3. Open a Merge Request
- Go to you Gitlab project in browser and click: `Merge Requests/Create merge request`.
- Select *Source branch*: `hw1-solution`, *Target Branch:* `master` 
- Add a *title*, optional *description*, set `@faltint` as *Assignee*, and click **Create merge request**

## AI usage
- [e-infra](https://docs.cerit.io/en/docs/ai-as-a-service/chat-ai)
  - Free access for students of MFF UK, sign in with your university account, would require approval
- Microsoft 365 Copilot - Sign with your university account, e.g., `xxxx@cuni.cz`
- [Github Copilot](https://github.com/education/students) - Need to sign to the students program to get free access and credits.

## :trophy: Credit Project
See [Credit Information Page](https://teaching.mff.cuni.cz/nprg041-web/zapocet.html) for details.

Each individual step of the project should be submitted as a separate merge-request.

### Deadlines
- Schedule your individul deadlines for each phase of the projectand put it into Gitlab `README.md` file.
  - Create a merge request with your schedule and assign it to `@faltint` for approval.
- Each step will require multiple iterations and feedback from the instructor. Therefore, it is important to schedule your deadlines accordingly and not leave them until the last minute.


### Step 1:Project Proposal (e.g., 30.11. 23:59)
Do a quick research and propose a project idea.

### Step 2: Technology demo - POC (e.g., 11.01. 23:59)
Demonstrate a working prototype of your project. The goal is to show that your project is feasible and that all the necessary technologies are available and can be integrated.

Create a merge-reguest in GitLab. 

It must contain: 
- A short description of the demo, e.g., what it does and how it works. 
- Description of the required technologies and libraries that needs to be installed to run the demo, including their versions.
- A build script, e.g., a cmake/script. (Worst case, a detailed manual how to build and run the demo.)

### Step 3: Final Project Submission (e.g., 31.05. 23:59)
TBD

### Framework for Finding a Project Idea

#### Understanding & Curiosity
- **What system or concept do you want to deeply understand?**  
  *Examples:* OS, compilers, networking, ML pipelines.
- **Is there a technology you’ve always wondered about internally?**  
  *Examples:* Blockchain, Docker, game engines.

#### Technology & Tools
- What libraries or frameworks does your domain rely on?  
  *Examples:* OpenMP, MPI, LLVM, TensorFlow.
- Could you integrate multiple libraries for something new?

#### User-Centered Design
- Ask peers: *What tasks frustrate them?*
- Automate repetitive tasks or improve incomplete tools.

#### Innovation & Improvement
- Combine two ideas into something new.
- Implement a research algorithm practically.
- Create interactive learning tools.

#### Scalability & Performance
- Design for large data or parallel processing.
- Optimize for speed, memory, or energy.

#### Social Impact & Accessibility
- Improve accessibility for people with disabilities.
- Make complex tools easier for beginners.

## :computer: IDEs

### VS Code

#### Recommended extensions
- [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) (`ms-vscode.cpptools`) – debugger
- [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools) (`ms-vscode.cmake-tools`) – configure, build, run
- [clangd](https://marketplace.visualstudio.com/items?itemName=llvm-vs-code-extensions.vscode-clangd) (`llvm-vs-code-extensions.vscode-clangd`) – code completion and diagnostics
  - When asked, let it disable the IntelliSense of the C/C++ extension (the two conflict).

#### clangd – setting the C++ version
Create the file `.clangd` in the project root:

```yaml
CompileFlags:
  Add: [-std=c++23]
```

Then restart the clangd server: *View → Command Palette* (`Ctrl+Shift+P`) → **clangd: Restart language server**.

> **Tip:** With CMake, you can instead add `set(CMAKE_EXPORT_COMPILE_COMMANDS ON)` to `CMakeLists.txt`. clangd then reads the exact compiler flags from `build/compile_commands.json` and `.clangd` is not needed.

#### CMake – setting up the project
Also works for Visual Studio in *Folder mode*. Create the file `CMakeLists.txt` in the project root:

```cmake
cmake_minimum_required(VERSION 3.20)
project(labtest CXX)

add_executable(my_prog source.cpp)

set_property(TARGET my_prog PROPERTY CXX_STANDARD 23)
set_property(TARGET my_prog PROPERTY CXX_STANDARD_REQUIRED ON)
```

In VS Code: *Command Palette* → **CMake: Select a Kit** (choose your compiler) → **CMake: Configure**. Then build with **CMake: Build** (`F7`) or the *Build* button in the bottom status bar.

#### Debugging – program and arguments
*Run → Add Configuration…*, choose the template below and edit `.vscode/launch.json`.

**Windows (MSVC)** – template *C/C++: (Windows) Launch*:

```json
{
  "version": "0.2.0",
  "configurations": [
    {
      "name": "(Windows) Launch",
      "type": "cppvsdbg",
      "request": "launch",
      "program": "${workspaceFolder}/build/Debug/my_prog.exe",
      "args": ["expr1.txt", "input1.csv", "output1.csv"],
      "stopAtEntry": true,
      "cwd": "${workspaceFolder}",
      "environment": [],
      "console": "externalTerminal"
    }
  ]
}
```

**Linux (GCC + gdb)** – template *C/C++: (gdb) Launch*:

```json
{
  "version": "0.2.0",
  "configurations": [
    {
      "name": "(gdb) Launch",
      "type": "cppdbg",
      "request": "launch",
      "program": "${workspaceFolder}/build/my_prog",
      "args": ["expr1.txt", "input1.csv", "output1.csv"],
      "stopAtEntry": true,
      "cwd": "${workspaceFolder}",
      "environment": [],
      "externalConsole": false,
      "MIMode": "gdb",
      "setupCommands": [
        {
          "description": "Enable pretty-printing for gdb",
          "text": "-enable-pretty-printing",
          "ignoreFailures": true
        },
        {
          "description": "Set Disassembly Flavor to Intel",
          "text": "-gdb-set disassembly-flavor intel",
          "ignoreFailures": true
        }
      ]
    }
  ]
}
```

> **Tip:** Instead of hard-coding `program`, you can use `"${command:cmake.launchTargetPath}"` – CMake Tools then fills in the path of the selected target (works on both Windows and Linux).

### Visual Studio

#### Project mode (`.sln`)
*Project → Properties → Configuration Properties → Debugging*, set **Command Arguments**. Make sure **Working Directory** is `$(ProjectDir)`.

#### Folder mode (CMake)
Use the `CMakeLists.txt` from above. Then *Debug → Debug and Launch Settings for my_prog* and edit `launch.vs.json`:

```json
{
  "version": "0.2.1",
  "defaults": {},
  "configurations": [
    {
      "type": "default",
      "project": "CMakeLists.txt",
      "projectTarget": "my_prog.exe",
      "name": "my_prog.exe",
      "currentDir": "${projectDir}",
      "args": ["expr1.txt", "input1.csv", "output1.csv"]
    }
  ]
}
```

