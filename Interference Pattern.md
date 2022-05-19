#### Problem (easy version)

tag: tree, DP, Probability

Quantum Phicyst Oryx gives you a connected network of optic fibers without any loops. She now places light bulbs at the cortices/connection-points of the network. There're a total of $N$ cortices numbered from $1$ to $N$ and $N-1$ edges connecting them. In other words, the network is a tree. Each edge $i$ has length $l_i$. 
In the easy version of this problem, Oryx gives you $K$ locations, indicating where each of the $K$ lightbulbs are placed. Note that each cortex may have more than 1 lightbulb. Each lightbulb emits a photon. Photons move along the optic fibers at speed $1 \frac{m}{s}$. 
If a photon is at cortex $i$, which has $p$ number of edges connected to it. It may exit this cortex through any of those $p$ edges! However, if the photon entered this cortex through one of the edges, it may never exit through the same edge.
If there's no edge through which the photon can exit, it is trapped at that cortex.
If there're $m$ edges through which the photon can exit a cortex, it picks one of them with uniform probability $\frac{1}{m}$. 

When two photons intersect at a cortex $i$, a weird phisycs phenomenon happens:
Say the two photons each have existed for $a, b$ seconds.
1. if $a \mod 2 = b \mod 2$, then the photons can coexist at the cortex (they constructively interferes)
2. if $a\mod 2\not=b\mod 2$, then the two photons practically annihilate each other (they destructively interferes)

Oryx places a detector at cortex $1$. Each time a photon reaches the detector, the detector increments its counter by 1. Oryx wants to know the expected number of photons detected by the detector.

#### Solution
Simple tree expectation DP:
$dp_{i,j,k}$ records the probability of having $j$ odd photons and $k$ even photons at vertex $i$. 

There's probably a way to smartly delay the computation of the constructive/destructive interference to speed it up. Or maybe not.



#### Another version of the problem
Get rid of the probability aspect. Each photon at a cortex can duplicate and exit through all edges connected to that cortex (except the edge through which it entered). Now, we have the same interference laws. But we ask to find the location in the tree that detects the maximal number of photons. 

To make it extra hard, we can allow modifications of the number of lightbulbs at a location. This would warrant a HLD or Centroid Tree to solve I think.

#### Yet another hard version
Keep the probability, get rid of the condition that a photon cannot exit where it entered. This is very hard / intractable? 
