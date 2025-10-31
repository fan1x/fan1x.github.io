---
title: ":globe_with_meridians: Principles of Distributed Systems"
collection: teaching
type: "Lectures"
permalink: /teaching/2025-distr
venue: "Wednesday 12:20 - 13:50, S6, Malá Strana"
date: 2025-01-01
---

---

## :email: Contact
- **Office:** Room S203, 2nd floor
- **Mattermost:** [ulita.ms.mff.cuni.cz/mattermost](https://ulita.ms.mff.cuni.cz/mattermost)
    - Invite link in SIS/notice-board
    - Channel: `2526/nswi035-distrib-en`
    - DM: `@faltin.tomas`
- **Email:** tomas.faltin@matfyz.cuni.cz

---

## :books: Recommended Books
- [Van Steen, Tanenbaum - Distributed Systems](https://www.distributed-systems.net) *(Free download)*
- Chow, Johnson - Distributed Operating Systems & Algorithms
- Antonopoulos - Mastering Bitcoin, Mastering Lightning Network
- Santoro - Design and Analysis of Distributed Algorithms
- Mullender - Distributed Systems
- Wu - Distributed System Design

---

## :scroll: Syllabus
1. **Introduction:** 
    - chapter 1 (skim through entire chapter) - *Introduction*
    - chapter 2.1 - *Architectural styles*
    - chapter 2.2 - *Middleware and distributed systems*
    - chapter 2.3 - *Layered-system architectures*
2. **Interprocess Communication**
    - chapter 4.2 - *RPC*
    - chapter 4.3 - *Message-oriented communication*
    - chapter 4.4 - *Multicast communication*
    - chapter 8.3 - *Reliable client-server communication*
    - chapter 8.4 - *Reliable group communication*
3. **Synchronization Algorithms**
    - chapter 5.1 - *Clock synchronization*
    - chapter 5.2 - *Logical clocks*
    - chapter 5.3 - *Mutual exclusion*
    - chapter 5.4 - *Election algorithms*
    - chapter 5.5 - *Gossised coordination*p-ba
    - chapter 5.6 - *Distributed event matching*

    - delivery protocols
    - virtual synchrony [8.4]
4. **Consensus**
    - global state detection
    - armies and generals
    - Paxos
    - RAFT
5. **Distributed Shared Memory**
    - consistency models
6. **Resource and Process Management**
    - distributed deadlocks
    - process migration
    - load balancing
7. **Technical Principles of Cryptocurrencies**

---

## :calendar: Lecture Schedule

| Lab | Date    | Lecture | Slides | Study |
|-----|---------|---------|--------|-------|
| 01  | 01.10.  | :heavy_check_mark: | [pdf](../data/2025-26/pds/pds_en_01.pdf) | 1, 2.1–2.3 |
| 02  | 08.10.  | :heavy_check_mark: | [pdf](../data/2025-26/pds/pds_en_02.pdf) | 4.2-4.4, 8.3, 8.4 |
| 03  | 15.10.  | :x: | — | 5.1-5.6 |
| 04  | 22.10.  | :x: | — | 7.2, 7.5 |
| 05  | 29.10.  | :heavy_check_mark: | — | — |
| 06  | 05.11.  | :heavy_check_mark: | — | — |
| 07  | 12.11.  | :x: (Dean's day) | — | — |
| 08  | 19.11.  | :heavy_check_mark: | — | — |
| 09  | 26.11.  | :heavy_check_mark: | — | — |
| 10  | 03.12.  | :heavy_check_mark: | — | — |
| 11  | 10.12.  | :heavy_check_mark: | — | — |
| 12  | 17.12.  | :heavy_check_mark: | — | — |
| 13  | 07.01.  | :heavy_check_mark: | — | — |
{: #pds-schedule}

---

### :bangbang: Study Tips
- Keep up with reading assignments after each lecture.
- Use Mattermost for quick clarifications.
