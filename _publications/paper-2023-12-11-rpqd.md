---
title: "Distributed Asynchronous Regular Path Queries (RPQs) on Graphs"
collection: publications
category: conferences
permalink: /publication/paper-2023-12-11-rpqd
excerpt: 'In this paper, we introduce a novel design for distributed RPQs that builds on top of distributed asynchronous pipelined traversals to enable (i) memory control of path explorations, with (ii) great performance and scalability. Through our evaluation, we show that with sixteen machines, it outperforms Neo4j by 91× on average and a relational implementation of the same queries in PostgreSQL by 230×, while maintaining low memory consumption.'
date: 2023-12-11
venue: 'Middleware'
# slidesurl: 'https://www.usenix.org/system/files/atc21_slides_trigonakis.pdf'
paperurl: 'https://dl.acm.org/doi/pdf/10.1145/3626562.3626833'
# bibtexurl: 'https://www.usenix.org/biblio/export/bibtex/273939'
citation: "Tomáš Faltín, Vasileios Trigonakis, Ayoub Berdai, Luigi Fusco, Călin Iorgulescu, et al.. Distributed Asynchronous Regular Path Queries (RPQs) on Graphs. Middleware 2023: 24th International Middleware Conference, Dec 2023, Bologna, Italy, Italy. pp.35-41, ⟨10.1145/3626562.3626833⟩. ⟨hal-04355309⟩"
---
Graph engines play a crucial role in modern data analytics pipelines, serving as a middleware for handling complex queries across various domains, such as financial fraud detection. Graph queries enable flexible exploration and analysis, akin to SQL in relational databases. Among the most expressive and powerful constructs of graph querying are regular path queries (RPQs). RPQs enable support for variable-length path patterns based on regular expressions, such as (p1:Person)-/:Knows+/->(p2:Person) that searches for non-empty paths of any length between two persons.

In this paper, we introduce a novel design for distributed RPQs that builds on top of distributed asynchronous pipelined traversals to enable (i) memory control of path explorations, with (ii) great performance and scalability. Through our evaluation, we show that with sixteen machines, it outperforms Neo4j by 91× on average and a relational implementation of the same queries in PostgreSQL by 230×, while maintaining low memory consumption.