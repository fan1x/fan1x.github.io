---
title: "Tapestry: Revealing Wait-For Dependencies Between Application Threads"
collection: publications
category: conferences
permalink: /publication/paper-2025-10-13-tapestry
excerpt: 'Application slowdowns that accumulate on the critical path significantly impact performance. Identifying them requires visualizing inter-thread wait-for dependencies, a task ne￾glected by existing tools, especially regarding ad-hoc, busy￾waiting synchronization. We present Tapestry, which effi￾ciently traces these dependencies by dynamically switching between hardware watchpoints and software breakpoints. Using three use cases, we show that Tapestry is able to re￾veal NUMA effects and explain performance anomalies in oversubscribed and virtualized environments.'
date: 2025-10-13
venue: 'PLOS'
# slidesurl: 'https://www.usenix.org/system/files/atc21_slides_trigonakis.pdf'
paperurl: 'https://doi.org/10.1145/3764860.3768339'
# bibtexurl: 'https://www.usenix.org/biblio/export/bibtex/273939'
citation: "Tomáš Faltin, Himadri Chhaya-Shailesh, Julia Lawall, and Jean-Pierre Lozi. 2025. Tapestry: Revealing Wait-For Dependencies Between Application Threads. In Proceedings of the 13th Workshop on Programming Languages and Operating Systems (PLOS '25). Association for Computing Machinery, New York, NY, USA, 93–100. https://doi.org/10.1145/3764860.3768339"
---
Application slowdowns that accumulate on the critical path significantly impact performance. Identifying them requires visualizing inter-thread wait-for dependencies, a task neglected by existing tools, especially regarding ad-hoc, busy-waiting synchronization. We present Tapestry, which efficiently traces these dependencies by dynamically switching between hardware watchpoints and software breakpoints. Using three use cases, we show that Tapestry is able to reveal NUMA effects and explain performance anomalies in oversubscribed and virtualized environments.
