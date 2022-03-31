template<typename T>
class matrix {
public:
  const T identity = T(1);
  int n, m;
  vector<vector<T>> mat;
  matrix(int _n, int _m, T v = T()) : n(_n), m(_m) {
    mat.resize(n);
    for (int i = 0; i < n; i++) {
      mat[i].assign(m, v);
    }
  }

  matrix(vector<vector<T>> &a) {
    assert(!a.empty());
    assert(!a[0].empty());
    matrix<T>(a.size(), a[0].size());
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        mat[i][j] = a[i][j];
      }
    }
  }

  matrix<T> operator [](const int id) {
    return mat[id];
  }

  matrix<T> operator +(const matrix<T> &other) {
    assert(n == other.n);
    assert(m == other.m);
    matrix<T> ans(n, m);
    for (int i = 0; i < ans.n; i++) {
      for (int j = 0; j < ans.m; j++) {
        ans.mat[i][j] = mat[i][j] + other.mat[i][j];
      }
    }
    return ans;
  }

  matrix<T> operator -(const matrix<T> &other) {
    assert(n == other.n);
    assert(m == other.m);
    matrix<T> ans(n, m);
    for (int i = 0; i < ans.n; i++) {
      for (int j = 0; j < ans.m; j++) {
        ans.mat[i][j] = mat[i][j] - other.mat[i][j];
      }
    }
    return ans;
  }

  matrix<T> operator *(const matrix<T> &other) {
    assert(m == other.n);
    matrix<T> ans(n, other.m);
    for (int i = 0; i < ans.n; i++) {
      for (int j = 0; j < ans.m; j++) {
        for (int k = 0; k < m; k++) {
          ans.mat[i][j] += (mat[i][k] * other.mat[k][j]);
        }
      }
    }
    return ans;
  }

  matrix<T> operator *(const T scaler) {
    matrix<T> ans(mat);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        ans.mat[i][j] *= scaler;
      }
    }
    return ans;
  }
};

template<class T>
matrix<T> mat_power(matrix<T> &a, long long b) {
  matrix<T> ans(a.n, a.m, a.identity);
  while (b) {
    if (b % 2 == 1) {
      ans = ans * a;
    }
    a = a * a;
    b >>= 1;
  }
  return ans;
}