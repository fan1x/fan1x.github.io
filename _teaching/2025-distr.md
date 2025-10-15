---
title: "Principles of Distributed Systems"
collection: teaching
type: "Lectures"
permalink: /teaching/2025-distr
venue: "Wednesday 12:20 - 13:50, S6, Malá Strana"
date: 2025-01-01
# location: "City, Country"
---

---

## Contact
* In person: Room S203, 2nd floor
* [Mattermost](https://ulita.ms.mff.cuni.cz/mattermost)
    * Invite link in SIS/notice-board
    * Channel: `2526/nswi035-distrib-en`
    * Private message: `@faltin.tomas`
* email

## Books
- [Van Steen, Tanenbaum - Distributed Systems](https://www.distributed-systems.net)
    - Download for free
- Chow, Johnson - Distributed Operating Systems & Algorithms
- Antonopoulos -  Mastering Bitcoin, Mastering Lightning Network
- Santoro - Design and Analysis of Distributed Algorithms
- Mullender - Distributed Systems 
- Wu - Distributed System Design


## Sylabus
1. Introduction: [1, 2.1, 2.2, 2.3]
2. Interprocess communication
- messages, RPC - [4.2], [8.3]
- group communication - [8.4]

3. Synchronization algorithms
- physical and logical clocks [5.1, 5.2]
- mutual exclusion [5.3]
- election [5.4]
- causal ordering [5.2.2]
- delivery protocols
- virtual synchrony [8.4]

4. Consensus
- global state detection
- armies and generals
- Paxos
- RAFT

5. Distributed shared memory
- consistency models

6. Resource and process management
- distributed deadlocks
- process migration
- load balancing

7. Technical principles of cryptocurrencies

## Lectures

### Lab 01 - 01.10.
- **Lecture:** :heavy_check_mark:
- **Slides:** [pdf](../data/2025-26/pds/pds_en_01.pdf)
- **Study by next lecture (08.10.):**:
    - chapter 1 (entire chapter) - *Introduction*
    - chapter 2.1 - *Architectural styles*
    - chapter 2.2 - *Middleware and distributed systems*
    - chapter 2.3 - *Layered-system architectures*

---

### Lab 02 - 08.10.
- **Lecture:** :heavy_check_mark:
- **Slides:** [pdf](../data/2025-26/pds/pds_en_02.pdf)
- **Study by next lecture (29.10.):** 
    - **Communication:**
        - chapter 4.2 - *RPC*
        - chapter 4.3 - *Message-oriented communication*
        - chapter 4.4 - *Multicast communication*
    - **Coordination:**
        - chapter 5.3 - *Mutual exclusion*
        - chapter 5.4 - *Election algorithms*
        - chapter 5.5 - *Gossip-based coordination*
        - chapter 5.6 - *Distributed event matching*
    - **Consistency models:**
        - chapter 7.2 - *Data-centric consistency models*


---

### Lab 03 - 15.10.
- **Lecture:** :x: (home study)

### Lab 04 - 22.10.
- **Lecture:** :x: (home study)

---

### Lab 05 - 29.10.
- **Lecture:**: :heavy_check_mark:

### Lab 06 - 05.11. 
- **Lecture:**: :question:

### Lab 07 - 12.11.
- **Lecture:** :x: (all lectures cancelled - ''dean's day'')

### Lab 08 - 19.11.
- **Lecture:** :question:

### Lab 09 - 26.11.
- **Lecture:** :question:

### Lab 10 - 03.12.
- **Lecture:** :question:

### Lab 11 - 10.12.
- **Lecture:** :question:

### Lab 12 - 17.12.
- **Lecture:** :question:

### Lab 13 - 07.01.
- **Lecture:** :heavy_check_mark: