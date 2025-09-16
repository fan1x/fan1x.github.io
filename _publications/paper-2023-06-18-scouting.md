---
title: "Better Distributed Graph Query Planning With Scouting Queries"
collection: publications
category: conferences
permalink: /publication/paper-2023-06-18-scouting
excerpt: 'This paper introduces scouting queries, a lightweight mechanism to gather runtime information about different query plans, which can then be used to choose the "best" plan. In a pipelined, depth-first-oriented graph processing engine, scouting queries typically execute for a brief amount of time with negligible overhead. Partial results can be reused to avoid redundant work. We evaluate scouting queries and show that they bring speedups of up to 8.7× for heavy queries, while adding low overhead for those queries that do not benefit.'
date: 2023-06-18
venue: 'GRADES-NDA'
# slidesurl: 'https://www.usenix.org/system/files/atc21_slides_trigonakis.pdf'
paperurl: 'https://doi.org/10.1145/3594778.3594884'
# bibtexurl: 'https://www.usenix.org/biblio/export/bibtex/273939'
citation: "Tomáš Faltín, Vasileios Trigonakis, Ayoub Berdai, Luigi Fusco, Călin Iorgulescu, Sungpack Hong, and Hassan Chafi. 2023. Better Distributed Graph Query Planning With Scouting Queries. In Proceedings of the 6th Joint Workshop on Graph Data Management Experiences &amp; Systems (GRADES) and Network Data Analytics (NDA) (GRADES-NDA '23). Association for Computing Machinery, New York, NY, USA, Article 3, 1–9. https://doi.org/10.1145/3594778.3594884"
---
Query planning is essential for graph query execution performance. In distributed graph processing, data partitioning and messaging significantly influence performance. However, these aspects are difficult to model analytically, which makes query planning especially challenging. This paper introduces scouting queries, a lightweight mechanism to gather runtime information about different query plans, which can then be used to choose the "best" plan. In a pipelined, depth-first-oriented graph processing engine, scouting queries typically execute for a brief amount of time with negligible overhead. Partial results can be reused to avoid redundant work. We evaluate scouting queries and show that they bring speedups of up to 8.7× for heavy queries, while adding low overhead for those queries that do not benefit.