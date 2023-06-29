function findTownChief(trust) {
    const graph = new Map();

    // constrct the graph
    for (const [a, b] of trust) {
        if (!graph.has(a)) {
            graph.set(a, []);
        }
        graph.get(a).push(b);
    }

    let townChief = -1;
    // check town chief
    for (const person of graph.keys()) {
        if (!graph.get(person).length) {
            // no edges
            const incomingEdges = new Set();

            for (const neighbour of graph.keys()) {
                if (neighbour != person && graph.get(neighbour).includes(person)) {
                    incomingEdges.add(neighbour);
                }
            }
            if (incomingEdges.size === graph.size - 1) {
                townChief = person;
                break;
            }
        }
    }
    return townChief;
}

const trust = [[1, 3], [1, 4], [2, 3], [4, 3], [4, 5]];
const townChief = findTownChief(trust);
console.log("The town chief is:", townChief);

