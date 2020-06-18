#include <iostream>
#include <vector>

using std::vector;

/*bool find(vector<int>& summands , int num){
	for(int i = 0 ; i < summands.size() ; i++){
		if(summands.at(i) == num){
			return true;
			//std::cout<<"oye"<<std::endl;
		}
	}
	return false;
}*/

vector<int> optimal_summands(int n) {
  // using the algorithm described in the pdf
    vector<int> summands;
    for (int k = n, l = 1; k > 0; l++) {
        if (k <= 2 * l) {
            summands.push_back(k);
            k -= k;
        } else {
            summands.push_back(l);
            k -= l;
        }
    }
    return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
