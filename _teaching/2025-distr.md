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
- Chow, Johnson - Distributed Operating Systems & Algorithms
- Antonopoulos - Mastering Bitcoin, Mastering Lightning Network
- Santoro - Design and Analysis of Distributed Algorithms
- Mullender - Distributed Systems
- Wu - Distributed System Design

---

## :calendar: Lecture Schedule

| Lab | Date    | Lecture | Slides | Study |
|-----|---------|---------|--------|-------|
| 01  | 01.10.  | :heavy_check_mark: | [pdf](../data/2025-26/pds/pds_en_01.pdf) | 1, 2.1–2.3 |
| 02  | 08.10.  | :heavy_check_mark: | [pdf](../data/2025-26/pds/pds_en_02.pdf) | 4.2-4.4, 8.3, 8.4 |
| 03  | 15.10.  | :x: | — | 5.1-5.6 |
| 04  | 22.10.  | :x: | — | 7.2, 7.5 |
| 05  | 29.10.  | :heavy_check_mark: | [slides.04](../data/2025-26/pds/allslides/slides.04.pdf): pages 13-50, [slides.08](../data/2025-26/pds/allslides/slides.08.pdf)  pages 67-76, [slides.05](../data/2025-26/pds/allslides/slides.05.pdf): pages 1-21 | — |
| 06  | 05.11.  | :heavy_check_mark: | [slides.05](../data/2025-26/pds/allslides/slides.05.pdf): pages 22-88 | 7.3, 7.4, 2.4 |
| 07  | 12.11.  | :x: (Dean's day) | — | 8.1, 8.2, 8.5 |
| 08  | 19.11.  | :heavy_check_mark: | [Course Survey](https://forms.microsoft.com/e/G7RUyAYsz4) | — |
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
| | [2.5] *Hybrid systems architectures* | Cloud Computing, Infrastructure-as-a-Service (IaaS), Platform-as-a-Service (PaaS), Blockchain architectures, Distributed ledgers, Immutability of blocks, Massive replication, UTXO (Unspent Transaction Output), Merkle-tree. |
| **3. Processes** | [3.3] *Clients* | Client Stub, Networked User Interfaces. |
| | [3.4] *Servers* | Iterative/Concurrent Servers, Stateful/Stateless Servers, Server Clusters, Permanent State, Session State. |
| | [3.5] *Code migration* | Code Migration, Process Migration, Remote Evaluation (REV), Code-on-Demand (CoD), Mobile Agents (MA), Pre-copy approach, Threads, Containers (Vservers). |
| **4. Communication** | [4.2] *RPC* | Remote Procedure Call (RPC), Marshaling, Interface Definition Language (IDL), Parameter passing (copy/restore), RPC semantics (at-least-once, at-most-once), Orphans, Orphan extermination, Reincarnation, Expiration. |
| | [4.3] *Message-oriented communication* | Message Passing, Transient vs. Persistent Communication, Message Queuing Systems (MOM), Message Broker, AMQP, ZeroMQ. |
| | [4.4] *Multicast communication* | Application-level multicasting, Flooding, Gossip-based Data Dissemination (Epidemic protocols), Epidemic models, Anti-entropy. |
| **5. Coordination** | [5.1] *Clock synchronization* | Physical clocks, NTP, Berkeley Algorithm, Reference Broadcast Synchronization (RBS), Coordinated Universal Time (UTC). |
| | [5.2] *Logical clocks* | Logical Clocks, Causal Dependency, Lamport’s Logical Clocks (Timestamp), Vector Clocks, Totally Ordered Multicasting. |
| | [5.3] *Mutual exclusion* | Token-based Mutual Exclusion, Permission-based Mutual Exclusion, Centralized Algorithm (Sequencer), Ricart-Agrawala Algorithm, Maekawa’s Algorithm, Token-Ring Algorithm, Deadlock, ZooKeeper Locking. |
| | [5.4] *Election algorithms* - RAFT | Leader Election Algorithm, Bully Algorithm, Ring Algorithm, RAFT Leader Election, Proof of Work (PoW), Proof of Stake (PoS), Invitation Algorithm. |
| | [5.5] *Gossip-based coordination* | Aggregation, Peer-Sampling Service (PSS), Cyclon. |
| | [5.6] *Distributed event matching* | Event Matching, Publish-Subscribe (Topic-based vs. Content-based), Selective Routing. |
| **6. Naming** | [6.2.3] *Distributed hash tables* | Flat Naming, Distributed Hash Tables (DHT), Chord, Forwarding Pointers, Self-Certifying Name. |
| | [6.3.4] *Example: The Domain Name System* | Structured Naming, Domain Name System (DNS), Name Resolution (Iterative, Recursive), Zone, DNSSEC. |
| | [6.3.5] *Example: The Network File System* | Network File System (NFS), File Handle, Mount protocol. |
| | *Related Concepts* | Attribute-based Naming, Directory Services, LDAP, Information-Centric Networking (ICN), Named-Data Networking (NDN). |
| **7. Consistency and Replication** | [7.2] *Data-centric consistency models* | Sequential Consistency, Causal Consistency, Entry Consistency, Eventual Consistency, Continuous Consistency (Conit), Distributed Shared Memory (DSM), Conflict-Free Replicated Data Type (CRDT), Coherence Model. |
| | [7.3] *Client-centric consistency models* | Monotonic Reads, Monotonic Writes, Read Your Writes, Writes Follow Reads, Session consistency. |
| | [7.4] *Replica management* | Replica placement, Content Distribution Networks (CDN), Permanent/Server-initiated/Client-initiated replicas, Push-based vs. Pull-based Protocols, Content-blind caching. |
| | [7.5] *Consistency protocols* | Primary-based protocols (Remote-write, Primary-Backup), Replicated-write protocols (Active Replication), Quorum-based protocols (Voting), Read-One, Write-All (ROWA), Cache-coherence protocols, Leases. |
| **8. Fault tolerance** | [8.1] *Introduction* | Failure Models (Crash, Omission, Timing, Arbitrary/Byzantine Failures), Redundancy (Information, Physical, Time), Dependability (Availability, Reliability, Safety). |
| | [8.2] *Process resilience* (Paxos, RAFT, byzantine agreement problem) | Process Groups, Consensus, Paxos (Proposer, Acceptor, Learner, Ballot numbers), RAFT (Term, Log Replication, AppendEntries), Byzantine Generals Problem (BGP), Practical Byzantine Fault Tolerance (PBFT), HotStuff, Consensus in blockchain systems, Permissioned/Permissionless blockchains, Cryptographic linking (in BGP context), segwit, taproot, multisig, lightning network, CAP Theorem. |
| | [8.3] *Reliable client-server communication* | Reliable RPC Semantics, Failure detection, At-least-once semantics, At-most-once semantics, Idempotent operation. |
| | [8.4] *Reliable group communication* (virtual synchrony) | Reliable multicasting, Feedback Implosion, Virtual Synchrony (VSync/Virtuální synchronie), Atomic multicast, Trans Algorithm, Transis algorithm, ISIS. |
| | [8.5] *Distributed commit* | Distributed Commit, Two-Phase Commit (2PC), Three-Phase Commit (3PC), Recovery, Checkpointing/Distributed Snapshot (Recovery line), Message logging. |

### Missing Topics and Details (Work in progress)

| Module | Topic | Missing/Unexplained Concepts/Protocols/Algorithms |
| :--- | :--- | :--- |
| **1. Introduction** | | RDMA (Remote Direct Memory Access) (in the context of Cluster Computing), Single System Image (in the context of Cluster Computing), Fabric / connectivity / resource / application layer (Grid model layers). |
| **5. Coordination** | [5.2] *Logical clocks* | Matrix clocks (as applied to ISIS/VSync). |
| | [5.4] *Election algorithms* | LeLann Algorithm, Hirschback-Sinclair Algorithm (Ring algorithms). |
| **7. Consistency and Replication** | *Related Concept: Distributed Shared Memory* | Distributed paging (specifically mentioning centralized manager, copyset, or pageset management), Distributed shared variables (library-level implementation details). |
| **8. Fault tolerance** | [8.5] *Distributed commit* | Chandy-Lamport Marker Algorithm (for distributed snapshots/consistent global state), Diffusing Computation (for deadlock/termination detection). |
| | *Deadlock Detection* | WFG (Wait-For-Graph) (distributed implementation details), Path-pushing algorithms (Obermarck, Menasce-Muntz, Gligor-Shattuck, Ho-Ramamoorthy), Edge-chasing algorithms (Chandy-Misra-Haas, Stankovic, Singhal-Kshemkalyani, Roesler, Mitchell–Merritt). |
| **9. Blockchain** | | |

#### 9. Blockchain
- very basic info (not sufficient): Wikipedia - Bitcoin_protocol, Lightning_Network
- Bitcoin Wiki
https://en.bitcoin.it/wiki/Main_Page
- Andreas Antonopoulos: Mastering Bitcoin - esp. chapters 2 and 6 to 10
https://github.com/bitcoinbook/bitcoinbook
- Andreas Antonopoulos: Mastering the Lightning Network - chapters 3 and 7
https://github.com/lnbook/lnbook
- YouTube Andreas Antonopoulos

