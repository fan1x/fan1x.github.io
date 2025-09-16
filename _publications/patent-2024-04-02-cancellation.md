---
title: "Concurrency and cancellation in distributed asynchronous graph processing"
collection: publications
category: patents
permalink: /publication/patent-2024-04-02-cancellation
# excerpt: 'In this paper, we introduce aDFS: A distributed graph-querying system that can process practically any query fully in memory, while maintaining bounded runtime memory consumption. To achieve this behavior, aDFS relies on (i) almost depth-first (aDFS) graph exploration with some breadth-first characteristics for performance, and (ii) non-blocking dispatching of intermediate results to remote edges. We evaluate aDFS against state-of-the-art graph-querying (Neo4J and GraphFrames for Apache Spark), graph-mining (G-Miner, Fractal, and Peregrine), as well as dataflow joins (BiGJoin), and show that aDFS significantly outperforms prior work on a diverse selection of workloads.'
date: 2024-04-02
venue: 'US'
# slidesurl: 'https://www.usenix.org/system/files/atc21_slides_trigonakis.pdf'
paperurl: 'https://patentimages.storage.googleapis.com/b6/93/bd/de6f89e28f5cae/US11947539.pdf'
# bibtexurl: 'https://www.usenix.org/biblio/export/bibtex/273939'
citation: 'Trigonakis, V., Iorgulescu, C., Faltin, T., Hong, S. and Chafi, H., Oracle International Corp, 2024. Concurrency and cancellation in distributed asynchronous graph processing. U.S. Patent 11,947,539.'
---
Techniques to efficiently assign available workers to executing multiple graph queries concurrently on a distributed graph database are disclosed. The techniques comprise a runtime engine assigning multiple workers to executing portions of multiple graph queries, each worker in each assignment asynchronously executing a portion of a graph query within a parallel-while construct that includes return statements at different locations, and the runtime engine reassigning a worker to executing another portion of the same or a different graph query to optimize the overall performance of all workers.