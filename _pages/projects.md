---
title: "Projects"
permalink: /projects/
author_profile: true
redirect_from:
  - /projects.html
---

I’m always looking for motivated students and collaborators interested in **Performance Critical Systems**, more specifically in **distributed and parallel systems**, **big data (graph) processing**, or **operating systems**.
If you’d like to work on a *Bachelor’s, Master’s, or Ph.D. thesis*, or collaborate on a *research project leading to a publication*, feel free to contact me. 
You can either choose from the proposed topics below or suggest your own idea as long as it aligns with my research areas.

I’m also in contact with people from *industry (e.g., Oracle Labs)* and *research institutions (e.g., Inria Paris)*, so I can help connect students with opportunities for **research or industry internships** in these fields.

## Research Interests

- **Big Data Processing**  
    *e.g., large-scale graph analytics, streaming systems*

- **Graph Analytics**  
    *e.g., analytics of social networks using graphs, evolving (temporal) graphs*

- **Distributed and Parallel Data Processing Systems**  
    *e.g., consensus protocols, fault tolerance*

- **Data Systems for AI**  
    *e.g., efficient LLM-powered data processing on small clusters*

- **Blockchain**  
    *e.g., bitcoin, ethereum, blockchain protocols*

- **Operating Systems**  
    *e.g., scheduling algorithms, resource management, virtualization*

## Proposed Research Projects
Below are some potential topics for collaboration, project or thesis work. Each project is designed to lead to a **publishable research paper**:

