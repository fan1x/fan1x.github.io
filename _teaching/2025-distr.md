---
title: "Principles of Distributed Systems"
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
    - [slides](https://www.distributed-systems.net/my-data/DS4/allslides.zip)
- [A.D. Kshemkalyani, M. Singhal - Distributed Computing, Principles, Algorithms, and Systems](https://www.cs.uic.edu/~ajayk/DCS-Book)
- Chow, Johnson - Distributed Operating Systems & Algorithms
- Antonopoulos - Mastering Bitcoin, Mastering Lightning Network
- Santoro - Design and Analysis of Distributed Algorithms
- Mullender - Distributed Systems
- Wu - Distributed System Design

---

## :calendar: Lecture Schedule
- [PDS-en.pptx](https://cunicz-my.sharepoint.com/:p:/g/personal/46734522_cuni_cz/IQCx8ET6NlvoSpkf_fKk6b7YAYTItO-gyCmfkvIHLnvzTyo?e=aza6UP) -  Incrementally translated slides

| Lab | Date    | Lecture | Slides | Study |
|-----|---------|---------|--------|-------|
| 01  | 01.10.  | :heavy_check_mark: | [pdf](../data/2025-26/pds/pds_en_01.pdf) | 1, 2.1–2.3 |
| 02  | 08.10.  | :heavy_check_mark: | [pdf](../data/2025-26/pds/pds_en_02.pdf) | 4.2-4.4, 8.3, 8.4 |
| 03  | 15.10.  | :x: | — | 5.1-5.6 |
| 04  | 22.10.  | :x: | — | 7.2, 7.5 |
| 05  | 29.10.  | :heavy_check_mark: | [slides.04](../data/2025-26/pds/allslides/slides.04.pdf): pages 13-50, [slides.08](../data/2025-26/pds/allslides/slides.08.pdf)  pages 67-76, [slides.05](../data/2025-26/pds/allslides/slides.05.pdf): pages 1-21 | — |
| 06  | 05.11.  | :heavy_check_mark: | [slides.05](../data/2025-26/pds/allslides/slides.05.pdf): pages 22-88 | 7.3, 7.4, 2.4 |
| 07  | 12.11.  | :x: (Dean's day) | — | 8.1, 8.2, 8.5 |
| 08  | 19.11.  | :heavy_check_mark: | — | — |
| 09  | 26.11.  | :heavy_check_mark: | 8.2, 8.5 | — |
| 10  | 03.12.  | :heavy_check_mark: | pages: 107-126 | — |
| 11  | 10.12.  | :heavy_check_mark: | pages: 46-64 | — |
| 12  | 17.12.  | :heavy_check_mark: | pages: 88-105 - Vector clock, Trans, Transis, Vsync/ISIS, Blockchain |  |
| 13  | 07.01.  | :heavy_check_mark: | **Shared together with the Czech lecture in S4**: CRDT, DHT, ... | |
{: #pds-schedule}

---

### :bangbang: Study Tips
- Keep up with reading assignments after each lecture.
- Use Mattermost for quick clarifications.

---

## :scroll: Syllabus

### Distributed Systems - Van Steen, Tanenbaum
- [book](https://www.distributed-systems.net) *(free download)*, [slides](https://www.distributed-systems.net/my-data/DS4/allslides.zip)


| Module | Topic | Key Concepts/Protocols/Algorithms |
|:---|:---|:---|
| **1. Introduction** | (skim through entire chapter) | Distributed vs. Decentralized systems, Resource Sharing, Design Goals (Openness, Dependability, Security, Scalability), Distribution Transparency (Access, Location, Concurrency, Failure, Migration, Relocation, Replication), Partial Failure, Scaling Techniques (Partitioning, Replication), Leslie Lamport's definition, Lack of trust (relevance for decentralized systems). |
| **2. Architectures** | [2.1] *Architectural styles* | Layered Architectures, Service-Oriented Architecture (SOA), RESTful Architecture, Microservices, Shared Data Space, Linda tuple spaces. |
| | [2.2] *Middleware and distributed systems* | Middleware Layer, ZeroMQ, AMQP (Advanced Message Queuing Protocol). |
| | [2.3] *Layered-system architectures* | Client-Server Architecture, Multitiered Architectures, Thin Client. |
| | [2.4] *Symmetrically distributed system architectures* | Peer-to-Peer (P2P), Overlay Network, Distributed Hash Tables (DHT), Chord system, Flooding, Random Walk. |
| | [2.5] *Hybrid systems architectures* | Cloud Computing, Infrastructure-as-a-Service (IaaS), Platform-as-a-Service (PaaS), Blockchain architectures |
| **4. Communication** | [4.2] *RPC* | **Remote Procedure Call (RPC)**, Marshaling, Interface Definition Language (IDL), Parameter passing (copy/restore), **RPC semantics** (at-least-once, at-most-once), Orphans, Orphan extermination, Reincarnation, Expiration. |
| | [4.4] *Multicast communication* | Application-level multicasting, **Flooding**, **Gossip-based Data Dissemination (Epidemic protocols)**, Epidemic models, Anti-entropy. |
| **5. Coordination** | [5.1] *Clock synchronization* | **Physical clocks**, **NTP**, Reference Broadcast Synchronization (RBS), Coordinated Universal Time (UTC). |
| | [5.2] *Logical clocks* | **Logical Clocks**, **Causal Dependency**, **Lamport’s Logical Clocks** (Timestamp), **Vector Clocks**, **Totally Ordered Multicasting**. |
| | [5.3] *Mutual exclusion* | **Centralized Algorithm (Sequencer)**, **Ricart-Agrawala Algorithm**,**Token-Ring Algorithm**, **Decentralized algorithm**, Deadlock, **ZooKeeper Locking**. |
| | [5.4] *Election algorithms* - **RAFT** | **Bully Algorithm**, **Ring Algorithm**, **RAFT Leader Election**, **Proof of Work (PoW)**, **Proof of Stake (PoS)** |
| **6. Naming** | [6.2.3] *Distributed hash tables* | Flat Naming, **Distributed Hash Tables (DHT)**, Chord, Forwarding Pointers, Self-Certifying Name. |
| **7. Consistency and Replication** | [7.2] **Data-centric consistency models** | **Sequential Consistency, Causal Consistency, Entry Consistency, (Strong) Eventual Consistency, Weak Consistency**, Continuous Consistency (Conit), **Distributed Shared Memory (DSM)**, **Conflict-Free Replicated Data Type (CRDT)**, **Coherence Model.** |
| | [7.4] *Replica management* | Replica placement, Content Distribution Networks (CDN), Permanent/Server-initiated/Client-initiated replicas, **Push-based vs. Pull-based Protocols**, Content-blind caching. |
| **8. Fault tolerance** | [8.1] *Introduction* | Failure Models (Crash, Omission, Timing, Arbitrary/Byzantine Failures), Redundancy (Information, Physical, Time), Dependability (Availability, Reliability, Safety). |
| | [8.2] *Process resilience* (Paxos, RAFT, byzantine agreement problem) | Process Groups, Consensus, **Paxos** (Proposer, Acceptor, Learner, Ballot numbers), **RAFT** (Term, Log Replication, AppendEntries), **Byzantine Generals Problem (BGP)**, **Practical Byzantine Fault Tolerance (PBFT)**, **Consensus in blockchain systems**, **CAP Theorem**. |
| | [8.3] *Reliable client-server communication* | Reliable RPC Semantics, Failure detection, **At-least-once semantics**, **At-most-once semantics**, **Idempotent operation**. |
| | [8.4] *Reliable group communication* (virtual synchrony) | Reliable multicasting, Feedback Implosion, **Atomic multicast**, **Causally ordered multicast**, **Virtual Synchrony**. |
| | [8.5] *Distributed commit* | **Distributed Commit**, **Two-Phase Commit (2PC)**, Three-Phase Commit (3PC). |
| | [8.6.2] *Checkpointing* | **Checkpointing**, **distributed snapshot**, **independent chackpointing**  |

### Missing Topics and Details
- [Chow, Johnson - Distributed Operating Systems & Algorithms](https://cunicz-my.sharepoint.com/:f:/g/personal/46734522_cuni_cz/IgB3aziuyPmDTq9Iq-0rBiZOAZl_S0Mo3GbkvE5YSoyh518?e=bTMILW)
- [PDS-en.pptx](https://cunicz-my.sharepoint.com/:p:/g/personal/46734522_cuni_cz/IQCx8ET6NlvoSpkf_fKk6b7YAYTItO-gyCmfkvIHLnvzTyo?e=aza6UP) -  Translated slides from the Czech lecture
- [pds-btc.pptx](https://teaching.mff.cuni.cz/nswi035-web/pds-btc.pptx) - Fully translated slides from the Czech lecture
- [PDS-cz.pptx](https://teaching.mff.cuni.cz/nswi035-web/pds.pptx) - Original Czech slides (can be used as a reference and/or after translation)

| Topic | Missing/Unexplained Concepts/Protocols/Algorithms | Pages | Addition Sources |
| :--- | :--- | :--- | :--- |
| **Mutual exclusion** | **Maekawa’s Algorithm**, **Ricard-Agrawala**, **Naive Voting**, **Maekawa voting**, **LeLann Algorithm, Hirschback-Sinclair Algorithm (Ring algorithms)** | PDS-en: 46-64 | [Maekawa’s Algorithm](https://lsisreviving.weebly.com/uploads/2/3/6/8/23689241/maekawas_algorithm.pdf), [wiki](https://en.wikipedia.org/wiki/Maekawa%27s_algorithm) |
| **Election algorithms** | **Invitation Algorithm**, **Ring Algorithms: Chang & Roberts, Hirschback & Sinclair** | PDS-en: 65-75 | [Maekawa’s Algorithm](https://lsisreviving.weebly.com/uploads/2/3/6/8/23689241/maekawas_algorithm.pdf), [wiki](https://en.wikipedia.org/wiki/Maekawa%27s_algorithm) |
| **Distributed paging** | **Distributed paging with sequestion or causal consistency** | pds-en: 203-209 | |
| **Virtual synchrony** | **Trans Algorithm**, **Transis algorithm**, **VSync/ISIS**. | pds-en: 87-105 | [Transis](https://cunicz-my.sharepoint.com/:b:/g/personal/46734522_cuni_cz/IQDx2lp7pS6uRJKaVUiOS7IFARwZWWtZZutBfUz3gUsWX-Q?e=1dcxSK), [ISIS+Transis](https://cunicz-my.sharepoint.com/:f:/g/personal/46734522_cuni_cz/IgB3aziuyPmDTq9Iq-0rBiZOAZl_S0Mo3GbkvE5YSoyh518?e=bTMILW) |
| **Global state detection** | **Chandy-Lamport Marker Algorithm** (for distributed snapshots/consistent global state), **Diffusing Computation** (for deadlock/termination detection). | pds-en: 114-128 | [slides](https://www.cs.uic.edu/~ajayk/Chapter4.pdf) |
| **Termination detection** | **Dijsktra-Scholten Algorithm**, **Huang's Algorithm**  | pds-en: 108-113 | [wiki-DS](https://en.wikipedia.org/wiki/Dijkstra%E2%80%93Scholten_algorithm), [wiki-Huang](https://en.wikipedia.org/wiki/Huang%27s_algorithm) |
| **Deadlock Detection** | **TWFG (Transaction-Wait-For Graph), Centralized algorithms: Ho-Ramamoorthy algorith, Path-pushing algorithms: Menasce-Muntz, Obermarck, Edge-chaising algorithms: Mitchell-Merritt, Chandy-Misra-Haas, Diffusing computation: Bracha-Toueg** | pds-en: 216-223 | [Edge-chasing Chandy-Misra-Haas](https://www.cs.utexas.edu/~misra/scannedPdf.dir/DistrDeadlockDetection.pdf), [DistrDeadlocks.pdf](https://cunicz-my.sharepoint.com/:b:/g/personal/46734522_cuni_cz/IQCZwcKxJcAzTphh4wmY2LUIAbpWvBueGRd2Dd5ZokAUVBE?e=yvcHRw) |
| **Blockchain** | **transactions, UTXO, signatures, mining, consensus, payment channels, lightning network** | pds-btc: full | |
| **Distributed data structures** | **CRDT** | pds-en: 237-270 | [wiki](https://en.wikipedia.org/wiki/Conflict-free_replicated_data_type) |


