---
title: "Dynamic asynchronous traversals for distributed graph queries"
collection: publications
category: patents
permalink: /publication/patent-2023-06-13-adfs
# excerpt: 'In this paper, we introduce aDFS: A distributed graph-querying system that can process practically any query fully in memory, while maintaining bounded runtime memory consumption. To achieve this behavior, aDFS relies on (i) almost depth-first (aDFS) graph exploration with some breadth-first characteristics for performance, and (ii) non-blocking dispatching of intermediate results to remote edges. We evaluate aDFS against state-of-the-art graph-querying (Neo4J and GraphFrames for Apache Spark), graph-mining (G-Miner, Fractal, and Peregrine), as well as dataflow joins (BiGJoin), and show that aDFS significantly outperforms prior work on a diverse selection of workloads.'
date: 2023-06-13
venue: 'US'
# slidesurl: 'https://www.usenix.org/system/files/atc21_slides_trigonakis.pdf'
paperurl: 'https://patentimages.storage.googleapis.com/87/62/35/591e5a414b7307/US11675785.pdf'
# bibtexurl: 'https://www.usenix.org/biblio/export/bibtex/273939'
citation: 'Trigonakis, V., Faltin, T., Lozi, J.P., Haprian, V.I., Hong, S. and Chafi, H., Oracle International Corp, 2023. Dynamic asynchronous traversals for distributed graph queries. U.S. Patent 11,675,785.'
---
Techniques are described for enabling in-memory execution of any-sized graph data query by utilizing both depth first search (DFS) principles and breadth first search (BFS) principles to control the amount of memory used during query execution. Specifically, threads implementing a graph DBMS switch between a BFS mode of data traversal and a DFS mode of data traversal. For example, when a thread detects that there are less than a configurable threshold number of intermediate results in memory, the thread enters BFS-based traversal techniques to increase the number of intermediate results in memory. When the thread detects that there are at least the configurable threshold number of intermediate results in memory, the thread enters DFS mode to produce final results, which generally works to move the intermediate results that are currently available in memory to final query results, thereby reducing the number of intermediate results in memory.