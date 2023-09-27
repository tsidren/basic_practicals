import heapq

# Define the graph as an adjacency list with node names, costs, and heuristic values.
graph = {
    'A': [('B', 4), ('C', 2)],
    'B': [('D', 5)],
    'C': [('E', 3)],
    'D': [('F', 6)],
    'E': [('F', 7)],
    'F': []
}


def astar(graph, start, goal):
    open_list = [(0, start)]  # Priority queue of nodes to be explored (cost, node)
    came_from = {}  # Dictionary to track the parent node for each node
    g_score = {node: float('inf') for node in graph}  # Cost from start to node
    g_score[start] = 0
    f_score = {node: float('inf') for node in graph}  # Estimated total cost from start to goal
    f_score[start] = heuristic(start, goal)

    while open_list:
        _, current_node = heapq.heappop(open_list)

        if current_node == goal:
            return reconstruct_path(came_from, current_node)

        for neighbor, cost in graph[current_node]:
            tentative_g_score = g_score[current_node] + cost

            if tentative_g_score < g_score[neighbor]:
                came_from[neighbor] = current_node
                g_score[neighbor] = tentative_g_score
                f_score[neighbor] = g_score[neighbor] + heuristic(neighbor, goal)
                heapq.heappush(open_list, (f_score[neighbor], neighbor))

    return None  # If goal not reachable


def heuristic(node, goal):
    # Define a simple heuristic (e.g., distance between node and goal)
    heuristic_values = {
        'A': 1,
        'B': 2,
        'C': 3,
        'D': 1,
        'E': 2,
        'F': 0,
    }
    return heuristic_values[node]


def reconstruct_path(came_from, current_node):
    path = [current_node]
    while current_node in came_from:
        current_node = came_from[current_node]
        path.append(current_node)
    path.reverse()
    return path


if __name__ == "__main__":
    print("created by Shivanshu.")
    print("roll: 2100971520048")
    print("program no:5, A* algorithm.\n")

    start_node = 'A'
    goal_node = 'F'
    print(f"Finding path from {start_node} to {goal_node} using A*")
    path = astar(graph, start_node, goal_node)

    if path:
        print("Path:", " -> ".join(path))
    else:
        print("Path not found.")


