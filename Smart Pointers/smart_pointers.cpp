#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

class Test {
private:
	int data;
public:
	Test() :data{ 0 } {
		cout << "\tTest constuctor (" << data << ")" << endl;
	}
	Test(int d) :data{ d } {
		cout << "\tTest constructor (" << data << ")" << endl;
	}
	int get_data() const { return data; }
	~Test() {
		cout << "\tTest Destructor (" << data << ")" << endl;
	}
};

auto make();
void fill(vector<shared_ptr<Test>>& vec, int num);
void display(const vector<shared_ptr<Test>>& vec);


auto make() {
	return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>>& vec, int num) {
	for (int i = 0; i < num; i++) {
		cout << "Enter data point [" << i + 1 << "]: ";
		int n;
		cin >> n;
		vec.push_back(make_shared<Test>(n));
	}
}

void display(const vector<shared_ptr<Test>>& vec) {
	cout << "===========================\n";
	for (auto& v : vec) {
		cout << v->get_data() << endl;
	}
	cout << "===========================\n";
}

int main()
{
	unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
	vec_ptr = make();
	cout << "How many data points do you want to enter: ";
	int num;
	cin >> num;
	fill(*vec_ptr, num);
	display(*vec_ptr);
	return 0;
}

