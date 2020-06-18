#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

long long max_dot_product(vector<long long> a, vector<long long> b) {
  long long result = 0;
  long long n_sqr = 9 ;
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  
  for(long long i = 0 ; i < a.size() ; i++){
  	result = result + ((long long)a.at(i))*b.at(i);
  }
	
	return result;
}



int main() {
  size_t n;
  std::cin >> n;
  vector<long long> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << max_dot_product(a, b) << std::endl;
}
