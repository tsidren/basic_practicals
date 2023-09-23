# DFS implementation

def dfs(graph, root):
    visited, Stack = set(), [root]
    visited.add(root)
    while Stack:
        vertex = Stack.pop()
        print(str(vertex) + " ", end="")

        for neighbour in graph[vertex]:
            if neighbour not in visited:
                visited.add(neighbour)
                Stack.append(neighbour)


if __name__ == '__main__':
    print("created by Shivanshu.")
    print("roll: 2100971520048")
    print("program no:2, DFS implementation.\n")

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
    print("Depth First Traversal from node", start, "is: ")
    dfs(graph, start)
