#include <bits/stdc++.h>

using namespace std;

void showAns(vector<pair<int, string>> &v) {
  int n = v.size();
  for(int i = 0; i < n; i++) {
    cout << v[i].first << " " << v[i].second << endl;
  }
  return ;
}

class foo
{
private:
  int _val = 10;
public:
  foo();
  ~foo();
  void modify(int val) {
    _val = val;
  } 
};

foo::foo(/* args */)
{
  cout << _val << endl;
}

foo::~foo() {
  cout << _val << endl;
}

int main() {
  // test I/O
  int ipt = 10;
  cout << "plz assign 10 for input" << endl;
  cin >> ipt;
  assert(ipt == 10);
  // test lib
  vector<pair<int, string>> v;
  pair<int, string> tmp1 = {0, "hello"};
  pair<int, string> tmp2 = {1, "WTF!"};
  v.push_back(tmp1);
  v.push_back(tmp2);
  // test func
  showAns(v);
  // test class
  foo a;
  a.modify(20);
  cout << "test finished!" << endl;
  return 0;
}