#include <stdio.h>
#include <stdbool.h>

int findTownChief(int trust[][2], int trustSize) {
    int graph[101][101] = {0}; // Using an array to represent the graph

    // Construct the graph
    for (int i = 0; i < trustSize; i++) {
        int a = trust[i][0];
        int b = trust[i][1];
        graph[a][b] = 1;
    }

    int townChief = -1;

    // Check for the town chief
    for (int person = 1; person <= 100; person++) {
        int hasOutgoingEdges = 0;
        int allOthersTrust = 1;

        for (int other = 1; other <= 100; other++) {
            if (graph[person][other] == 1) {
                hasOutgoingEdges = 1;
                break;
            }
        }

        if (hasOutgoingEdges) {
            continue;
        }

        for (int other = 1; other <= 100; other++) {
            if (other != person && graph[other][person] != 1) {
                allOthersTrust = 0;
                break;
            }
        }

        if (allOthersTrust) {
            townChief = person;
            break;
        }
    }

    return townChief;
}

int main() {
    int trust[][2] = {{1, 3}, {1, 4}, {2, 3}, {4, 3}, {4, 5}};
    int trustSize = sizeof(trust) / sizeof(trust[0]);

    int townChief = findTownChief(trust, trustSize);
    printf("The town chief is: %d\n", townChief);

    return 0;
}
