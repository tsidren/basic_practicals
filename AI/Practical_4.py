from queue import PriorityQueue

graph = {
    'A': [('B', 4, 2), ('C', 2, 3)],
    'B': [('D', 5, 2)],
    'C': [('E', 3, 4)],
    'D': [('F', 6, 0)],
    'E': [('F', 7, 1)],
    'F': []
}

def best_first_search(graph, start, goal):
    visited = set()
    priority_queue = PriorityQueue()
    priority_queue.put((0, start))
    parent = {}

    while not priority_queue.empty():
        _, current_node = priority_queue.get()
        visited.add(current_node)

        if current_node == goal:
            print("Path is:")
            path = []
            while current_node != start:
                path.append(current_node)
                current_node = parent[current_node]
            path.append(start)
            path.reverse()
            print(" -> ".join(path))
            break

        for neighbor, cost, heuristic in graph[current_node]:
            if neighbor not in visited:
                priority_queue.put((heuristic, neighbor))
                parent[neighbor] = current_node
    if goal not in visited:
        print("Path not found.")

if __name__ == "__main__":
    print("created by Shivanshu.")
    print("roll: 2100971520048")
    print("program no:4, Best First Algorithm.\n")

    start_node = input("enter the initial state: ")
    goal_node = input("enter the goal state: ")
    print(f"best-first search from {start_node} to {goal_node}: ")
    best_first_search(graph, start_node, goal_node)
