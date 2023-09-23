# BFS implementation

import collections


def bfs(graph, root):
    visited, queue = set(), collections.deque([root])
    visited.add(root)
    while queue:
        vertex = queue.popleft()
        print(str(vertex) + " ", end="")

        for neighbour in graph[vertex]:
            if neighbour not in visited:
                visited.add(neighbour)
                queue.append(neighbour)


if __name__ == '__main__':
    print("created by Shivanshu.")
    print("roll: 2100971520048")
    print("program no:1, BFS implementation.\n")

    graph = {'A': ['B', 'C', 'D'],
             'B': ['A', 'E', 'F'],
             'C': ['A', 'G', 'H'],
             'D': ['A', 'I'],
             'E': ['B'],
             'F': ['B'],
             'G': ['C'],
             'H': ['C'],
             'I': ['D']}

    start = input("enter the starting node: ")
    print("Breadth First Traversal from node", start, "is: ")
    bfs(graph, start)
