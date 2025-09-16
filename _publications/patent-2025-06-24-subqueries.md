---
title: "Subqueries in distributed asynchronous graph queries"
collection: publications
category: patents
permalink: /publication/patent-2025-06-24-subqueries
# excerpt: 'In this paper, we introduce aDFS: A distributed graph-querying system that can process practically any query fully in memory, while maintaining bounded runtime memory consumption. To achieve this behavior, aDFS relies on (i) almost depth-first (aDFS) graph exploration with some breadth-first characteristics for performance, and (ii) non-blocking dispatching of intermediate results to remote edges. We evaluate aDFS against state-of-the-art graph-querying (Neo4J and GraphFrames for Apache Spark), graph-mining (G-Miner, Fractal, and Peregrine), as well as dataflow joins (BiGJoin), and show that aDFS significantly outperforms prior work on a diverse selection of workloads.'
date: 2025-06-24
venue: 'US'
# slidesurl: 'https://www.usenix.org/system/files/atc21_slides_trigonakis.pdf'
paperurl: 'https://patentimages.storage.googleapis.com/bc/66/51/62ba7ef8bab399/US12197436.pdf'
# bibtexurl: 'https://www.usenix.org/biblio/export/bibtex/273939'
citation: 'Trigonakis, V., Ragot, A., Ez-Zainabi, Y., Faltin, T., Hong, S. and Chafi, H., Oracle International Corp, 2025. Subqueries in distributed asynchronous graph queries. U.S. Patent 12,197,436.'
---
A graph processing engine is provided for executing a graph query comprising a parent query and a subquery nested within the parent query. The subquery uses a reference to one or more correlated variables from the parent query. Executing the graph query comprises initiating execution of the parent query, pausing the execution of the parent query responsive to the parent query matching the one or more correlated variables in an intermediate result set, generating a subquery identifier for each match of the one or more correlated variables, modifying the subquery to include a subquery aggregate function and a clause to group results by subquery identifier, executing the modified subquery using the intermediate result set and collecting subquery results into a subquery results table responsive to pausing execution of the parent query, and resuming execution of the parent query using the subquery results table.
