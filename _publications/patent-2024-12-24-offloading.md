---
title: "Offloading graph components to persistent storage for reducing resident memory in distributed graph processing"
collection: publications
category: patents
permalink: /publication/patent-2024-12-24-offloading
# excerpt: 'In this paper, we introduce aDFS: A distributed graph-querying system that can process practically any query fully in memory, while maintaining bounded runtime memory consumption. To achieve this behavior, aDFS relies on (i) almost depth-first (aDFS) graph exploration with some breadth-first characteristics for performance, and (ii) non-blocking dispatching of intermediate results to remote edges. We evaluate aDFS against state-of-the-art graph-querying (Neo4J and GraphFrames for Apache Spark), graph-mining (G-Miner, Fractal, and Peregrine), as well as dataflow joins (BiGJoin), and show that aDFS significantly outperforms prior work on a diverse selection of workloads.'
date: 2024-12-24
venue: 'US'
# slidesurl: 'https://www.usenix.org/system/files/atc21_slides_trigonakis.pdf'
paperurl: 'https://patentimages.storage.googleapis.com/92/5d/50/8085ec515b0492/US12174835.pdf'
# bibtexurl: 'https://www.usenix.org/biblio/export/bibtex/273939'
citation: 'Delamare, A., Bunjaku, I., Trigonakis, V., Iorgulescu, C., Faltin, T., Hong, S. and Chafi, H., Oracle International Corp, 2024. Offloading graph components to persistent storage for reducing resident memory in distributed graph processing. U.S. Patent 12,174,835.'
---
A storage manager for offloading graph components to persistent storage for reducing resident memory in a distributed graph processing engine is provided. The storage manager identifies a set of graph components required to execute a graph processing operation on a graph in a graph processing engine of a database system and reserves an amount of memory needed to load the set of graph components into memory. The storage manager loads the set of graph components into memory and initiates execution of the graph processing operation using the set of graph components in memory. The storage manager evicts one or more unused graph components from memory in response to receiving a request to free a requested amount of memory from memory.
