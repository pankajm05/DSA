template<class T>
class graph {
public:
  struct edge {
    int from, to;
    T cost;
    bool operator <(const edge &other) {
      return (this->cost < other.cost);
    }
  };
  int n;
  vector<edge> edges;
  vector<vector<int>> g;
  vector<int> d;
  vector<int> p;

  graph(int _n) : n(_n) {
    g.resize(n);
  }

  void init() {
    d.assign(n, -1);
    p.resize(n);
    iota(p.begin(), p.end(), 0);
  }

  int add(int u, int v, T w = T()) {
    int id = (int) edges.size();
    g[u].push_back(id);
    edges.push_back({u, v, w});
    return id;
  }
};