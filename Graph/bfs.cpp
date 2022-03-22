template<class T>
void bfs(graph<T> &g, vector<int> s) {
  g.init();
  queue<int> q;
  for (int x : s) {
    g.d[x] = 0;
    q.emplace(x);
  }
  while (!q.empty()) {
    int i = q.front();
    q.pop();
    for (int id : g.g[i]) {
      int v = g.edges[id].from;
      int to = g.edges[id].to;
      T w = g.edges[id].cost;
      if (g.d[to] != -1) {
        continue;
      }
      g.d[to] = w + g.d[v];
      g.p[to] = v;
      q.emplace(to);
    }
  }
}