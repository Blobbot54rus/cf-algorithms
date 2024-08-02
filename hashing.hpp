#include <main.hpp>

int base;
int px[MAX_N];
ull py[MAX_N];

struct hash_t {
  int x;
  ull y;
  hash_t() {
    x = 0, y = 0;
    return;
  }

  hash_t(int a, ull b) {
    x = a, y = b;
    return;
  }

  hash_t(string& s) {
    x = 0, y = 0;
    for (char c : s) {
      (x *= base) %= MOD;
      (x += int(c)) %= MOD;
      y *= ull(base);
      y += ull(c);
    }
    return;
  }

  bool operator == (const hash_t& h) const {
    return (x == h.x && y == h.y);
  }

  hash_t operator * (int v) const {
    return hash_t((x * v) % MOD, y * ull(v));
  }

  void operator *= (int v) {
    (x *= v) %= MOD;
    y *= ull(v);
    return;
  }

  hash_t operator << (int v) const {
    return hash_t((x * px[v]) % MOD, y * py[v]);
  }

  void operator <<= (int v) {
    (x *= px[v]) %= MOD;
    y *= py[v];
    return;
  }

  hash_t operator + (int v) const {
    return hash_t((x + v) % MOD, y + ull(v));
  }

  void operator += (int v) {
    (x += v) %= MOD;
    y += ull(v);
    return;
  }

  hash_t operator + (const hash_t& h) const {
    return hash_t((x + h.x) % MOD, y + ull(h.y));
  }

  void operator += (const hash_t& h) {
    (x += h.x) %= MOD;
    y += ull(h.y);
    return;
  }

  hash_t operator - (int v) const {
    return hash_t((x - v + MOD) % MOD, y - ull(v));
  }

  void operator -= (int v) {
    (x -= v - MOD) %= MOD;
    y -= ull(v);
    return;
  }

};

void prepare() {
  base = rint(MOD/2, MOD-2);
  base |= 1;
  px[0] = 1;
  py[0] = 1;
  for (int i = 1; i < MAX_N; i++) {
    px[i] = (px[i-1] * base) % MOD;
    py[i] = py[i-1] * ull(base);
  }
  return;
}