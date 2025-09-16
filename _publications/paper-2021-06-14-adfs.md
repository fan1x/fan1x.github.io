---
title: "aDFS: An Almost Depth-First-Search Distributed Graph-Querying System"
collection: publications
category: conferences
permalink: /publication/paper-2021-06-14-adfs
excerpt: 'In this paper, we introduce aDFS: A distributed graph-querying system that can process practically any query fully in memory, while maintaining bounded runtime memory consumption. To achieve this behavior, aDFS relies on (i) almost depth-first (aDFS) graph exploration with some breadth-first characteristics for performance, and (ii) non-blocking dispatching of intermediate results to remote edges. We evaluate aDFS against state-of-the-art graph-querying (Neo4J and GraphFrames for Apache Spark), graph-mining (G-Miner, Fractal, and Peregrine), as well as dataflow joins (BiGJoin), and show that aDFS significantly outperforms prior work on a diverse selection of workloads.'
date: 2021-06-14
venue: 'USENIX ATC'
slidesurl: 'https://www.usenix.org/system/files/atc21_slides_trigonakis.pdf'
paperurl: 'https://www.usenix.org/system/files/atc21-trigonakis.pdf'
bibtexurl: 'https://www.usenix.org/biblio/export/bibtex/273939'
citation: 'Trigonakis, V., Lozi, J.P., Faltín, T., Roth, N.P., Psaroudakis, I., Delamare, A., Haprian, V., Iorgulescu, C., Koupy, P., Lee, J. and Hong, S., 2021. aDFS: An Almost Depth-First-Search Distributed Graph-Querying System. In 2021 USENIX Annual Technical Conference (USENIX ATC 21) (pp. 209-224).'
---
Graph processing is an invaluable tool for data analytics. In particular, pattern-matching queries enable flexible graph exploration and analysis, similar to what SQL provides for relational databases. Graph queries focus on following connections in the data; they are a challenging workload because even seemingly trivial queries can easily produce billions of intermediate results and irregular data access patterns.

In this paper, we introduce aDFS: A distributed graph-querying system that can process practically any query fully in memory, while maintaining bounded runtime memory consumption. To achieve this behavior, aDFS relies on (i) almost depth-first (aDFS) graph exploration with some breadth-first characteristics for performance, and (ii) non-blocking dispatching of intermediate results to remote edges. We evaluate aDFS against state-of-the-art graph-querying (Neo4J and GraphFrames for Apache Spark), graph-mining (G-Miner, Fractal, and Peregrine), as well as dataflow joins (BiGJoin), and show that aDFS significantly outperforms prior work on a diverse selection of workloads.