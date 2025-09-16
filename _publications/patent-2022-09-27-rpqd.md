---
title: "Regular path queries (RPQS) for distributed graphs"
collection: publications
category: patents
permalink: /publication/patent-2022-09-27-rpqd
# excerpt: 'In this paper, we introduce aDFS: A distributed graph-querying system that can process practically any query fully in memory, while maintaining bounded runtime memory consumption. To achieve this behavior, aDFS relies on (i) almost depth-first (aDFS) graph exploration with some breadth-first characteristics for performance, and (ii) non-blocking dispatching of intermediate results to remote edges. We evaluate aDFS against state-of-the-art graph-querying (Neo4J and GraphFrames for Apache Spark), graph-mining (G-Miner, Fractal, and Peregrine), as well as dataflow joins (BiGJoin), and show that aDFS significantly outperforms prior work on a diverse selection of workloads.'
date: 2022-09-27
venue: 'US'
# slidesurl: 'https://www.usenix.org/system/files/atc21_slides_trigonakis.pdf'
paperurl: 'https://patentimages.storage.googleapis.com/5f/1d/65/ecd0b61d536311/US11456946.pdf'
# bibtexurl: 'https://www.usenix.org/biblio/export/bibtex/273939'
citation: 'Tonkovic, P., Trigonakis, V., Faltin, T., Hong, S. and Chafi, H., Oracle International Corp, 2022. Regular path queries (RPQS) for distributed graphs. U.S. Patent 11,456,946.'
---
A pattern matching engine interprets a query into a data structure resembling a finite state machine. Vertices in the query pattern are treated as states or stages, while edges connecting them are treated as state transitions or hops. To match the full pattern, the first stage is first matched by applying vertex filters, if any. If the vertex is eligible, its edges that satisfy the edge filters, if any, are followed to move to the neighbors that can potentially produce results, thus progressing to the next stage. This process is repeated; if all stages are matched, then the whole pattern has been matched successfully.
