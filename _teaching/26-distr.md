---
title: "Principles of Distributed Systems"
collection: teaching
type: "Lectures"
permalink: /teaching/26-distr
venue: "Wednesday 12:20 - 13:50, S6, Malá Strana"
date: 2025-01-01
---

---

## :email: Contact
- **Office:** Room S203, 2nd floor
- **Mattermost:** [ulita.ms.mff.cuni.cz/mattermost](https://ulita.ms.mff.cuni.cz/mattermost), DM: `@faltin.tomas`
    - email me if you need an invite.
- **Email:** tomas.faltin@matfyz.cuni.cz

---

## :books: Recommended Books
- [Van Steen, Tanenbaum - Distributed Systems](https://www.distributed-systems.net) *(Free download)*
    - [slides](https://www.distributed-systems.net/my-data/DS4/allslides.zip)
- [A.D. Kshemkalyani, M. Singhal - Distributed Computing, Principles, Algorithms, and Systems](https://www.cs.uic.edu/~ajayk/DCS-Book)
- [Chow, Johnson - Distributed Operating Systems & Algorithms](https://cunicz-my.sharepoint.com/:f:/g/personal/46734522_cuni_cz/IgB3aziuyPmDTq9Iq-0rBiZOAWhICToTusYlfvXcMlrj5_A?e=KQ3xKA)
- Antonopoulos - Mastering Bitcoin, Mastering Lightning Network
- Santoro - Design and Analysis of Distributed Algorithms
- Mullender - Distributed Systems
- Wu - Distributed System Design

---

## :calendar: Lecture Schedule
Latest slides for lectures: 
- `PDS-main` - Slides with translated selected topics: [pdf](https://cunicz-my.sharepoint.com/:b:/r/personal/46734522_cuni_cz/Documents/_teaching/pds25/PDS-en.pdf?d=w0918d3aa63664551b1d005b4b5bfa2c7&csf=1&web=1&e=hs9xSe), [pptx](https://cunicz-my.sharepoint.com/:p:/g/personal/46734522_cuni_cz/IQCx8ET6NlvoSpkf_fKk6b7YAYTItO-gyCmfkvIHLnvzTyo?e=aza6UP)
- `PDS-btc` - Slides on blockchain: [pptx](https://teaching.mff.cuni.cz/nswi035-web/pds-btc.pptx)


| Lecture | Date       | Goals   | Slides & Pages |
|---------|------------|---------|----------------|
| :x:     | ~~29.09.~~ | [Distributed Systems@SOSP](https://sigops.org/s/conferences/sosp/2026/schedule.html) instead  | -- |
| **01**  | 06.10.     |  Introduction | [pdf:1-15](https://cunicz-my.sharepoint.com/:b:/r/personal/46734522_cuni_cz/Documents/_teaching/pds25/PDS-en.pdf?d=w0918d3aa63664551b1d005b4b5bfa2c7&csf=1&web=1&e=hs9xSe) | -- |
| **02**  | 13.10.     | Communication |                |
| **03**  | 20.10.     |         |                |
| **04**  | 27.10.     |         |                |
| **05**  | 03.11.     |         |                |
| **06**  | 10.11.     |         |                |
| :x:     | ~~17.11.~~ | **Holiday**: Mezinárodní den studentstva | — |
| **07**  | 24.11.     |         |                |
| **08**  | 01.12.     |         |                |
| **09**  | 08.12.     |         |                |
| **10**  | 15.12.     |         |                |
| **11**  | 05.01.     |         |                |
{: #pds-schedule}

---

## :scroll: Syllabus
Most topics in the syllabus are covered in Distributed Systems by Van Steen. The remainder is addressed in supplementary readings. If anything is unclear or you notice a topic missing, please let me know.

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
| | [8.2] *Process resilience* (Paxos, RAFT, byzantine agreement problem) | Process Groups, Consensus, **Paxos** (Proposer, Acceptor, Learner), **RAFT** (Term, Log Replication, AppendEntries), **Byzantine Agreement**, **Practical Byzantine Fault Tolerance (PBFT)**, **Consensus in blockchain systems**, **CAP Theorem**. |
| | [8.3] *Reliable client-server communication* | Reliable RPC Semantics, Failure detection, **At-least-once semantics**, **At-most-once semantics**, **Idempotent operation**. |
| | [8.4] *Reliable group communication* (virtual synchrony) | Reliable multicasting, Feedback Implosion, **Atomic multicast**, **Causally ordered multicast**, **Virtual Synchrony**. |
| | [8.5] *Distributed commit* | **Distributed Commit**, **Two-Phase Commit (2PC)**, Three-Phase Commit (3PC). |
| | [8.6.2] *Checkpointing* | **Checkpointing**, **distributed snapshot**, **independent chackpointing**  |

### Remaining Topics Not Covered in the Book
- [Chow, Johnson - Distributed Operating Systems & Algorithms](https://cunicz-my.sharepoint.com/:f:/g/personal/46734522_cuni_cz/IgB3aziuyPmDTq9Iq-0rBiZOAWhICToTusYlfvXcMlrj5_A?e=KQ3xKA)
- [pds-btc.pptx](https://teaching.mff.cuni.cz/nswi035-web/pds-btc.pptx) - Slides on blockchain

| Topic | Concepts/Protocols/Algorithms | Pages | Addition Sources |
| :--- | :--- | :--- | :--- |
| **Mutual exclusion** | **Maekawa’s Algorithm**, **Ricard-Agrawala**, **Naive Voting**, **Maekawa voting** | 46-64 | [Maekawa’s Algorithm](https://lsisreviving.weebly.com/uploads/2/3/6/8/23689241/maekawas_algorithm.pdf), [wiki](https://en.wikipedia.org/wiki/Maekawa%27s_algorithm) |
| **Election algorithms** | **Invitation Algorithm**, **Ring Algorithms: Chang & Roberts, Hirschback & Sinclair** | 65-75 | |
| **Distributed paging** | **Distributed paging with sequestion or causal consistency** | 203-209 | Understand single process [Memory paging](https://en.wikipedia.org/wiki/Memory_paging), [Virtual memory](https://en.wikipedia.org/wiki/Virtual_memory), ... |
| **Virtual synchrony** | **Trans Algorithm**, **Transis algorithm**, **VSync/ISIS**. | 87-105 | [Transis](https://cunicz-my.sharepoint.com/:b:/g/personal/46734522_cuni_cz/IQDx2lp7pS6uRJKaVUiOS7IFARwZWWtZZutBfUz3gUsWX-Q?e=1dcxSK), [ISIS+Transis](https://cunicz-my.sharepoint.com/:f:/g/personal/46734522_cuni_cz/IgB3aziuyPmDTq9Iq-0rBiZOAZl_S0Mo3GbkvE5YSoyh518?e=bTMILW) |
| **Global state detection** | **Chandy-Lamport Marker Algorithm** (for distributed snapshots/consistent global state), **Diffusing Computation** (for deadlock/termination detection). | 114-128 | [slides](https://www.cs.uic.edu/~ajayk/Chapter4.pdf) |
| **Termination detection** | **Dijsktra-Scholten Algorithm**, **Huang's Algorithm**  | 108-113 | [wiki-DS](https://en.wikipedia.org/wiki/Dijkstra%E2%80%93Scholten_algorithm), [wiki-Huang](https://en.wikipedia.org/wiki/Huang%27s_algorithm) |
| **Deadlock Detection** | **TWFG (Transaction-Wait-For Graph), Centralized algorithms: Ho-Ramamoorthy algorith, Path-pushing algorithms: Menasce-Muntz, Obermarck, Edge-chaising algorithms: Mitchell-Merritt, Chandy-Misra-Haas, Diffusing computation: Bracha-Toueg** | 216-223 | [Edge-chasing Chandy-Misra-Haas](https://www.cs.utexas.edu/~misra/scannedPdf.dir/DistrDeadlockDetection.pdf), [DistrDeadlocks.pdf](https://cunicz-my.sharepoint.com/:b:/g/personal/46734522_cuni_cz/IQCZwcKxJcAzTphh4wmY2LUIAbpWvBueGRd2Dd5ZokAUVBE?e=yvcHRw) |
| **Blockchain** | **transactions, UTXO, signatures, mining, consensus, payment channels, lightning network** | pds-btc: full | |
| **Distributed data structures** | **CRDT** | 237-270 | [wiki](https://en.wikipedia.org/wiki/Conflict-free_replicated_data_type) |


