#### Problem

tag: Djikstra, DP

Michael needs to walk to school everyday from downtown. There're $n$ crossings and $m$ paths connecting these crossings. Michael starts from crossing $1$ he needs to reach crossing $T$. Now, because of the fabulous New England weather, each path $i$ is either covered in snow with depth $x_i$, or cleared of snow by the hard working oppressed lower class. Walking in snow is tiring, so walking along each snowy path increases Michael's dreariness $d$ by $1$. Further, walking on snow costs Michael energy. The energy of crossing the path $i$ is $d \cdot x_i$. Find the minimum energy Michael needs to get to school. 

#### Solution

One simple solution is to track $d$ as a state in the djikstra. I've not come up with a better idea yet. Intended solution is about $O(n^2 \log(n))$.

