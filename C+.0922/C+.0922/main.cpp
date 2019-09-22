#include <iostream>
#include <vector>
#include <string>
using namespace std;

//int main(){
//
//	vector<int> v;
//	for (int i = 1; i <= 10; i++){
//		v.push_back(i);
//	}
//
//#if 0   //insert
//	v.insert(v.begin() + 5, 18);
//
//#elif 0
//	v.insert(v.begin() + 5, 3, 10);
//
//#elif 0
//	int a[5] = { 10, 20, 30, 40, 50 };
//	v.insert(v.begin() + 5, a + 1, a + 3);
//
//#endif
//
//#if 1  //erase
//	v.erase(v.begin() + 5);
//
//#else
//	v.erase(v.begin() + 5, v.end() - 3);
//
//#endif
//
//	for (auto&i : v){
//		cout << i << ' ';
//	}
//
//	system("pause");
//	return 0;
//}


//数组中出现次数超过数组长度一半数字
int findMaxTimesNum(const vector<int>& v){

	int icount = 1;
	int num = v[0];
	
	int i;
	for (i = 1; i < v.size(); i++){
		if (v[i] == v[i - 1]){
			icount++;
		}
		else{
			if (icount <= 1){
				num = v[i];
			}
			else{
				icount--;
			}
		}
	}
	
	if (v.size() / 2 < count(v.begin(), v.end(), num)){
		return num;
	}
	return 0;
}

int main(){

	int nums[9] = { 2, 2, 3, 8, 5, 4, 3, 2, 2 };
	vector<int> v;
	v.insert(v.begin(), nums, nums + 9);

	cout << findMaxTimesNum(v) << endl;

	system("pause");
	return 0;

}