### Efficient Graph Processing on Modern Hardware and Distributed Systems
How should graph systems change for new hardware (disaggregated memory, fast NVMe SSDs) and new techniques (learned indexes, worst-case optimal joins)?
Most existing systems assume a **static** graph. We evaluate on **evolving** graphs from real social networks (see the [Infoveillance](https://ufal.mff.cuni.cz/cs/node/2884) topics below), with bursts and mass deletions that existing work rarely tests.
**No special hardware is needed:** disaggregated (CXL) memory is commonly emulated with the remote socket of a two-socket server (e.g., as in [Pond](https://github.com/moatsyslab/pond)) or simulated (e.g., gem5), and NVMe SSDs are commodity hardware.

**Disaggregated memory (CXL)**  
*Starting point:* [DMG](https://www.microsoft.com/en-us/research/publication/dmg-a-scalable-and-efficient-memory-disaggregated-graph-processing-system/), [FAM-Graph](https://par.nsf.gov/biblio/10469910).
1. **Shared graph in a memory pool** *(Mgr./Ph.D.)* – several machines work on one graph in shared memory without copying it. Most work treats the graph as read-only; keep it consistent while the social graph changes.
2. **Near-memory processing** *(Mgr./Ph.D.)* – push traversal steps (neighbor scans, filters) to the memory side instead of moving edges over the interconnect.
3. **Many graph jobs, one memory pool** *(Mgr.)* – several analytics jobs share one graph in pooled memory; design scheduling and isolation between them.

**NVMe SSDs**  
*Starting point:* [ChunkGraph](https://www.usenix.org/conference/atc24/presentation/wang-rui) (ATC'24), ACGraph (SIGMOD'26), LSMGraph (SIGMOD'24), [GraphSSD](https://csarch.korea.ac.kr/publication/ssd_graph_isca19/) (ISCA'19).

4. **Graph-aware I/O parallelization** *(Mgr./Ph.D.)* – generic page caches ignore graph structure. Use it to decide which reads to issue, merge, and prioritize (e.g., next BFS frontier, high-degree vertices), using io_uring or SPDK.
5. **Graph-aware placement across multiple SSDs** *(Mgr.)* – spread the graph over several NVMe drives and queues so a traversal keeps all devices busy instead of hitting one.
6. **Evolving graphs on SSD** *(Mgr./Ph.D.)* – keep recent edges in memory and history on SSD, optimized for time-range queries ("who interacted in the last hour") and for mass deletions.

**Learned indexes**  
*Starting point:* [LHGstore](https://arxiv.org/abs/2603.11596) (DAC'26), the first learned-index graph storage, in-memory and single-machine.

7. **Learned index for timestamped edges** *(Bc./Mgr.)* – edge timestamps arrive almost in order, an ideal case for learned indexes; support fast time-range neighbor queries.
8. **Learned indexes under bursts** *(Mgr.)* – learned indexes degrade when data shifts suddenly, which is what viral bursts do. Measure it on real data and fix it.
9. **Distributed learned graph index** *(Mgr./Ph.D.)* – partition the graph and its learned models across machines.

**Worst-case optimal joins (WCOJ)**  
*Starting point:* [BiGJoin](https://ar5iv.labs.arxiv.org/html/1802.03760) (distributed), Free Join (SIGMOD'23), cuMatch (GPU, SIGMOD'25).

10. **Temporal WCOJ** *(Mgr./Ph.D.)* – subgraph patterns with time limits, e.g., a group of accounts all reposting within 30 seconds; this is how coordinated campaigns are found.
11. **WCOJ on disaggregated memory or SSD** *(Mgr./Ph.D.)* – WCOJ performs many random reads, the worst pattern for remote memory or SSD. Decide what to keep local and what to push down.

**Blockchain**

12. **Append-only graph store** *(Mgr.)* – blockchain transaction graphs never delete, while social graphs delete a lot. Design storage that exploits append-only data and compare both workloads; support time-respecting path queries for tracing money flows.
13. **Verifiable graph queries** *(Mgr./Ph.D.)* – an untrusted server answers a graph query and proves the answer is correct, e.g., for decentralized blockchain indexers.

**Data mining for systems**

14. **Learn caching and partitioning from query logs** *(Bc./Mgr.)* – mine which parts of the graph analysts actually query, and use it to decide what to cache in memory and how to partition the graph.

### Operating System Scheduler Benchmark
With [sched_ext](https://github.com/sched-ext/scx), anyone can now write and load a new Linux scheduler as an eBPF program, without rebuilding the kernel.
This led to dozens of new schedulers, each tuned for different workloads (gaming, desktops, servers, latency-critical apps).
But how do we know which one is better, and for what? Scheduler changes are tested by running a large collection of applications and micro-benchmarks (e.g., hackbench, schbench, Phoronix Test Suite), yet nobody knows exactly which patterns these applications exhibit inside (how threads wake each other, how long they run, how they synchronize). So when a scheduler wins or loses, it is unclear *why*, and whether the result carries over to other applications.
Databases solved the same problem decades ago with standard benchmarks such as [TPC](https://www.tpc.org/) and [LDBC](https://ldbcouncil.org/): understand real workloads, turn them into well-defined, reproducible benchmarks, and compare systems fairly.
The goal is to build the same for OS schedulers.

1. **What do real applications do?** *(Bc./Mgr.)*  
   Start from the applications already used to test Linux schedulers, plus real ones (databases, web servers, browsers, games, ML training, compilers), and trace them with our tool [Tapestry](https://dl.acm.org/doi/10.1145/3764860.3768339) and eBPF.
   Measure how long threads run and sleep, who wakes whom (a *wakeup graph*), how they synchronize, and how bursty they are.

2. **A taxonomy of scheduling patterns** *(Mgr.)*  
   Find the recurring patterns across applications, e.g., producer–consumer pipelines, fork–join, many short requests, or lock-heavy contention, and describe them precisely so they can be measured and reproduced.

3. **Workload generator** *(Mgr.)*  
   Build a configurable generator that reproduces these patterns without the original application, so any scheduler can be tested on any mix of patterns, similar to the LDBC data generator.

4. **The benchmark itself** *(Mgr./Ph.D.)*  
   Define the workload mixes, metrics (tail latency, throughput, fairness, energy), and reporting rules, then evaluate the default Linux scheduler (EEVDF) and the existing sched_ext schedulers.
   The key result: which scheduler wins for which pattern, and why.

### Systems for Monitoring Evolving Social Networks
These topics are part of the [Infoveillance](https://ufal.mff.cuni.cz/cs/node/2884) project (ÚFAL, with Newton Media and Ipsos), which monitors hundreds of thousands of Czech social-media accounts in real time to detect disinformation campaigns.
You will work with **real data** and real analyst workloads, which most systems research lacks.
The topics share one data pipeline, so they build on each other and can be combined.

1. **What do real social graphs look like?** *(Bc./Mgr.)*  
   Measure how the social graph evolves: how bursty growth is during events, how often accounts and posts get deleted, how fast groups of coordinated accounts form and dissolve.
   Most graph systems are tested on synthetic data that assumes much smoother behavior.

2. **Benchmark for graph + vector + time queries** *(Mgr.)*  
   Analysts ask questions like *"posts similar to this narrative, from accounts close to known spreaders, in the last 6 hours"*, which combine a graph, text embeddings (vectors), and time.
   Existing benchmarks (e.g., [LDBC SNB](https://ldbcouncil.org/benchmarks/snb/)) cover only parts of this. Design a benchmark and a data generator calibrated on real data, then evaluate existing databases.

3. **Real-time detection of coordinated behavior** *(Mgr./Ph.D.)*  
   Coordinated campaigns show up as many accounts sharing the same link within seconds, again and again.
   Express this as a continuous query over a changing graph, compare how different engines handle it (e.g., Flink, Differential Dataflow, graph databases), and fix where they break.

4. **Bounded-memory detection during viral bursts** *(Mgr./Ph.D.)*  
   A link shared by 5,000 accounts creates ~12.5 million account pairs to compare, exactly when detection matters most.
   Design a streaming algorithm (e.g., using sketches or sampling) that keeps memory bounded with provable accuracy.

5. **Optimizing graph + vector queries** *(Mgr./Ph.D.)*  
   Should a query first traverse the graph or first search for similar vectors? The best order depends on the data and changes as the graph evolves.
   Design an adaptive query optimizer for such hybrid queries.

6. **LLMs on a small cluster: what to analyze when you can't analyze everything** *(Mgr./Ph.D.)*  
   Language models are too expensive to run on every post, especially on a few GPUs. When posts arrive faster than the cluster can process them, decide which go to the large model, which to a cheap one, and which are skipped, so the most anomalies are found per GPU-second.

7. **Using the graph to avoid LLM calls** *(Mgr./Ph.D.)*  
   Reposts and copy-paste campaigns mean the same content appears thousands of times.
   Use the repost graph and near-duplicate detection to reuse labels instead of calling the model, and measure how many calls can be skipped without losing accuracy.

8. **Smart data collection under API limits** *(Bc./Mgr.)*  
   Platforms limit how often we can download data. Decide which accounts to check next so bursts are detected as early as possible, e.g., by checking neighbors of accounts that just became active.

No background in machine learning or linguistics is needed; the focus is on systems, data structures, and algorithms.


## Assigned Projects

### Efficient Tracing of Synchronization Primitives
Continuation of work of our tool [Tapestry](https://dl.acm.org/doi/10.1145/3764860.3768339). 
We trace and visualize synchronization primitives, such as blocking (e.g., futex) and busy-waiting (e.g., spinloops).

### Efficient Graph Processing using CRDTs
Improve the standard CSR using [CRDTs](https://en.wikipedia.org/wiki/Conflict-free_replicated_data_type).

### Efficient Disaggregated Heterogeneous Architecture for Graph Processing
Create a disaggregated architecture that can be easily used by various graph processing engines.

### Blockchain Simulator
A simulator that simulates and visualizes various blockchain algorithms.
