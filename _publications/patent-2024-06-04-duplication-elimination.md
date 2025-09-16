---
title: "Duplication elimination in depth based searches for distributed systems"
collection: publications
category: patents
permalink: /publication/patent-2024-06-04-duplication-elimination
# excerpt: 'In this paper, we introduce aDFS: A distributed graph-querying system that can process practically any query fully in memory, while maintaining bounded runtime memory consumption. To achieve this behavior, aDFS relies on (i) almost depth-first (aDFS) graph exploration with some breadth-first characteristics for performance, and (ii) non-blocking dispatching of intermediate results to remote edges. We evaluate aDFS against state-of-the-art graph-querying (Neo4J and GraphFrames for Apache Spark), graph-mining (G-Miner, Fractal, and Peregrine), as well as dataflow joins (BiGJoin), and show that aDFS significantly outperforms prior work on a diverse selection of workloads.'
date: 2024-06-04
venue: 'US'
# slidesurl: 'https://www.usenix.org/system/files/atc21_slides_trigonakis.pdf'
paperurl: 'https://patentimages.storage.googleapis.com/a2/72/28/a3b083c1d50e39/US12001425.pdf'
# bibtexurl: 'https://www.usenix.org/biblio/export/bibtex/273939'
citation: 'Faltin, T., Trigonakis, V., Lozi, J.P., Hong, S. and Chafi, H., Oracle International Corp, 2024. Duplication elimination in depth based searches for distributed systems. U.S. Patent 12,001,425.'
---
Systems and methods for improving evaluation of graph queries through depth first traversals are described herein. In an embodiment, a multi-node system evaluates against graph data a graph query that specifies a particular pattern to match by determining, at a first node of the multi-node system, in a particular instance of evaluating the graph query, that one or more first vertices on the first node match a first portion of the graph query and that a second vertex that is to be evaluated next is stored on a second node separate from the first node. In response to determining that the next vertex to be evaluated is stored on the second node separate from the first node, the first node generates a message to the second node comprising one or more results of the first portion of the graph query based on the one or more first vertices, an identifier of the next vertex, and a current stage of evaluating the graph query. In response to generating the message from the first node to the second node, the first node ceases the particular instance of evaluating the graph query.
