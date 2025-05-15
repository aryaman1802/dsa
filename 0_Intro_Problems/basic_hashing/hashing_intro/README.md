## Hashing in C++

A hashmap in C++ is similar to a dictionary in Python.

Hashing cannot be done if the number of elements exceed $10^7$.

When using `map`, the time complexity is $O(\log n)$ for insertion and deletion, while for `unordered_map`, it is $O(1)$ on average. However, `unordered_map` can have a worst-case time complexity of $O(n)$ if there are many collisions.

There are 3 different hashing methods we can use to do hashing when we can more than $10^7$ elements:
1. Division method
2. Folding method
3. Mid-square method