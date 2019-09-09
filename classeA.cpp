#include <iostream>
using namespace std;

class A {
	private:
		int A1;
		float A2;
	public:
		void setA1 (int A1){ 
			this->A1 = A1;
		}
		void setA2 (float A2){ 
			this->A2 = A2;
		}
		int getA1() {
			return A1;
		}
		float getA2() {
			return A2;
		}
		void MA1() {
			cout << "MA1" << endl;
		}
		void MA2() {
			cout << "MA2" << endl;
		}
};
