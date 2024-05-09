from collections import defaultdict

def is_stable_city(graph, n, k):
  visited = [False] * n
  stable = [False] * n  # Track suitable cities for stables

  def dfs(node, parent, path_length):
    visited[node] = True
    for neighbor in graph[node]:
      if neighbor == parent:  # Skip backtracking edge
        continue
      if visited[neighbor]:
        # Cycle found if neighbor was previously visited (excluding the parent)
        if (path_length - 1) % k == 0:  # Check cycle length (excluding current node)
          for visited_node in visited:
            if visited_node:
              stable[visited_node] = True
      else:
        dfs(neighbor, node, path_length + 1)  # Explore further with updated path length
    visited[node] = False  # Backtrack

  for i in range(n):
    if not visited[i]:
      # Check for single self-loop road (treated as a valid cycle of length 1)
      if len(graph[i]) == 1 and graph[i][0] == i:
        stable[i] = True
      else:
        dfs(i, -1, 1)  # Start DFS from each unvisited node, -1 as a dummy parent

  return sum(stable)

def main():
  T = int(input())
  for _ in range(T):
    n, m, k = map(int, input().split())
    graph = defaultdict(list)  # Adjacency list representation of the graph
    for _ in range(m):
      x, y = map(int, input().split())
      graph[x].append(y)
      graph[y].append(x)  # Consider two-way roads
    result = is_stable_city(graph, n, k)
    print(result)

if __name__ == "__main__":
  main()
