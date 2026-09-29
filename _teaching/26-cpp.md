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

## :calendar: Important Dates

| Date        | Milestone                         | Details                                              | Submission            |
|-------------|-----------------------------------|------------------------------------------------------|-----------------------|
| **23.11.2026** | Topic proposal                 | —                                                    | Mail                  |
| **30.11.2026** | Approved detailed description  | Written in Markdown                                  | Merge request         |
| **10.01.2027** | First technology demo          | —                                                    | —                     |
| **23.05.2027** | Final version submission       | —                                                    | —                     |
{: #cpp-schedule}

:bangbang: *Do not leave this until the last minute! Iteration takes time.*

## :test_tube: Individual Labs
Latest slides: [pdf](https://cunicz-my.sharepoint.com/:b:/g/personal/46734522_cuni_cz/IQBgs57jhuacQbytvqOy3EMhAQVRjy6GsBivKxg1qJVcIyY?e=Q2ymFu), [pptx](https://cunicz-my.sharepoint.com/:p:/g/personal/46734522_cuni_cz/IQCw5MyL6zQsS4Wt-vaCJ1GEAc3kKDKYjseWKWds9smdpxE?e=321bWn)

| Lab     | Date      | Goals | Code  | Homework  |
|---------|-----------|-------|-------|-----------|
| **01** | 30.09. |       |       |           | 
| **02** | 07.10. |       |       |           | 
| **03** | 14.10. |       |       |           | 
| **04** | 21.10. |       |       |           | 
| :x:    | ~~28.10.~~ | :bangbang: **Holiday**: Den vzniku samostatného československého státu | | |
| **05** | 04.11. |       |       |           | 
| **06** | 11.11. |       |       |           |
| **07** | 18.11. |       |       |           |
| **08** | 25.11. |       |       |           |
| **09** | 02.12. |       |       |           | 
| **10** | 09.12. |       |       |           | 
| **11** | 16.12. |       |       |           | 
| **12** | 06.01  |       |       |           |
{: #cpp-lab}


## :white_check_mark: Merge Requests in GitLab
For each homework, **submit your solution through a Merge Request (MR)**. This allows me to review your code and provide comments.

1. Create a separate branch, e.g, *hw1-solution* for your homework: `git checkout -b hw1-solution`
2. Add you solution and push your new branch to Gitlab
3. Open a Merge Request
- Go to you Gitlab project in browser and click: `Merge Requests/Create merge request`.
- Select *Source branch*: `hw1-solution`, *Target Branch:* `master` 
- Add a *title*, optional *description*, set `@faltint` as *Assignee*, and click **Create merge request**

## AI usage
- in-progress
- must understand the code
- 

## :trophy: Credit Project
See [Credit Information Page](https://teaching.mff.cuni.cz/nprg041-web/zapocet.html) for details.

### Technology demo
Demonstrate a working prototype of your project. The goal is to show that your project is feasible and that all the necessary technologies are available and can be integrated.

Create a merge-reguest in GitLab. 

It must contain: 
- A short description of the demo, e.g., what it does and how it works. 
- Description of the required technologies and libraries that needs to be installed to run the demo, including their versions.
- A build script, e.g., a cmake/script. (Worst case, a detailed manual how to build and run the demo.)


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

